/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "eos_p2p_types.h"
#include "P2P/EOSP2PTypes.h"
#include "EOSP2P.generated.h"

/**
 * P2P functions to help manage sending and receiving of messages to peers
 *
 * These functions will attempt to perform NAT-punching, but will fallback to relays if a direct connection cannot be established
 */

UCLASS()
class EOSCORE_API UCoreP2P : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
   UCoreP2P();
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreP2P* GetP2P() { return P2PObject; }
public:
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|P2P|Delegates")
		FOnP2PIncomingConnectionRequestCallbackDelegate OnP2PIncomingConnectionRequestCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|P2P|Delegates")
		FOnP2PRemoteConnectionClosedCallbackDelegate OnP2PRemoteConnectionClosedCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|P2P|Delegates")
		FOnP2PQueryNATTypeCompleteCallbackDelegate OnP2PQueryNATTypeCompleteCallbackDelegate;
public:
	/**
	 * Send a packet to a peer at the specified address. If there is already an open connection to this peer, it will be
	 * sent immediately. If there is no open connection, an attempt to connect to the peer will be made. A EOS_Success
	 * result does not guarantee the packet will be delivered to the peer, as data is sent unreliably.
	 *
	 * @param Options Information about the data being sent, by who, to who
	 * @return EOSResult::EOS_Success           - If packet was queued to be sent successfully
	 *         EOSResult::EOS_InvalidParameters - If input was invalid
	 */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PSendPacket(FEOSP2PSendPacketOptions options);

	/**
	 * Gets the size of the packet that will be returned by ReceivePacket for a particular user, if there is any available
	 * packets to be retrieved.
	 *
	 * @param Options Information about who is requesting the size of their next packet
	 * @param OutPacketSize The amount of bytes required to store the data of the next packet for the requested user
	 * @return EOSResult::EOS_Success - If OutPacketSize was successfully set and there is data to be received
	 *         EOSResult::EOS_InvalidParameters - If input was invalid
	 *         EOSResult::EOS_NotFound  - If there are no packets available for the requesting user
	 */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PGetNextReceivedPacketSize(FEOSP2PGetNextReceivedPacketSizeOptions options, int32& outPacketSizeBytes);

	/**
	 * Receive the next packet for the local user, and information associated with this packet, if it exists.
	 *
	 * @param Options Information about who is requesting the size of their next packet, and how much data can be stored safely
	 * @param OutPeerId The Remote User who sent data. Only set if there was a packet to receive.
	 * @param OutSocketId The Socket ID of the data that was sent. Only set if there was a packet to receive.
	 * @param OutChannel The channel the data was sent on. Only set if there was a packet to receive.
	 * @param OutData Buffer to store the data being received. Must be at least EOS_P2P_GetNextReceivedPacketSize in length or data will be truncated
	 * @param OutBytesWritten The amount of bytes written to OutData. Only set if there was a packet to receive.
	 * @return EOSResult::EOS_Success - If the packet was received successfully
	 *         EOSResult::EOS_InvalidParameters - If input was invalid
	 *         EOSResult::EOS_NotFound - If there are no packets available for the requesting user
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PReceivePacket(FEOSP2PReceivePacketOptions options, FEOSProductUserId& outPeerId, FEOSP2PSocketId& outSocketId, int32& outChannel, TArray<uint8>& outData, int32& outBytesWritten);

	/**
	 * Listen for incoming connection requests on a particular Socket ID, or optionally all Socket IDs. The bound function
	 * will only be called if the connection has not already been accepted.
	 *
	 * @param Options Information about who would like notifications, and (optionally) only for a specific socket
	 * @param ClientData This value is returned to the caller when ConnectionRequestHandler is invoked
	 * @param ConnectionRequestHandler The callback to be fired when we receive a connection request
	 * @return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		FEOSNotificationId EOSP2PAddNotifyPeerConnectionRequest(FEOSP2PAddNotifyPeerConnectionRequestOptions options, const FOnP2PIncomingConnectionRequestCallback& callback);

	/**
	 * Stop listening for connection requests on a previously bound handler
	 *
	 * @param NotificationId The previously bound notification ID
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		void EOSP2PRemoveNotifyPeerConnectionRequest(FEOSNotificationId id);

	/**
	 * Listen for when a previously opened connection is closed
	 *
	 * @param Options Information about who would like notifications about closed connections, and for which socket
	 * @param ConnectionClosedHandler The callback to be fired when we an open connection has been closed
	 * @return A valid notification ID if successfully bound, or EOS_INVALID_NOTIFICATIONID otherwise
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		FEOSNotificationId EOSP2PAddNotifyPeerConnectionClosed(FEOSP2PAddNotifyPeerConnectionClosedOptions options);

	/**
	 * Stop notifications for connections being closed on a previously bound handler
	 *
	 * @param NotificationId The previously bound notification ID
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		void EOSP2PRemoveNotifyPeerConnectionClosed(FEOSNotificationId id);

	/**
	 * Accept connections from a specific peer. If this peer has not attempted to connect yet, when they do, they will automatically be accepted.
	 *
	 * @param Options Information about who would like to accept a connection, and which connection
	 * @return EOSResult::EOS_Success - if the provided data is valid
	 *         EOSResult::EOS_InvalidParameters - if the provided data is invalid
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PAcceptConnection(FEOSP2PAcceptConnectionOptions options);

	/**
	 * Stop accepting new connections from a specific peer and close any open connections.
	 *
	 * @param Options Information about who would like to close a connection, and which connection.
	 * @return EOSResult::EOS_Success - if the provided data is valid
	 *         EOSResult::EOS_InvalidParameters - if the provided data is invalid
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PCloseConnection(FEOSP2PCloseConnectionOptions options);

	/**
	 * Close any open Connections for a specific Peer Connection ID.
	 *
	 * @param Options Information about who would like to close connections, and by what socket ID
	 * @return EOSResult::EOS_Success - if the provided data is valid
	 *         EOSResult::EOS_InvalidParameters - if the provided data is invalid
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PCloseConnections(FEOSP2PCloseConnectionsOptions options);

	/**
	 * Query the current NAT-type of our connection.
	 *
	 * @param Options Information about what version of the EOS_P2P_QueryNATType API they support
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		void EOSP2PQueryNATType(const FOnP2PQueryNATTypeCompleteCallback& callback);

	/**
	 * Get our last-queried NAT-type, if it has been successfully queried.
	 *
	 * @param Options Information about what version of the EOS_P2P_GetNATType API they support
	 * @param OutNATType The queried NAT Type, or unknown if unknown
	 * @return EOSResult::EOS_Success - if we have cached data
	 *         EOSResult::EOS_NotFound - If we do not have queried data cached
	 *         EOSResult::EOS_IncompatibleVersion - If the provided version is unknown
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PGetNATType(FEOSP2PGetNATTypeOptions options, EEOSENATType& outNATType);

	/**
	 * Set how relay servers are to be used. This setting does not immediately apply to existing connections, but may apply to existing
	 * connections if the connection requires renegotiation.
	 *
	 * @param Options Information about relay server config options
	 * @return EOSResult::EOS_Success - if the options were set successfully
	 *         EOSResult::EOS_InvalidParameters - if the options are invalid in some way
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PSetRelayControl(FEOSP2PSetRelayControlOptions options);

	/**
	* Get the current relay control setting.
	*
	* @param Options Information about what version of the EOS_P2P_GetRelayControl API is supported
	* @param OutRelayControl The relay control setting currently configured
	* @return EOSResult::EOS_Success - if the input was valid
	*         EOSResult::EOS_InvalidParameters - if the input was invalid in some way
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PGetRelayControl(FEOSP2PGetRelayControlOptions options, EEOSERelayControl& outRelayControl);

	/**
	 * Set configuration options related to network ports.
	 *
	 * @param Options Information about network ports config options
	 * @return EOSResult::EOS_Success - if the options were set successfully
	 *         EOSResult::EOS_InvalidParameters - if the options are invalid in some way
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PSetPortRange(FEOSP2PSetPortRangeOptions options);

	/**
	 * Get the current chosen port and the amount of other ports to try above the chosen port if the chosen port is unavailable.
	 *
	 * @param Options Information about what version of the EOS_P2P_GetPortRange API is supported
	 * @param OutPort The port that will be tried first
	 * @param OutNumAdditionalPortsToTry The amount of ports to try above the value in OutPort, if OutPort is unavailable
	 * @return EOSResult::EOS_Success - if the input options were valid
	 *         EOSResult::EOS_InvalidParameters - if the input was invalid in some way
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|P2P")
		static EOSResult EOSP2PGetPortRange(FEOSP2PGetPortRangeOptions options, int32& outPort, int32 outNumAdditionalPortsToTry);

private:
	static UCoreP2P* P2PObject;
};
