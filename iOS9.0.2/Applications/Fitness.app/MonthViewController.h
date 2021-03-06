/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <Fitness/MonthScrollViewDelegate.h>
#import <Fitness/MonthSwitchViewPopoverDelegate.h>

@class UIPanGestureRecognizer, PaletteViewController, FitnessModel, NSDate, MonthSwitchViewPopoverController, UILabel, _SwitchViewDropdownControl, MonthScrollViewController, MonthInfiniteScrollView, NSString;

@interface MonthViewController : UIViewController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate, MonthScrollViewDelegate, MonthSwitchViewPopoverDelegate> {

	UIPanGestureRecognizer* _panGestureRecognizer;
	float _panXMax;
	float _panXStart;
	float _panYStart;
	float _panXPercent;
	PaletteViewController* _paletteVC;
	FitnessModel* _model;
	NSDate* _currentDateForNavigationTitle;
	MonthSwitchViewPopoverController* _popoverController;
	UILabel* _leftTitleLabel;
	_SwitchViewDropdownControl* _dropdownControl;
	char _needsRefreshedData;
	MonthScrollViewController* _scrollVC;
	MonthInfiniteScrollView* _scrollView;

}

@property (assign,nonatomic) char needsRefreshedData;                           //@synthesize needsRefreshedData=_needsRefreshedData - In the implementation block
@property (nonatomic,retain) MonthScrollViewController * scrollVC;              //@synthesize scrollVC=_scrollVC - In the implementation block
@property (nonatomic,retain) MonthInfiniteScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNeedsRefreshedData:(char)arg1 ;
-(MonthScrollViewController *)scrollVC;
-(void)scrolledPastMonthWithDate:(id)arg1 ;
-(void)dateSelected:(id)arg1 ;
-(void)didSwitchToState:(unsigned)arg1 ;
-(id)_leftTitleStringForDate:(id)arg1 ;
-(void)didTapSwitchView:(id)arg1 ;
-(void)handleMonthsViewGesture:(id)arg1 ;
-(char)needsRefreshedData;
-(void)_updateBackButtonOnDateChange:(id)arg1 ;
-(char)_isSameMonthAsCurrentMonth:(id)arg1 ;
-(void)setScrollVC:(MonthScrollViewController *)arg1 ;
-(void)_registerForNotifications;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setScrollView:(MonthInfiniteScrollView *)arg1 ;
-(MonthInfiniteScrollView *)scrollView;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id)initWithModel:(id)arg1 ;
@end

