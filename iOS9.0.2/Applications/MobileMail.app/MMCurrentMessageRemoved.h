/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@class MFMailMessage;

@interface MMCurrentMessageRemoved : NSDictionary {

	MFMailMessage* _messageToSelect;

}

@property (nonatomic,retain) MFMailMessage * messageToSelect;              //@synthesize messageToSelect=_messageToSelect - In the implementation block
-(void)setMessageToSelect:(MFMailMessage *)arg1 ;
-(MFMailMessage *)messageToSelect;
-(void)dealloc;
@end

