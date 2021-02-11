/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "Network/EOSCoreInternetAddr.h"
#include "EOSCoreOnlineSubsystemPrivatePCH.h"

void FEOSInternetAddr::SetRawIp(const TArray<uint8>& RawAddr)
{
	AccountId = BytesToString(RawAddr.GetData(), RawAddr.Num());
}

void FEOSInternetAddr::SetIp(const TCHAR* InAddr, bool& bIsValid)
{	
	AccountId = InAddr;
	NetIdEOSCore.UniqueNetIdStr = InAddr;
}

void FEOSInternetAddr::SetPort(int32 InPort)
{
	Channel = InPort;
}

TArray<uint8> FEOSInternetAddr::GetRawIp() const
{
	TArray<uint8> m_Arr;
	return m_Arr;
}

FString FEOSInternetAddr::ToString(bool bAppendPort) const
{
	if (!bAppendPort)
		return FString::Printf(TEXT("%s"), *AccountId);
	else
		return FString::Printf(TEXT("%s:%d"), *AccountId, Channel);
}

bool FEOSInternetAddr::IsValid() const
{
	return AccountId.Len() > 0;
}

TSharedRef<FInternetAddr> FEOSInternetAddr::Clone() const
{
	TSharedRef<FEOSInternetAddr> NewAddress = MakeShareable(new FEOSInternetAddr);
	NewAddress->AccountId = AccountId;
	NewAddress->NetIdEOSCore = NetIdEOSCore;
	return NewAddress;
}
