/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <coreauthd/MechanismBase.h>
#import <libobjc.A.dylib/LARemoteUIHost.h>
#import <libobjc.A.dylib/LAUIMechanism.h>

@protocol LARemoteUI;
@class MechanismBase, NSDictionary, NSString;

@interface MechanismUI : MechanismBase <LARemoteUIHost, LAUIMechanism> {

	id<LARemoteUI> _remoteUI;
	MechanismBase* _nonUiMechanism;
	MechanismBase* _backgroundMechanism;
	MechanismBase* _fallbackMechanism;
	MechanismBase* _continueMechanism;
	int _policy;
	NSDictionary* _internalInfo;
	NSDictionary* _policyOptions;
	NSDictionary* _defaultControllerPolicyOptions;
	NSDictionary* _additionalControllerInternalInfo;
	NSDictionary* _eventProcessing;
	NSDictionary* _previousResult;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)findMechanismWithEventIdentifier:(int)arg1 ;
-(id)initWithNonUiMechanism:(id)arg1 eventProcessing:(id)arg2 policy:(int)arg3 internalInfo:(id)arg4 ;
-(void)_showUI;
-(void)_terminateBackgroundMechanismWithResult:(id)arg1 error:(id)arg2 ;
-(void)_connectNonUiMechanism:(id)arg1 withRemoteUi:(id)arg2 ;
-(char)_checkCallerForeground;
-(void)_startBackgroundMechanism;
-(void)_setupMechanismForRemoteViewController:(id)arg1 ;
-(void)_transitionToController:(int)arg1 internalInfo:(id)arg2 ;
-(void)connectRemoteUI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)disconnectRemoteUI;
-(void)uiEvent:(int)arg1 options:(id)arg2 ;
-(void)uiSuccessWithResult:(id)arg1 ;
-(void)uiFailureWithError:(id)arg1 ;
-(void)internalInfoWithReply:(/*^block*/id)arg1 ;
-(void)willFinish;
@end

