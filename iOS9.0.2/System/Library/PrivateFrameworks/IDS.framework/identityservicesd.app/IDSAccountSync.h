/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IDSRemoteCredential;

@interface IDSAccountSync : NSObject {

	IDSRemoteCredential* _syncCredential;

}
+(id)sharedInstance;
-(void)_sendAccountSyncMessage:(id)arg1 ;
-(void)synchronizeAccounts:(id)arg1 forService:(id)arg2 ;
-(void)_registerAccountsWithRemoteInfo:(id)arg1 ;
-(char)_isAccountInfoRegistered:(id)arg1 ;
-(id)_strippedAccountInfo:(id)arg1 ;
-(void)synchronizeAccountsWithRemoteInfo:(id)arg1 service:(id)arg2 ;
-(void)_updatePreferredAccountWithAccountInfo:(id)arg1 ;
-(void)synchronizePreferredAccount:(id)arg1 ;
-(void)synchronizeAccounts;
-(void)_deRegisterAccountWithLoginID:(id)arg1 service:(id)arg2 ;
-(void)incomingSyncMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

