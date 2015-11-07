/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone, NSDate, NSArray, NSSet;

@interface EKPredicate : CADPredicate <NSSecureCoding> {

	NSString* _uuid;
	NSTimeZone* _timeZone;
	char _shouldLoadDefaultProperties;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _calendars;
	NSString* _title;
	NSSet* _restrictedCalendarRowIDs;

}

@property (nonatomic,retain) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSArray * calendars;                           //@synthesize calendars=_calendars - In the implementation block
@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSSet * restrictedCalendarRowIDs;              //@synthesize restrictedCalendarRowIDs=_restrictedCalendarRowIDs - In the implementation block
+(char)supportsSecureCoding;
-(NSArray *)calendars;
-(id)predicateFormat;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithCalendars:(id)arg1 ;
-(NSSet *)restrictedCalendarRowIDs;
-(void)setRestrictedCalendarRowIDs:(NSSet *)arg1 ;
-(void)setCalendars:(NSArray *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end
