/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/EscrowSecurityAlert.app/EscrowSecurityAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EscrowSecurityAlert/EscrowSecurityAlertDelegateProtocol.h>

@class NSString;

@interface ESADelegate : NSObject <EscrowSecurityAlertDelegateProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isNotificationDisabled;
-(void)prompt:(int)arg1 ;
-(void)cancelAlert;
-(char)isNotificationSnoozed;
-(id)init;
-(int)alertType;
@end
