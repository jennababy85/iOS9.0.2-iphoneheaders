/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBWallpaperObserver.h>
#import <SpringBoard/SBMainAppSwitcherPageContentView.h>

@class UIView, SBFakeStatusBarView, SBAppSwitcherStatusBarViewCache, NSString;

@interface SBAppSwitcherHomePageCellView : UIView <SBWallpaperObserver, SBMainAppSwitcherPageContentView> {

	UIView* _possiblyRotatedContainer;
	UIView* _nonRotatedContainer;
	UIView* _homeScreenView;
	UIView* _homeSnapshot;
	UIView* _wallpaperView;
	SBFakeStatusBarView* _fakeStatusBar;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	char _usesSnapshots;
	int _snapshotOrientation;
	int _orientation;

}

@property (nonatomic,retain,readonly) UIView * homeSnapshot;              //@synthesize homeSnapshot=_homeSnapshot - In the implementation block
@property (nonatomic,retain) UIView * homeScreenView;                     //@synthesize homeScreenView=_homeScreenView - In the implementation block
@property (assign,nonatomic) int orientation;                             //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wallpaperSnapshotForZoomFactor:(float)arg1 orientation:(int)arg2 ;
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)_viewPresenting:(id)arg1 ;
-(void)_viewDismissing:(id)arg1 ;
-(void)_viewDidAnimatePresentation:(id)arg1 ;
-(void)_statusBarStyleOverridesDidChange:(id)arg1 ;
-(void)_updateWallpaperView;
-(void)_addHomeScreenViewAsSubview:(id)arg1 ;
-(void)setHomeSnapshot:(id)arg1 inOrientation:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 statusBarCache:(id)arg2 ;
-(void)setHomeScreenView:(UIView *)arg1 ;
-(UIView *)homeSnapshot;
-(UIView *)homeScreenView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)setLegibilitySettings:(id)arg1 ;
@end

