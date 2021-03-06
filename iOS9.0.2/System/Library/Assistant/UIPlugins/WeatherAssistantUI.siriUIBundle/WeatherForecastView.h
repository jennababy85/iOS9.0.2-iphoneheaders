/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/WeatherAssistantUI.siriUIBundle/WeatherAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WeatherAssistantUI/WeatherAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView;

@interface WeatherForecastView : UIView {

	UILabel* _forecastTimeLabel;
	UILabel* _highTemperatureLabel;
	UILabel* _lowTemperatureLabel;
	UIImageView* _conditionImage;
	float _rightColumnWidth;
	UIView* _keyline;

}

@property (nonatomic,readonly) UILabel * forecastTimeLabel;                 //@synthesize forecastTimeLabel=_forecastTimeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * highTemperatureLabel;              //@synthesize highTemperatureLabel=_highTemperatureLabel - In the implementation block
@property (nonatomic,readonly) UILabel * lowTemperatureLabel;               //@synthesize lowTemperatureLabel=_lowTemperatureLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * conditionImage;                //@synthesize conditionImage=_conditionImage - In the implementation block
@property (assign,nonatomic) float rightColumnWidth;                        //@synthesize rightColumnWidth=_rightColumnWidth - In the implementation block
@property (nonatomic,readonly) UIView * keyline;                            //@synthesize keyline=_keyline - In the implementation block
-(float)rightColumnWidth;
-(id)newKeyline;
-(UIImageView *)conditionImage;
-(float)desiredRightColumnWidth;
-(void)setRightColumnWidth:(float)arg1 ;
-(UILabel *)forecastTimeLabel;
-(UILabel *)lowTemperatureLabel;
-(UILabel *)highTemperatureLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)keyline;
@end

