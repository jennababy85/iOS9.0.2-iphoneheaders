/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>
#import <libobjc.A.dylib/BWFigCameraSourceNode.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class BWFigVideoCaptureDevice, NSArray, BWNodeOutput, NSDictionary, BWDeferredMetadataCache, NSMutableDictionary, BWDetectedFacesRingBuffer, NSObject, NSString;

@interface BWMultiStreamCameraSourceNode : BWSourceNode <BWFigCameraSourceNode> {

	BWFigVideoCaptureDevice* _captureDevice;
	OpaqueFigCaptureStreamRef _stream;
	NSArray* _supportedFormats;
	BWNodeOutput* _previewOutput;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BWNodeOutput* _detectedFacesOutput;
	char _previewOutputEnabled;
	char _videoCaptureOutputEnabled;
	char _stillImageOutputEnabled;
	char _detectedFacesOutputEnabled;
	int _clientSpecifiedFormatIndex;
	int _resolvedFormatIndex;
	int _streamFormatIndex;
	char _resolvedFormatIndexUpToDate;
	SCD_Struct_BW12 _sensorCropDimensions;
	SCD_Struct_BW12 _cropAspectRatio;
	unsigned long _videoPixelFormat;
	SCD_Struct_BW12 _videoCaptureDimensions;
	SCD_Struct_BW12 _preferredPreviewDimensions;
	char _usesFirmwareStillImageOutput;
	int _firmwareStillImageOutputRetainedBufferCountOverride;
	int _currentFirmwareStillImageOutputRetainedBufferCount;
	char _usesISPBackEndScalers;
	char _quadraHighResStillImageCaptureEnabled;
	SCD_Struct_BW12 _quadraCropDimensions;
	NSDictionary* _qHDRSensorDefectivePixelInfo;
	OpaqueFigCaptureISPProcessingSessionRef _bayerProcessingSession;
	OpaqueFigSampleBufferProcessorRef _qrmSampleBufferProcessor;
	opaqueCMFormatDescriptionRef _quadraStillOutputFormatDescription;
	opaqueCMSimpleQueueRef _quadraYUVBufferQueue;
	CGSize _overscanPercentage;
	char _cropsOverscanFromFirmwareStillImageOutput;
	SCD_Struct_BW12 _firmwareStillImageDimensionsAfterOverscanCropping;
	char _videoStabilizationEnabled;
	char _discardsUnstableSphereVideoFrames;
	char _temporalNoiseReductionEnabled;
	char _chromaNoiseReductionEnabled;
	float _aeMaxGain;
	int _maxIntegrationTimeOverride;
	float _minFrameRate;
	float _maxFrameRate;
	NSDictionary* _detectedFacesOutputConfiguration;
	int _motionAttachmentsSource;
	char _deferMetadataCreation;
	char _deferProcessingSessionMetadataCreation;
	BWDeferredMetadataCache* _deferredMetadataCache;
	NSMutableDictionary* _dutyCycleMetadataCache;
	BWDetectedFacesRingBuffer* _detectedFacesRingBuffer;
	float _lastRequestedZoomFactor;
	float _maxISPZoomFactor;
	CGSize _onDemandStillOverscanPercentage;
	NSObject*<OS_dispatch_group> _streamEventNotificationGroup;
	NSObject*<OS_dispatch_queue> _streamEventDispatchQueue;
	BWStreamOutputStorage* _outputsStorage[6];

}

@property (readonly) BWNodeOutput * previewOutput; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
+(void)initialize;
+(id)cameraSourceNodeWithCaptureDevice:(id)arg1 ;
-(OpaqueCMClockRef)clock;
-(void)setQuadraHighResStillImageCaptureEnabled:(char)arg1 ;
-(void)setChromaNoiseReductionEnabled:(char)arg1 ;
-(void)dealloc;
-(BWFigVideoCaptureDevice *)captureDevice;
-(float)minFrameRate;
-(float)maxFrameRate;
-(id)nodeSubType;
-(BWNodeOutput *)videoCaptureOutput;
-(char)start:(id*)arg1 ;
-(char)stop:(id*)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setOverscanPercentage:(CGSize)arg1 ;
-(long)prepareForClientStillImageBracketWithCount:(int)arg1 ;
-(void)setFormatIndex:(int)arg1 ;
-(char)quadraHighResStillImageCaptureEnabled;
-(void)setUsesFirmwareStillImageOutput:(char)arg1 ;
-(void)setQuadraCropDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setQHDRSensorDefectivePixelInfo:(id)arg1 ;
-(void)setBayerProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 ;
-(SCD_Struct_BW12)sensorCropDimensions;
-(void)setSensorCropDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setCropAspectRatio:(SCD_Struct_BW12)arg1 ;
-(void)setVideoStabilizationEnabled:(char)arg1 ;
-(void)setVideoCaptureDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setVideoPixelFormat:(unsigned long)arg1 ;
-(void)setUsesISPBackEndScalers:(char)arg1 ;
-(void)setCropsOverscanFromFirmwareStillImageOutput:(char)arg1 ;
-(char)videoStabilizationEnabled;
-(void)setPreferredPreviewDimensions:(SCD_Struct_BW12)arg1 ;
-(void)setPreviewOutputEnabled:(char)arg1 ;
-(void)setStillImageOutputEnabled:(char)arg1 ;
-(void)setVideoCaptureOutputEnabled:(char)arg1 ;
-(void)setDetectedFacesOutputEnabled:(char)arg1 ;
-(void)setDetectedFacesOutputConfiguration:(id)arg1 ;
-(void)setMotionAttachmentsSource:(int)arg1 ;
-(void)setMinFrameRate:(float)arg1 ;
-(void)setMaxFrameRate:(float)arg1 ;
-(void)setDiscardsUnstableSphereVideoFrames:(char)arg1 ;
-(void)setTemporalNoiseReductionEnabled:(char)arg1 ;
-(void)setAeMaxGain:(float)arg1 ;
-(int)maxIntegrationTimeOverride;
-(void)setMaxIntegrationTimeOverride:(int)arg1 ;
-(void)updateOutputRequirements;
-(float)aeMaxGain;
-(void)willStop;
-(char)previewOutputEnabled;
-(BWNodeOutput *)previewOutput;
-(char)videoCaptureOutputEnabled;
-(char)stillImageOutputEnabled;
-(char)detectedFacesOutputEnabled;
-(BWNodeOutput *)detectedFacesOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(void)setFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1 ;
-(SCD_Struct_BW12)firmwareStillImageDimensionsAfterOverscanCropping;
-(void)makeCurrentConfigurationLive;
-(char)hasNonLiveConfigurationChanges;
-(long)_bringStreamUpToDate;
-(void)_registerForStreamNotifications;
-(void)_unregisterFromStreamNotifications;
-(id)_initWithCaptureDevice:(id)arg1 ;
-(void)_updateMetadataConfigurations;
-(int)motionAttachmentsSource;
-(char)temporalNoiseReductionEnabled;
-(char)chromaNoiseReductionEnabled;
-(void)_registerStreamOutputHandlers;
-(char)_streamSupportsProperty:(CFStringRef)arg1 ;
-(int)_firmwareStillImageOutputRetainedBufferCountForClientBracketCount:(int)arg1 ;
-(id)_streamOutputIDForOnDemandStills;
-(id)_streamOutputIDForPreview;
-(id)_videoFormatRequirementsForOutputID:(id)arg1 configuration:(id)arg2 ;
-(id)_streamOutputIDForCapture;
-(id)_enabledNodeOutputsDrivenByThePrimaryStreamingOutput;
-(void)_enableStreamOutputs;
-(long)_updateMaxISPZoomFactor;
-(long)_setupBayerProcessingSessionForQuadraStillImageCaptures;
-(void)_flushOutRemainingBuffers;
-(void)_markEndOfLiveOutput;
-(long)_setupQRMSampleBufferProcessor;
-(long)_updateFormatIndex;
-(void)_updateOutputsStorage;
-(long)_updateOutputConfigurations;
-(void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(int)arg1 ;
-(char)_shouldEnableStreamCaptureOutput;
-(char)_shouldEnableStreamPreviewOutput;
-(char)_requiresOneStreamingOutputForMetadata;
-(void)_serviceZoomForPTS:(SCD_Struct_BW2)arg1 ;
-(float)_ispAppliedZoomFactorFromSampleBufferMetadataDictionary:(id)arg1 outputIndex:(int)arg2 ;
-(int)formatIndex;
-(SCD_Struct_BW12)cropAspectRatio;
-(unsigned long)videoPixelFormat;
-(SCD_Struct_BW12)videoCaptureDimensions;
-(SCD_Struct_BW12)preferredPreviewDimensions;
-(char)usesFirmwareStillImageOutput;
-(int)firmwareStillImageOutputRetainedBufferCountOverride;
-(char)usesISPBackEndScalers;
-(SCD_Struct_BW12)quadraCropDimensions;
-(id)qHDRSensorDefectivePixelInfo;
-(OpaqueFigCaptureISPProcessingSessionRef)bayerProcessingSession;
-(CGSize)overscanPercentage;
-(char)cropsOverscanFromFirmwareStillImageOutput;
-(id)detectedFacesOutputConfiguration;
-(char)discardsUnstableSphereVideoFrames;
-(CGRect)_updateZoomForOutputIndex:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(BWNodeOutput *)stillImageOutput;
@end
