/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/HKNumberFormatter.h>

@class NSString;

@interface WDTimePeriodNumberFormatter : NSObject <HKNumberFormatter> {

	char _shouldRoundToHours;

}

@property (assign,nonatomic) char shouldRoundToHours;               //@synthesize shouldRoundToHours=_shouldRoundToHours - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stringFromNumber:(id)arg1 dataUnit:(id)arg2 unitController:(id)arg3 ;
-(void)setShouldRoundToHours:(char)arg1 ;
-(char)shouldRoundToHours;
@end

