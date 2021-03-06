/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/apsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSTimer;

@interface APSOutgoingQueue : NSObject {

	NSMutableArray* _queue;
	NSTimer* _timer;
	double _lastReceivedAckOrReconnect;
	void* _powerAssertion;

}
-(void)enqueueSendBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)handleConnectionClosedOnInterface:(int)arg1 ;
-(void)handleConnectionOpened;
-(void)handleResponseForPendingItem:(id)arg1 error:(id)arg2 onInterface:(int)arg3 ;
-(void)_queueChanged;
-(void)_recalculateTimer;
-(void)_recalculatePowerAssertion;
-(void)_timerFired:(id)arg1 ;
-(void)dealloc;
@end

