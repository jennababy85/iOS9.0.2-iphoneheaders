/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AAUIAccountRepairRemoteUIDelegate <NSObject>
@optional
-(void)accountRepairRemoteUIWillAppear:(id)arg1;
-(void)accountRepairRemoteUIWillDismiss:(id)arg1;
-(void)accountRepairRemoteUI:(id)arg1 didReceiveObjectModel:(id)arg2;
-(void)accountRepairRemoteUI:(id)arg1 willPresentModalNavigationController:(id)arg2;
-(id)accountRepairRemoteUI:(id)arg1 headersForRequest:(id)arg2;

@required
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(char)arg3;

@end

