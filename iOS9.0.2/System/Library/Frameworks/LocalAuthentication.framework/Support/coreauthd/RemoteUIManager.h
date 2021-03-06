/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/LARemoteUIHost.h>

@protocol LAUIMechanismLARemoteUIHost;
@class MechanismBase;

@interface RemoteUIManager : NSObject <LARemoteUIHost> {

	MechanismBase*<LAUIMechanism>*<LARemoteUIHost> _uiMechanism;
	/*^block*/id _pendingShowUiReply;
	/*^block*/id _pendingUiActivationBlock;
	id _dismissingUi;

}
+(id)sharedInstance;
-(void)connectionToViewServiceInvalidated;
-(void)_assignPendingMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_activateUi;
-(void)_replyOnceToShowUi:(char)arg1 error:(id)arg2 ;
-(void)showUiForMechanism:(id)arg1 lightContent:(char)arg2 reply:(/*^block*/id)arg3 ;
-(void)prepareForRemoteViewControllerWithMechanism:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dismissRemoteUI:(id)arg1 uiMechanism:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)connectRemoteUI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disconnectRemoteUI;
-(id)init;
@end

