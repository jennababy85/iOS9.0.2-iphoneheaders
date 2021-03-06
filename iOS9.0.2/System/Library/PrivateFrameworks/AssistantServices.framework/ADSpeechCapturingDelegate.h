/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADSpeechCapturingDelegate <NSObject>
@required
-(void)speechCapturingDidStartRecordingSuccessfully:(char)arg1 error:(id)arg2 withInfo:(id)arg3;
-(void)speechCapturingDidUpdateRecordingInfo:(id)arg1;
-(void)speechCapturingDidRecordSpeechPackets:(id)arg1 totalPacketCount:(int)arg2;
-(void)speechCapturingDidRecordPCMAudioData:(id)arg1;
-(void)speechCapturingWillStopRecording:(char)arg1;
-(void)speechCapturingDidStopRecordingWithError:(id)arg1 endpointMode:(int)arg2 totalPacketCount:(int)arg3;
-(void)speechCapturing:(id)arg1 didReceiveFingerprint:(id)arg2 duration:(double)arg3;
-(void)speechCapturingDidDetectMusic:(id)arg1;
-(void)speechCapturingDidDelayEndpointForMusic:(id)arg1;
-(void)speechCapturing:(id)arg1 didFinishWritingAudioFile:(id)arg2 error:(id)arg3;

@end

