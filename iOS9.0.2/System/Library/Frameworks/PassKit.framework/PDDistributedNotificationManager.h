/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSMutableDictionary, NSMutableSet, NSObject;

@interface PDDistributedNotificationManager : NSObject {

	NSHashTable* _consumers;
	NSMutableDictionary* _registeredNameMapping;
	NSMutableSet* _registeredNotificationNames;
	NSObject*<OS_dispatch_queue> _internalSerialQueue;

}
-(void)registerConsumer:(id)arg1 ;
-(void)recalculateNotificationNames;
-(void)unregisterConsumer:(id)arg1 ;
-(id)_queue_updateNameCacheForConsumer:(id)arg1 ;
-(void)_queue_startObservingNotification:(id)arg1 ;
-(void)_queue_clearNameCacheForConsumer:(id)arg1 ;
-(void)_queue_stopObservingNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
@end

