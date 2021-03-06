/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDChartSeries.h>

@class UIColor;

@interface WDCenteredHorizontalLineSeries : WDChartSeries {

	UIColor* _fillColor;
	UIColor* _accentColor;
	float _lineWidth;

}

@property (nonatomic,retain) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;              //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) float lineWidth;                    //@synthesize lineWidth=_lineWidth - In the implementation block
-(void)renderFillInContext:(CGContextRef)arg1 ;
-(void)renderChartInContext:(CGContextRef)arg1 ;
-(void)setAccentColor:(UIColor *)arg1 ;
-(void)_enumeratePointsWithValue:(int)arg1 handler:(/*^block*/id)arg2 ;
-(id)_clipImageFromBezierPath:(id)arg1 ;
-(UIColor *)accentColor;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
@end

