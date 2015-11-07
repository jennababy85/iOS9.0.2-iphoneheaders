/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HKAbstractFixedAxisBoundsScalingRule.h>

@class HKValueRange, NSDictionary, HKUnit;

@interface HKQuantityFixedAxisBoundsScalingRule : HKAbstractFixedAxisBoundsScalingRule {

	HKValueRange* _defaultQuantityBounds;
	NSDictionary* _quantityBoundsOverrides;
	HKUnit* _unit;

}

@property (nonatomic,retain) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)ruleWithDefaultAxisBounds:(id)arg1 axisBoundsOverrides:(id)arg2 ;
-(char)isCompatibleWithQuantityType:(id)arg1 ;
-(void)_convertQuantityRanges;
-(id)_numberRangeFromQuantityRangeForUnit:(id)arg1 quantityRange:(id)arg2 ;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
@end
