/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNFloor : SCNGeometry {

	unsigned _isPresentationInstance : 1;
	unsigned _usesCustomScaleFactor : 1;
	float _reflectivity;
	float _reflectionFalloffStart;
	float _reflectionFalloffEnd;
	float _reflectionResolutionScaleFactor;
	unsigned _reflectionSampleCount;

}

@property (assign,nonatomic) float reflectivity; 
@property (assign,nonatomic) float reflectionFalloffStart; 
@property (assign,nonatomic) float reflectionFalloffEnd; 
@property (assign,nonatomic) float reflectionResolutionScaleFactor; 
+(id)floor;
+(char)supportsSecureCoding;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(float)reflectionFalloffStart;
-(float)reflectionFalloffEnd;
-(void)setReflectionFalloffStart:(float)arg1 ;
-(void)setReflectionFalloffEnd:(float)arg1 ;
-(float)reflectionResolutionScaleFactor;
-(void)setReflectionResolutionScaleFactor:(float)arg1 ;
-(unsigned)reflectionSampleCount;
-(void)setReflectionSampleCount:(unsigned)arg1 ;
-(void)_customDecodingOfSCNFloor:(id)arg1 ;
-(_C3DFloor*)floorRef;
-(float)reflectionFallOffStart;
-(float)reflectionFallOffEnd;
-(void)setReflectionFallOffStart:(float)arg1 ;
-(void)setReflectionFallOffEnd:(float)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)reflectivity;
-(void)setReflectivity:(float)arg1 ;
@end

