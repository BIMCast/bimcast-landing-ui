package com.apps.bimcast;

public interface SystemUIChangeRecipient
{
	public SystemUIChangeRecipient GetSystemUIChangeCallback();
	public void SystemUIChangeOccured();
}
