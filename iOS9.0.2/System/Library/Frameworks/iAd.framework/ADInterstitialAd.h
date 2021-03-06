/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <libobjc.A.dylib/ADAdRecipient.h>

@protocol ADInterstitialAdDelegate;
@class UIViewController, ADInterstitialView, ADAdSpace, ADInterstitialAdPresentationViewController, NSString, UIView;

@interface ADInterstitialAd : NSObject <ADAdRecipient> {

	id<ADInterstitialAdDelegate> _delegate;
	id<ADInterstitialAdDelegate> _internalDelegate;
	UIViewController* _internalPresentingViewController;
	char _loaded;
	char _actionInProgress;
	char _canLoadMoreThanOnce;
	char _hasLoadedFirstAd;
	char _dimmingEnabled;
	int _options;
	ADInterstitialView* _interstitialView;
	ADAdSpace* _adSpace;
	int _creativeType;
	ADInterstitialAdPresentationViewController* _presentationViewController;

}

@property (assign,nonatomic,__weak) id<ADInterstitialAdDelegate> delegate; 
@property (assign,getter=isLoaded,nonatomic) char loaded;                                                          //@synthesize loaded=_loaded - In the implementation block
@property (assign,getter=isActionInProgress,nonatomic) char actionInProgress;                                      //@synthesize actionInProgress=_actionInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<ADInterstitialAdDelegate> internalDelegate; 
@property (nonatomic,retain) ADInterstitialView * interstitialView;                                                //@synthesize interstitialView=_interstitialView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * internalPresentingViewController; 
@property (nonatomic,retain) ADAdSpace * adSpace;                                                                  //@synthesize adSpace=_adSpace - In the implementation block
@property (assign,nonatomic) char canLoadMoreThanOnce;                                                             //@synthesize canLoadMoreThanOnce=_canLoadMoreThanOnce - In the implementation block
@property (assign,nonatomic) char hasLoadedFirstAd;                                                                //@synthesize hasLoadedFirstAd=_hasLoadedFirstAd - In the implementation block
@property (assign,nonatomic) char dimmingEnabled;                                                                  //@synthesize dimmingEnabled=_dimmingEnabled - In the implementation block
@property (assign,nonatomic) int creativeType;                                                                     //@synthesize creativeType=_creativeType - In the implementation block
@property (nonatomic,retain) ADInterstitialAdPresentationViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int internalAdType; 
@property (nonatomic,readonly) int options;                                                                        //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) UIView * adSpaceView; 
@property (nonatomic,readonly) UIViewController * presentingViewController; 
-(ADInterstitialAdPresentationViewController *)presentationViewController;
-(void)setLoaded:(char)arg1 ;
-(void)setDelegate:(id<ADInterstitialAdDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ADInterstitialAdDelegate>)delegate;
-(id)identifier;
-(UIViewController *)presentingViewController;
-(id)context;
-(void)cancelAction;
-(void)setContext:(id)arg1 ;
-(char)isLoaded;
-(int)options;
-(void)setSection:(id)arg1 ;
-(ADAdSpace *)adSpace;
-(int)internalAdType;
-(void)bannerTappedAtPoint:(CGPoint)arg1 ;
-(void)setServerURL:(id)arg1 ;
-(void)setAuthenticationUserName:(id)arg1 ;
-(void)serverBannerViewWillLoad;
-(void)serverBannerViewDidLoad;
-(void)serverBannerViewDidFailToReceiveAdWithError:(id)arg1 ;
-(void)serverStoryboardDidTransitionOut;
-(void)storyboardViewControllerDidPresent;
-(void)pauseBannerMedia;
-(void)resumeBannerMedia;
-(char)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(UIView *)adSpaceView;
-(void)setAdSpace:(ADAdSpace *)arg1 ;
-(id)initWithCreativeType:(int)arg1 options:(int)arg2 ;
-(void)setDimmingEnabled:(char)arg1 ;
-(ADInterstitialView *)interstitialView;
-(UIViewController *)internalPresentingViewController;
-(int)creativeType;
-(void)_presentFromViewController:(id)arg1 ;
-(void)setInternalPresentingViewController:(UIViewController *)arg1 ;
-(char)hasLoadedFirstAd;
-(char)canLoadMoreThanOnce;
-(char)_considerClosingAdSpace;
-(void)setHasLoadedFirstAd:(char)arg1 ;
-(void)setActionInProgress:(char)arg1 ;
-(char)presentInView:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 ;
-(int)clickAction;
-(void)_dismissModalInterstitial;
-(char)isActionInProgress;
-(void)setInterstitialView:(ADInterstitialView *)arg1 ;
-(void)setCanLoadMoreThanOnce:(char)arg1 ;
-(char)dimmingEnabled;
-(void)setCreativeType:(int)arg1 ;
-(void)setPresentationViewController:(ADInterstitialAdPresentationViewController *)arg1 ;
-(id<ADInterstitialAdDelegate>)internalDelegate;
-(void)setInternalDelegate:(id<ADInterstitialAdDelegate>)arg1 ;
-(id)serverURL;
@end

