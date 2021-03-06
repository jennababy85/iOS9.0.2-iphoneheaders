/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MFSearchHumanTimePeriod : NSObject {

	NSString* _displayName;
	unsigned _calendarUnit;
	int _deltaFrom;
	int _deltaTo;

}

@property (nonatomic,copy,readonly) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned calendarUnit;                             //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (nonatomic,readonly) int deltaFrom;                                     //@synthesize deltaFrom=_deltaFrom - In the implementation block
@property (nonatomic,readonly) int deltaTo;                                       //@synthesize deltaTo=_deltaTo - In the implementation block
@property (nonatomic,retain,readonly) NSArray * dateComponentsRange; 
+(id)humanTimePeriods;
-(id)_initWithDisplayName:(id)arg1 calendarUnit:(unsigned)arg2 from:(int)arg3 to:(int)arg4 ;
-(NSArray *)dateComponentsRange;
-(int)deltaFrom;
-(int)deltaTo;
-(void)dealloc;
-(id)description;
-(NSString *)displayName;
-(unsigned)calendarUnit;
@end

