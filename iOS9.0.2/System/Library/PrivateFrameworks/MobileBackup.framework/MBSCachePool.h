/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MBSCachePool : NSObject {

	NSMutableArray* _caches;
	NSObject*<OS_dispatch_queue> _queue;
	char _drainScheduled;

}
+(id)sharedPool;
-(id)acquireCache;
-(id)_openCache;
-(void)_closeCache:(id)arg1 ;
-(void)_scheduleDrain;
-(void)dealloc;
-(id)init;
-(void)_drain;
-(void)releaseCache:(id)arg1 ;
@end

