/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FMFUtils : NSObject
+(id)currentTimeAsObject;
+(id)todayAtMidnight;
+(id)yesterdayAtMidnight;
+(double)currentTimeAsPrimitive;
+(id)unformatPhoneNumber:(id)arg1 ;
+(void)resetMidnightThisMorning;
+(id)currentTimeMSSince1970AsObject;
+(void)resetStatics;
+(id)date:(id)arg1 fromEndDate:(double)arg2 ;
+(id)midnightThisMorning;
+(id)dateFromEndDate:(double)arg1 ;
+(double)currentTimeSince1970AsPrimitive;
+(double)currentTimeMSSince1970AsPrimitive;
+(id)currentTimeSince1970AsObject;
+(id)dateAsObject:(id)arg1 ;
+(id)timeIntervalForMillisecondsSince1970:(id)arg1 ;
+(id)millisecondsSince1970ForTimeInterval:(id)arg1 ;
+(id)eventMillisecondsSince1970ForTimeInterval:(id)arg1 ;
+(id)msToTimeIntervalObj:(id)arg1 ;
+(double)recentlyUpdatedLocationTimeInterval;
+(void)mergeRelation:(id)arg1 relationIdKey:(id)arg2 withDataArray:(id)arg3 dataIdKey:(id)arg4 usingInfo:(id)arg5 delegate:(id)arg6 ;
+(id)temporaryExpiresDateFormatForDate:(id)arg1 lowercaseDateTime:(char)arg2 ;
+(char)handle:(id)arg1 matchesHandle:(id)arg2 ;
+(id)stringForBool:(char)arg1 ;
@end
