/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _ATXAggregateLogger : NSObject
+(void)initialize;
+(id)keyForScoreInput:(unsigned)arg1 withOutcome:(unsigned)arg2 ;
+(void)pushDistributionValue:(double)arg1 forKey:(id)arg2 ;
+(id)keyForABGroup:(id)arg1 withSubkey:(id)arg2 ;
+(char)yesWithProbability:(double)arg1 ;
+(void)logValue:(double)arg1 forScoreInput:(unsigned)arg2 withOutcome:(unsigned)arg3 ;
+(void)logPredictionEventWith:(unsigned)arg1 itemsAndOutcome:(unsigned)arg2 forABGroup:(id)arg3 ;
+(void)logPredictionOfAppWithBundleId:(id)arg1 outcome:(unsigned)arg2 rank:(int)arg3 score:(double)arg4 ;
@end

