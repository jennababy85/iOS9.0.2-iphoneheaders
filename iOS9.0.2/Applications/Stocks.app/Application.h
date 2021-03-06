/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSString, StocksController, NSTimer, StockFetcher;

@interface Application : UIApplication <UIApplicationDelegate> {

	char _isLocked;
	char _isLocaleValid;
	NSString* _testName;
	int _testIterationCount;
	StocksController* _controller;
	/*^block*/id _backgroundFetchCompletion;
	NSTimer* _backgroundFetchTimer;
	StockFetcher* _stockFetcher;

}

@property (nonatomic,copy) id backgroundFetchCompletion;                  //@synthesize backgroundFetchCompletion=_backgroundFetchCompletion - In the implementation block
@property (nonatomic,retain) NSTimer * backgroundFetchTimer;              //@synthesize backgroundFetchTimer=_backgroundFetchTimer - In the implementation block
@property (nonatomic,retain) StockFetcher * stockFetcher;                 //@synthesize stockFetcher=_stockFetcher - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)_stocksComplicationDefaultDidChange:(id)arg1 ;
-(StockFetcher *)stockFetcher;
-(void)setStockFetcher:(StockFetcher *)arg1 ;
-(void)selectAndDisplayStock:(id)arg1 ;
-(void)presentAddTransientStockDialog:(id)arg1 ;
-(void)setBackgroundFetchCompletion:(id)arg1 ;
-(NSTimer *)backgroundFetchTimer;
-(void)setBackgroundFetchTimer:(NSTimer *)arg1 ;
-(void)backgroundFetchTimedOut:(id)arg1 ;
-(void)_didFlipWidget:(id)arg1 ;
-(void)pptTest_rotation;
-(void)pptTest_swipeDetailPortrait:(char)arg1 ;
-(void)pptTest_flipWidget;
-(void)pptTest_scrollStocks:(id)arg1 ;
-(char)isLocaleEnglish;
-(void)finishedExtendedLaunchTask:(int)arg1 ;
-(id)backgroundFetchCompletion;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(id)_extendLaunchTest;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(char)runTest:(id)arg1 options:(id)arg2 ;
-(char)shouldRecordExtendedLaunchTime;
-(void)resetLocale;
@end

