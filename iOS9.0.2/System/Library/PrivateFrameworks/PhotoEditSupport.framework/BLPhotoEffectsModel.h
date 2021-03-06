/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class NSMutableDictionary, NSDictionary, BLPEModel;

@interface BLPhotoEffectsModel : NSObject {

	int _effectGroupIndex;
	float _effectValue;
	char _hasAdjustments;
	NSMutableDictionary* _adjustments;
	NSDictionary* _analysis;
	BLPEModel* _model;

}
-(void)dealloc;
-(id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ;
-(id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2 ignoreEdgeEffects:(char)arg3 ;
-(char)hasPhotoEffects;
-(char)hasInkEffects;
-(char)hasEdgeEffects;
-(char)hasFastDownstreamEffects;
-(char)needsPadding;
-(float)paddingForSize:(CGSize)arg1 ;
-(id)imageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(CGRect)arg2 withPadding:(float)arg3 ;
-(char)canRenderCI;
-(id)imageWithPhotoEffectsForImage:(id)arg1 inDestRect:(CGRect)arg2 withPadding:(float)arg3 ;
-(id)ciImageWithPhotoEffectsForImageBuffer:(id)arg1 inDestRect:(CGRect)arg2 withPadding:(float)arg3 ;
-(id)ciImageWithPhotoEffectsForCIImage:(id)arg1 inDestRect:(CGRect)arg2 withPadding:(float)arg3 ;
@end

