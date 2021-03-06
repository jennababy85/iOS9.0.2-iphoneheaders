/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSError;


@protocol AVQueuedSampleBufferRendering <NSObject>
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) NSError * error; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) char readyForMoreMediaData; 
@required
-(OpaqueCMTimebaseRef)timebase;
-(void)stopRequestingMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(NSError *)error;
-(void)flush;
-(int)status;
-(char)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

