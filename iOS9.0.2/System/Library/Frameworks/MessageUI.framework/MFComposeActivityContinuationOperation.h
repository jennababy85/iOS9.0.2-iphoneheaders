/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, MFComposeActivityContinuationOperationDelegate;
@class NSObject, NSInputStream, NSOutputStream, NSData, NSString;

@interface MFComposeActivityContinuationOperation : NSOperation <NSStreamDelegate> {

	char _finished;
	char _executing;
	NSObject*<OS_dispatch_queue> _streamHandlerQueue;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	NSData* _draftData;
	unsigned _draftDataByteIndex;
	unsigned _draftBytesReceived;
	unsigned _draftExpectedSize;
	unsigned _transmissionType;
	char _doneWithInputStream;
	char _doneWithOutputStream;
	id<MFComposeActivityContinuationOperationDelegate> _delegate;

}

@property (nonatomic,retain) NSData * draftData;                                                       //@synthesize draftData=_draftData - In the implementation block
@property (nonatomic,readonly) unsigned bytesReceived;                                                 //@synthesize draftBytesReceived=_draftBytesReceived - In the implementation block
@property (nonatomic,readonly) unsigned bytesExpected;                                                 //@synthesize draftExpectedSize=_draftExpectedSize - In the implementation block
@property (assign,nonatomic) unsigned transmissionType;                                                //@synthesize transmissionType=_transmissionType - In the implementation block
@property (assign,nonatomic) id<MFComposeActivityContinuationOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)receivingOperationWithInputStream:(id)arg1 outputStream:(id)arg2 ;
+(id)sendingOperationWithDraftData:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3 ;
-(char)isConcurrent;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)setTransmissionType:(unsigned)arg1 ;
-(void)setDraftData:(NSData *)arg1 ;
-(void)_setExecuting:(char)arg1 ;
-(void)_startContinuationStreams;
-(void)_complete;
-(void)_setFinished:(char)arg1 ;
-(void)_commonContinuationStreamInitializationWithStream:(id)arg1 ;
-(void)_receivingDataStream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)_receivingMessageStream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)_sendingDataStream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)_sendingMessageStream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)_handleErrorCode:(unsigned)arg1 logString:(id)arg2 ;
-(void)_didFinishTransferringContinuationPayload;
-(void)_failedToTransferContinuationPayload;
-(void)_checkInContinuationStream:(id)arg1 ;
-(void)_finishReceivingContinuationDataAndCloseStream;
-(void)_commonContinuationStreamTeardownWithStream:(id*)arg1 ;
-(unsigned)bytesExpected;
-(unsigned)transmissionType;
-(NSData *)draftData;
-(void)setDelegate:(id<MFComposeActivityContinuationOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<MFComposeActivityContinuationOperationDelegate>)delegate;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(unsigned)bytesReceived;
@end

