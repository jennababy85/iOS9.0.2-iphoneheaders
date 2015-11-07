/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/WeeAppPlugins/AttributionWeeApp.bundle/AttributionWeeApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AttributionWeeApp/AttributionWeeApp-Structs.h>
#import <SpringBoardUIServices/_SBUIWidgetViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class UIView, AWATextView, NSURL, NSString;

@interface AttributionWeeAppController : _SBUIWidgetViewController <UITextViewDelegate> {

	char _stocksEnabled;
	char _weatherEnabled;
	UIView* _weeAppView;
	AWATextView* _attributionTextView;
	NSURL* _twcURL;

}

@property (assign,nonatomic) char stocksEnabled;                             //@synthesize stocksEnabled=_stocksEnabled - In the implementation block
@property (assign,nonatomic) char weatherEnabled;                            //@synthesize weatherEnabled=_weatherEnabled - In the implementation block
@property (nonatomic,retain) UIView * weeAppView;                            //@synthesize weeAppView=_weeAppView - In the implementation block
@property (nonatomic,retain) AWATextView * attributionTextView;              //@synthesize attributionTextView=_attributionTextView - In the implementation block
@property (nonatomic,retain) NSURL * twcURL;                                 //@synthesize twcURL=_twcURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(char)hasContent;
-(CGRect)textRect;
-(char)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(char)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 ;
-(int)blendMode;
-(CGSize)preferredViewSize;
-(void)hostDidPresent;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
-(void)contrastChanged:(id)arg1 ;
-(void)updateVibrancy;
-(void)updateAttributationText;
-(char)shouldEnhanceContrast;
-(char)isLowGraphicsQuality;
-(char)shouldUseVibrancy;
-(id)overlayWhiteColor;
-(id)_attributedAttributionString;
-(id)tintedImageFromMask:(id)arg1 ;
-(id)_weatherAttributionAttributionString;
-(id)_stocksAttributionAttributionString;
-(char)stocksEnabled;
-(void)setStocksEnabled:(char)arg1 ;
-(char)weatherEnabled;
-(void)setWeatherEnabled:(char)arg1 ;
-(UIView *)weeAppView;
-(void)setWeeAppView:(UIView *)arg1 ;
-(AWATextView *)attributionTextView;
-(void)setAttributionTextView:(AWATextView *)arg1 ;
-(NSURL *)twcURL;
-(void)setTwcURL:(NSURL *)arg1 ;
@end
