/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SYSyncEngineResponder, OS_dispatch_queue;
@class SYService, NSObject;

@interface SYSyncEngine : NSObject {

	id<SYSyncEngineResponder> _responder;
	SYService* _service;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<SYSyncEngineResponder> responder;              //@synthesize responder=_responder - In the implementation block
@property (nonatomic,readonly) char isInSession; 
@property (nonatomic,readonly) char buffersSessions; 
@property (nonatomic,__weak,readonly) SYService * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setResponder:(id<SYSyncEngineResponder>)arg1 ;
-(void)suspend;
-(id<SYSyncEngineResponder>)responder;
-(void)endSession;
-(SYService *)service;
-(void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(int)arg3 options:(id)arg4 userContext:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)beginSession;
-(id)initWithService:(id)arg1 queue:(id)arg2 ;
-(id)outputStreamWithMetadata:(id)arg1 priority:(int)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(char)buffersSessions;
-(char)isInSession;
-(char)resume:(id*)arg1 ;
@end

