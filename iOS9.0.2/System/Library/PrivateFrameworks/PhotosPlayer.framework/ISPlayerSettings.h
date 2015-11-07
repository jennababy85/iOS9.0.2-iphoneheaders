/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@interface ISPlayerSettings : ISSettings {

	char _useDedicatedQueues;
	char _allowFrameBlending;
	char _allowVideoPreRoll;
	char _allowPlayerReuse;
	char _allowCrossfadeContent;
	char _shouldPauseOnSettle;
	char _variableIntro;
	float _forceTouchTimeoutMinimumProgress;
	float _forceScrubMinimumPressure;
	float _forceScrubMaximumPressure;
	float _forceScrubRewindFactor;
	float _forceScrubMinRateChange;
	float _forceScrubSettleRateAddition;
	float _forceScrubMinimumRate;
	float _forceScrubMaximumInteractiveRate;
	float _audioRampDuration;
	float _crossfadeTargetBlur;
	double _forceTouchTimeoutInterval;
	double _crossfadeDuration;
	double _maxPreCrossfadeDuration;
	double _nonForcePreCrossfadeDuration;

}

@property (assign,nonatomic) char useDedicatedQueues;                             //@synthesize useDedicatedQueues=_useDedicatedQueues - In the implementation block
@property (assign,nonatomic) char allowFrameBlending;                             //@synthesize allowFrameBlending=_allowFrameBlending - In the implementation block
@property (assign,nonatomic) char allowVideoPreRoll;                              //@synthesize allowVideoPreRoll=_allowVideoPreRoll - In the implementation block
@property (assign,nonatomic) char allowPlayerReuse;                               //@synthesize allowPlayerReuse=_allowPlayerReuse - In the implementation block
@property (assign,nonatomic) char allowCrossfadeContent;                          //@synthesize allowCrossfadeContent=_allowCrossfadeContent - In the implementation block
@property (assign,nonatomic) char shouldPauseOnSettle;                            //@synthesize shouldPauseOnSettle=_shouldPauseOnSettle - In the implementation block
@property (assign,nonatomic) double forceTouchTimeoutInterval;                    //@synthesize forceTouchTimeoutInterval=_forceTouchTimeoutInterval - In the implementation block
@property (assign,nonatomic) float forceTouchTimeoutMinimumProgress;              //@synthesize forceTouchTimeoutMinimumProgress=_forceTouchTimeoutMinimumProgress - In the implementation block
@property (assign,nonatomic) float forceScrubMinimumPressure;                     //@synthesize forceScrubMinimumPressure=_forceScrubMinimumPressure - In the implementation block
@property (assign,nonatomic) float forceScrubMaximumPressure;                     //@synthesize forceScrubMaximumPressure=_forceScrubMaximumPressure - In the implementation block
@property (assign,nonatomic) float forceScrubRewindFactor;                        //@synthesize forceScrubRewindFactor=_forceScrubRewindFactor - In the implementation block
@property (assign,nonatomic) float forceScrubMinRateChange;                       //@synthesize forceScrubMinRateChange=_forceScrubMinRateChange - In the implementation block
@property (assign,nonatomic) float forceScrubSettleRateAddition;                  //@synthesize forceScrubSettleRateAddition=_forceScrubSettleRateAddition - In the implementation block
@property (assign,nonatomic) float forceScrubMinimumRate;                         //@synthesize forceScrubMinimumRate=_forceScrubMinimumRate - In the implementation block
@property (assign,nonatomic) float forceScrubMaximumInteractiveRate;              //@synthesize forceScrubMaximumInteractiveRate=_forceScrubMaximumInteractiveRate - In the implementation block
@property (assign,nonatomic) float audioRampDuration;                             //@synthesize audioRampDuration=_audioRampDuration - In the implementation block
@property (assign,nonatomic) float crossfadeTargetBlur;                           //@synthesize crossfadeTargetBlur=_crossfadeTargetBlur - In the implementation block
@property (assign,nonatomic) double crossfadeDuration;                            //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (assign,nonatomic) double maxPreCrossfadeDuration;                      //@synthesize maxPreCrossfadeDuration=_maxPreCrossfadeDuration - In the implementation block
@property (assign,nonatomic) double nonForcePreCrossfadeDuration;                 //@synthesize nonForcePreCrossfadeDuration=_nonForcePreCrossfadeDuration - In the implementation block
@property (assign,nonatomic) char variableIntro;                                  //@synthesize variableIntro=_variableIntro - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)crossfadeDuration;
-(void)setCrossfadeDuration:(double)arg1 ;
-(void)setUseDedicatedQueues:(char)arg1 ;
-(void)setAllowFrameBlending:(char)arg1 ;
-(void)setCrossfadeTargetBlur:(float)arg1 ;
-(void)setMaxPreCrossfadeDuration:(double)arg1 ;
-(void)setAllowVideoPreRoll:(char)arg1 ;
-(void)setAllowPlayerReuse:(char)arg1 ;
-(void)setAllowCrossfadeContent:(char)arg1 ;
-(void)setShouldPauseOnSettle:(char)arg1 ;
-(void)setForceTouchTimeoutInterval:(double)arg1 ;
-(void)setForceTouchTimeoutMinimumProgress:(float)arg1 ;
-(void)setForceScrubMinimumPressure:(float)arg1 ;
-(void)setForceScrubMaximumPressure:(float)arg1 ;
-(void)setForceScrubRewindFactor:(float)arg1 ;
-(void)setForceScrubMinRateChange:(float)arg1 ;
-(void)setForceScrubSettleRateAddition:(float)arg1 ;
-(void)setAudioRampDuration:(float)arg1 ;
-(void)setNonForcePreCrossfadeDuration:(double)arg1 ;
-(void)setForceScrubMinimumRate:(float)arg1 ;
-(void)setForceScrubMaximumInteractiveRate:(float)arg1 ;
-(void)setVariableIntro:(char)arg1 ;
-(char)useDedicatedQueues;
-(char)allowFrameBlending;
-(char)allowVideoPreRoll;
-(char)allowPlayerReuse;
-(char)allowCrossfadeContent;
-(char)shouldPauseOnSettle;
-(double)forceTouchTimeoutInterval;
-(float)forceTouchTimeoutMinimumProgress;
-(float)forceScrubMinimumPressure;
-(float)forceScrubMaximumPressure;
-(float)forceScrubRewindFactor;
-(float)forceScrubMinRateChange;
-(float)forceScrubSettleRateAddition;
-(float)forceScrubMinimumRate;
-(float)forceScrubMaximumInteractiveRate;
-(float)audioRampDuration;
-(float)crossfadeTargetBlur;
-(double)maxPreCrossfadeDuration;
-(double)nonForcePreCrossfadeDuration;
-(char)variableIntro;
@end
