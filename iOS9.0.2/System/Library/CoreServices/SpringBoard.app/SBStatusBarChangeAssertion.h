/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBStatusBarChangeAssertion : NSObject {

	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
+(id)assertionWithReason:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
@end
