/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iAdOptOut.app/iAdOptOut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/ADBannerViewDelegate.h>
#import <iAdOptOut/ADRemoteErrorDelegate.h>

@class NSString, NSURL, ADBannerView, ADInterstitialAd, UIActivityIndicatorView, UILabel;

@interface ADRemoteAdViewController : UIViewController <ADBannerViewDelegate, ADRemoteErrorDelegate> {

	NSString* _sourceApplication;
	NSURL* _URL;
	ADBannerView* _bannerView;
	ADInterstitialAd* _interstitialAd;
	UIActivityIndicatorView* _activityView;
	UILabel* _loadingLabel;

}

@property (nonatomic,retain) NSString * sourceApplication;                        //@synthesize sourceApplication=_sourceApplication - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) ADBannerView * bannerView;                           //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) ADInterstitialAd * interstitialAd;                   //@synthesize interstitialAd=_interstitialAd - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityView;              //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UILabel * loadingLabel;                              //@synthesize loadingLabel=_loadingLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addViewConstraints;
-(void)_showLoadingIndicator;
-(void)_attemptAdPresentation;
-(void)_presentError;
-(void)_closeApplication;
-(void)dismissButtonWasTapped;
-(NSString *)sourceApplication;
-(void)setSourceApplication:(NSString *)arg1 ;
-(void)_hideLoadingIndicator;
-(ADBannerView *)bannerView;
-(void)viewDidLoad;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(void)setInterstitialAd:(ADInterstitialAd *)arg1 ;
-(void)setLoadingLabel:(UILabel *)arg1 ;
-(UILabel *)loadingLabel;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(void)setBannerView:(ADBannerView *)arg1 ;
@end

