/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXBackboardServerDelegate <NSObject>
@required
-(void)backboardServer:(id)arg1 clientWentInvalid:(id)arg2;
-(void)backboardServer:(id)arg1 passcodeDidChange:(id)arg2;
-(void)backboardServer:(id)arg1 gaxClientAppDidBecomeActive:(id)arg2 pid:(int)arg3;
-(void)backboardServer:(id)arg1 gaxClientDidLoad:(id)arg2 pid:(int)arg3;
-(void)deviceWasUnlockedWithBackboardServer:(id)arg1;
-(void)deviceWasLockedWithBackboardServer:(id)arg1;
-(void)backboardServer:(id)arg1 tripleClickSheetDidShow:(unsigned)arg2;
-(void)backboardServer:(id)arg1 voiceOverItemChooserDidShow:(unsigned)arg2;
-(void)backboardServer:(id)arg1 lockscreenUIIsShowing:(char)arg2;
-(void)backboardServer:(id)arg1 whitelistedLockscreenUIIsShowing:(char)arg2 withIdentifier:(id)arg3;
-(void)backboardServer:(id)arg1 sbMiniAlertIsShowing:(char)arg2;
-(void)backboardServer:(id)arg1 isMakingEmergencyCall:(char)arg2;
-(void)backboardServerPresentGuidedAccessActiveBanner:(id)arg1;
-(int)activeAppInterfaceOrientationWithBackboardServer:(id)arg1;
-(void)backboardServer:(id)arg1 didFinishLaunchingApplicationWithConfiguration:(unsigned)arg2 errorMessage:(id)arg3;
-(void)systemDidRestartDueToLowBatteryWithBackboardServer:(id)arg1;
-(int)backboardServer:(id)arg1 restrictionStateForIdentifier:(id)arg2;
-(char)backboardServer:(id)arg1 isRectInIgnoredRegion:(CGRect)arg2 rectContextId:(unsigned)arg3;
-(char)areKeyboardsDisabledForViewServicesWithBackboardServer:(id)arg1;

@end

