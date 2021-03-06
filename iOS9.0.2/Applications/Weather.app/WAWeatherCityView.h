/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WeatherView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Weather/HourlyScrollerBeltDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class WAWeatherCityViewLayoutOptions, UIView, WAWeatherCardView, UIScrollView, UILabel, WACityDetailsView, UITapGestureRecognizer, UILongPressGestureRecognizer, WADayForecastView, HourlyScrollerBeltView, NSMutableArray, NSDateFormatter, NSString;

@interface WAWeatherCityView : WeatherView <UIScrollViewDelegate, HourlyScrollerBeltDelegate, UIGestureRecognizerDelegate> {

	float _panOffset;
	char _isBouncing;
	char _isTallDevice;
	char _hasExtendedWeatherData;
	int _mode;
	WAWeatherCityViewLayoutOptions* _layoutOptions;
	float _transitionProgress;
	float _textTopMargin;
	UIView* _bottomDivider;
	WAWeatherCardView* _cardView;
	UIView* _cardMaskView;
	UIView* _pageView;
	UIView* _pageUpperView;
	UIView* _pageHeaderView;
	UIScrollView* _pageScrollView;
	UIView* _pinnedContainer;
	UIView* _overDivider;
	UIView* _underDivider;
	UIView* _afterDayForecastsDivider;
	UIView* _verticalDivider;
	UILabel* _pageCityName;
	UILabel* _pageConditionDescription;
	UILabel* _pageTemperature;
	UILabel* _naturalLanguageDescriptionLabel;
	UIView* _afterNaturalLanguageDivider;
	WACityDetailsView* _detailsView;
	UIView* _pageCityNameSnapshotView;
	UIView* _pageTemperatureSnapshotView;
	UITapGestureRecognizer* _detailedConditionsRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIView* _textTreatmentView;
	WADayForecastView* _todayForecastView;
	HourlyScrollerBeltView* _hourlyBelt;
	NSMutableArray* _dayForecastViews;
	float _deviceWidth;
	float _deviceHeight;
	NSDateFormatter* _dateFormatter;

}

@property (assign,nonatomic) int mode;                                                               //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) WAWeatherCityViewLayoutOptions * layoutOptions;                         //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) float transitionProgress;                                               //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) float textTopMargin;                                                    //@synthesize textTopMargin=_textTopMargin - In the implementation block
@property (nonatomic,retain) UIView * bottomDivider;                                                 //@synthesize bottomDivider=_bottomDivider - In the implementation block
@property (nonatomic,retain) WAWeatherCardView * cardView;                                           //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) UIView * cardMaskView;                                                  //@synthesize cardMaskView=_cardMaskView - In the implementation block
@property (nonatomic,retain) UIView * pageView;                                                      //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,retain) UIView * pageUpperView;                                                 //@synthesize pageUpperView=_pageUpperView - In the implementation block
@property (nonatomic,retain) UIView * pageHeaderView;                                                //@synthesize pageHeaderView=_pageHeaderView - In the implementation block
@property (nonatomic,retain) UIScrollView * pageScrollView;                                          //@synthesize pageScrollView=_pageScrollView - In the implementation block
@property (nonatomic,retain) UIView * pinnedContainer;                                               //@synthesize pinnedContainer=_pinnedContainer - In the implementation block
@property (nonatomic,retain) UIView * overDivider;                                                   //@synthesize overDivider=_overDivider - In the implementation block
@property (nonatomic,retain) UIView * underDivider;                                                  //@synthesize underDivider=_underDivider - In the implementation block
@property (nonatomic,retain) UIView * afterDayForecastsDivider;                                      //@synthesize afterDayForecastsDivider=_afterDayForecastsDivider - In the implementation block
@property (nonatomic,retain) UIView * verticalDivider;                                               //@synthesize verticalDivider=_verticalDivider - In the implementation block
@property (nonatomic,retain) UILabel * pageCityName;                                                 //@synthesize pageCityName=_pageCityName - In the implementation block
@property (nonatomic,retain) UILabel * pageConditionDescription;                                     //@synthesize pageConditionDescription=_pageConditionDescription - In the implementation block
@property (nonatomic,retain) UILabel * pageTemperature;                                              //@synthesize pageTemperature=_pageTemperature - In the implementation block
@property (nonatomic,retain) UILabel * naturalLanguageDescriptionLabel;                              //@synthesize naturalLanguageDescriptionLabel=_naturalLanguageDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * afterNaturalLanguageDivider;                                   //@synthesize afterNaturalLanguageDivider=_afterNaturalLanguageDivider - In the implementation block
@property (nonatomic,retain) WACityDetailsView * detailsView;                                        //@synthesize detailsView=_detailsView - In the implementation block
@property (nonatomic,retain) UIView * pageCityNameSnapshotView;                                      //@synthesize pageCityNameSnapshotView=_pageCityNameSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * pageTemperatureSnapshotView;                                   //@synthesize pageTemperatureSnapshotView=_pageTemperatureSnapshotView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * detailedConditionsRecognizer;                  //@synthesize detailedConditionsRecognizer=_detailedConditionsRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) char isBouncing;                                                        //@synthesize isBouncing=_isBouncing - In the implementation block
@property (nonatomic,retain) UIView * textTreatmentView;                                             //@synthesize textTreatmentView=_textTreatmentView - In the implementation block
@property (nonatomic,retain) WADayForecastView * todayForecastView;                                  //@synthesize todayForecastView=_todayForecastView - In the implementation block
@property (nonatomic,retain) HourlyScrollerBeltView * hourlyBelt;                                    //@synthesize hourlyBelt=_hourlyBelt - In the implementation block
@property (nonatomic,retain) NSMutableArray * dayForecastViews;                                      //@synthesize dayForecastViews=_dayForecastViews - In the implementation block
@property (assign,nonatomic) char isTallDevice;                                                      //@synthesize isTallDevice=_isTallDevice - In the implementation block
@property (assign,nonatomic) float deviceWidth;                                                      //@synthesize deviceWidth=_deviceWidth - In the implementation block
@property (assign,nonatomic) float deviceHeight;                                                     //@synthesize deviceHeight=_deviceHeight - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                                        //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign,nonatomic) char hasExtendedWeatherData;                                            //@synthesize hasExtendedWeatherData=_hasExtendedWeatherData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateExtendedWeather;
-(void)willTransitionToSize:(CGSize)arg1 layoutOptions:(id)arg2 ;
-(void)animateTransitionToSize:(CGSize)arg1 layoutOptions:(id)arg2 ;
-(void)resetVerticalScrollOffset;
-(void)setStaggerOffset:(float)arg1 ;
-(void)setPanOffset:(float)arg1 ;
-(void)prepareForResuse;
-(void)setTextTopMargin:(float)arg1 ;
-(float)textTopMargin;
-(void)tappedCity:(id)arg1 ;
-(void)longPressedOnCity:(id)arg1 ;
-(void)_forceWeatherDescription:(id)arg1 ;
-(void)updateTimeUI;
-(float)_pageScrollViewOriginY;
-(void)_createPinnedContainerViews;
-(void)_createContentViewsForPageModeScrollView;
-(char)_shouldShowExtendedWeather;
-(void)setContentSizeForExtendedWeatherVisible:(char)arg1 ;
-(void)updateUIIncludingExtendedWeather:(char)arg1 ;
-(UILabel *)pageCityName;
-(void)cleanupTextTreatmentView;
-(id)newTextTreatmentViewForCondition:(int)arg1 ;
-(WADayForecastView *)todayForecastView;
-(id)degreeAttributedStringWithTemperature:(id)arg1 isDataCelsius:(char)arg2 progress:(float)arg3 ;
-(id)extendedDetailsStringWithName:(id)arg1 content:(id)arg2 ;
-(void)setPrecipitationsWithPrecipitationForecast:(int)arg1 hourlyForecasts:(id)arg2 ;
-(void)setWindWithSpeed:(float)arg1 andDirection:(float)arg2 ;
-(void)setFeelsLikeWithTemperature:(float)arg1 andDataCelsius:(char)arg2 ;
-(void)setPrecipitation:(float)arg1 ;
-(void)setPressure:(float)arg1 withDataCelsius:(char)arg2 ;
-(void)setVisibility:(float)arg1 withDataCelsius:(char)arg2 ;
-(void)setHasExtendedWeatherData:(char)arg1 ;
-(void)setPageCityNameSnapshotView:(UIView *)arg1 ;
-(void)setPageTemperatureSnapshotView:(UIView *)arg1 ;
-(char)isBouncing;
-(UIScrollView *)pageScrollView;
-(void)setIsBouncing:(char)arg1 ;
-(void)bounceScrollView;
-(UITapGestureRecognizer *)detailedConditionsRecognizer;
-(void)_layoutPinnedContainer;
-(void)_layoutScrollViewContent;
-(char)hasExtendedWeatherData;
-(void)_createCardModeViews;
-(void)_createPageModeViews;
-(id)currentTemperature;
-(int)currentHourIndex;
-(int)currentCondition;
-(void)didBeginScrolling;
-(void)didEndScrolling;
-(UIView *)cardMaskView;
-(void)setCardMaskView:(UIView *)arg1 ;
-(UIView *)pageUpperView;
-(void)setPageUpperView:(UIView *)arg1 ;
-(UIView *)pageHeaderView;
-(void)setPageHeaderView:(UIView *)arg1 ;
-(void)setPageScrollView:(UIScrollView *)arg1 ;
-(UIView *)pinnedContainer;
-(void)setPinnedContainer:(UIView *)arg1 ;
-(UIView *)overDivider;
-(void)setOverDivider:(UIView *)arg1 ;
-(UIView *)underDivider;
-(void)setUnderDivider:(UIView *)arg1 ;
-(UIView *)afterDayForecastsDivider;
-(void)setAfterDayForecastsDivider:(UIView *)arg1 ;
-(void)setPageCityName:(UILabel *)arg1 ;
-(UILabel *)pageConditionDescription;
-(void)setPageConditionDescription:(UILabel *)arg1 ;
-(UILabel *)pageTemperature;
-(void)setPageTemperature:(UILabel *)arg1 ;
-(UILabel *)naturalLanguageDescriptionLabel;
-(void)setNaturalLanguageDescriptionLabel:(UILabel *)arg1 ;
-(UIView *)afterNaturalLanguageDivider;
-(void)setAfterNaturalLanguageDivider:(UIView *)arg1 ;
-(UIView *)pageCityNameSnapshotView;
-(UIView *)pageTemperatureSnapshotView;
-(void)setDetailedConditionsRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIView *)textTreatmentView;
-(void)setTextTreatmentView:(UIView *)arg1 ;
-(void)setTodayForecastView:(WADayForecastView *)arg1 ;
-(HourlyScrollerBeltView *)hourlyBelt;
-(void)setHourlyBelt:(HourlyScrollerBeltView *)arg1 ;
-(NSMutableArray *)dayForecastViews;
-(void)setDayForecastViews:(NSMutableArray *)arg1 ;
-(char)isTallDevice;
-(void)setIsTallDevice:(char)arg1 ;
-(float)deviceWidth;
-(void)setDeviceWidth:(float)arg1 ;
-(float)deviceHeight;
-(void)setDeviceHeight:(float)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(WAWeatherCardView *)cardView;
-(void)setCardView:(WAWeatherCardView *)arg1 ;
-(void)setBottomDivider:(UIView *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setVerticalDivider:(UIView *)arg1 ;
-(UIView *)verticalDivider;
-(UIView *)pageView;
-(void)setTransitionProgress:(float)arg1 ;
-(float)transitionProgress;
-(void)setLayoutOptions:(WAWeatherCityViewLayoutOptions *)arg1 ;
-(void)updateUI;
-(void)setPageView:(UIView *)arg1 ;
-(id)_percentFormatter;
-(void)resetLocale;
-(id)hourlyForecasts;
-(void)setDetailsView:(WACityDetailsView *)arg1 ;
-(WACityDetailsView *)detailsView;
-(UIView *)bottomDivider;
-(WAWeatherCityViewLayoutOptions *)layoutOptions;
-(void)showCity:(id)arg1 ;
-(char)updateWeatherDisplayForCity:(id)arg1 ;
-(void)cityDidStartWeatherUpdate:(id)arg1 ;
-(void)refreshLocalization;
-(char)isCelsius;
-(void)setHumidity:(float)arg1 ;
-(void)setUVIndex:(unsigned)arg1 ;
-(void)setSunriseTime:(unsigned)arg1 ;
-(void)setSunsetTime:(unsigned)arg1 ;
-(unsigned)observationTime;
-(unsigned)sunsetTime;
-(unsigned)sunriseTime;
-(char)isDay;
-(void)didTransitionToSize:(CGSize)arg1 ;
@end

