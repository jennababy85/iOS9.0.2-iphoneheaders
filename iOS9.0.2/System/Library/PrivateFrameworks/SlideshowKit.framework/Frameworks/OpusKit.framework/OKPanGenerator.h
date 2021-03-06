/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusKit/OpusKit-Structs.h>
@class NSArray;

@interface OKPanGenerator : NSObject {

	NSArray* _panSteps;
	char _isReversed;
	char _loops;
	float _mediaItemAspectRatio;
	NSArray* _mediaItemRegionsOfInterest;
	unsigned _panningType;
	unsigned _randomizer;
	CGRect _referenceFrame;

}

@property (assign,nonatomic) float mediaItemAspectRatio;                        //@synthesize mediaItemAspectRatio=_mediaItemAspectRatio - In the implementation block
@property (nonatomic,retain) NSArray * mediaItemRegionsOfInterest;              //@synthesize mediaItemRegionsOfInterest=_mediaItemRegionsOfInterest - In the implementation block
@property (assign,nonatomic) CGRect referenceFrame;                             //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) unsigned panningType;                              //@synthesize panningType=_panningType - In the implementation block
@property (assign,nonatomic) unsigned randomizer;                               //@synthesize randomizer=_randomizer - In the implementation block
@property (assign,nonatomic) char isReversed;                                   //@synthesize isReversed=_isReversed - In the implementation block
@property (assign,nonatomic) char loops;                                        //@synthesize loops=_loops - In the implementation block
-(void)dealloc;
-(id)init;
-(char)isReversed;
-(void)setReferenceFrame:(CGRect)arg1 ;
-(CGRect)referenceFrame;
-(char)loops;
-(void)setLoops:(char)arg1 ;
-(id)initWithAspectRatio:(float)arg1 ;
-(id)_panStepWithRelativeFrame:(CGRect)arg1 forFittingMode:(unsigned)arg2 anchorPoint:(CGPoint)arg3 andExtraScale:(float)arg4 ;
-(CGRect)_frameWithAspectRatio:(float)arg1 forFittingMode:(unsigned)arg2 andAnchorPoint:(CGPoint)arg3 ;
-(id)_panStepWithRelativeFrame:(CGRect)arg1 forFittingMode:(unsigned)arg2 andAnchorPoint:(CGPoint)arg3 ;
-(CGRect)_fullROI;
-(void)_updatePanSteps;
-(void)enumeratePanStepsWithBlock:(/*^block*/id)arg1 ;
-(float)mediaItemAspectRatio;
-(void)setMediaItemAspectRatio:(float)arg1 ;
-(NSArray *)mediaItemRegionsOfInterest;
-(void)setMediaItemRegionsOfInterest:(NSArray *)arg1 ;
-(unsigned)panningType;
-(void)setPanningType:(unsigned)arg1 ;
-(unsigned)randomizer;
-(void)setRandomizer:(unsigned)arg1 ;
-(void)setIsReversed:(char)arg1 ;
@end

