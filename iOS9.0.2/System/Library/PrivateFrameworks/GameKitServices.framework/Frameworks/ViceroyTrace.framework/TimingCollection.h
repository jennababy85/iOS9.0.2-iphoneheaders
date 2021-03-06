/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TimingCollection : NSObject {

	NSMutableDictionary* timings;
	NSObject*<OS_dispatch_queue> queue;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(void)startTimingForKey:(id)arg1 ;
-(void)stopTimingForKey:(id)arg1 ;
-(char)hasKey:(id)arg1 ;
-(float)timingForKey:(id)arg1 ;
-(float)totalTimeForKey:(id)arg1 ;
-(void)removeTimingForKey:(id)arg1 ;
-(void)resetTotalTimeForKey:(id)arg1 ;
@end

