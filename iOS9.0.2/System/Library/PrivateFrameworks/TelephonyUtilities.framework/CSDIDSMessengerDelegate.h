/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSDIDSMessengerDelegate <NSObject>
@required
-(void)messenger:(id)arg1 handledMessage:(id)arg2 fromDevice:(id)arg3;
-(void)messengerConnectionEnded:(id)arg1 forIdentifiers:(id)arg2 didStartConnecting:(char)arg3;
-(void)messengerConnectionFailed:(id)arg1 forIdentifiers:(id)arg2 didStartConnecting:(char)arg3;
-(void)messengerConnectionCouldNotEstablishLink:(id)arg1 forIdentifiers:(id)arg2 didStartConnecting:(char)arg3;

@end

