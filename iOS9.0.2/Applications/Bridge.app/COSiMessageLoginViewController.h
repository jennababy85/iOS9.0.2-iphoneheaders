/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/COSAppleIDLoginViewController.h>

@class ACAccount;

@interface COSiMessageLoginViewController : COSAppleIDLoginViewController {

	ACAccount* _account;

}
+(char)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1 ;
+(id)iMessageAccountInAccountStore:(id)arg1 ;
+(char)checkIfiMessageAccount:(id)arg1 isForSameUserAsiCloudAccount:(id)arg2 ;
+(id)iMessageIDSAccount;
-(void)checkIfCanReleaseHold;
-(void)loggedInSuccessfully;
-(void)silentSignInStateChanged:(id)arg1 ;
-(char)controllerAllowsNavigatingBackTo;
-(char)allowSkipping;
-(id)performanceMonitorActivityName;
-(unsigned)performanceMonitorAggTiming;
-(void)signInFailedWithError:(id)arg1 ;
-(char)holdBeforeDisplaying;
-(void)didEstablishHold;
-(void)finishedActivating;
-(id)detailText;
-(void)dealloc;
-(id)init;
-(id)titleString;
-(id)account;
@end
