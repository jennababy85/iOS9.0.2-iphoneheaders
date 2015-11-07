/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class BKLibraryBookshelfViewController, UIViewController, BKLibraryViewController, BKBookInfo, CALayer, IMToolbar, UIView, NSString;

@interface BKSeriesContainerAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	char _openingContainer;
	char _isCompact;
	char _isPortrait;
	BKLibraryBookshelfViewController* _fromShelfVC;
	BKLibraryBookshelfViewController* _toShelfVC;
	UIViewController* _regularVC;
	BKLibraryViewController* _regularLibraryVC;
	BKLibraryViewController* _seriesLibraryVC;
	BKLibraryBookshelfViewController* _seriesShelfVC;
	BKLibraryBookshelfViewController* _regularShelfVC;
	BKBookInfo* _book;
	/*^block*/id _seriesAnimCompletionBlock;
	CALayer* _containerClippingLayer;
	IMToolbar* _regularUpperToolbar;
	UIView* _regularUpperToolbarScrim;
	UIView* _regularSearchBar;
	int _viewType;
	CGPoint _seriesAnimContentOffset;
	CGPoint _regularUpperToolbarOldAnchorPoint;
	CGPoint _regularUpperToolbarScrimOldAnchorPoint;
	CGPoint _regularSearchBarOldAnchorPoint;

}

@property (nonatomic,retain) BKLibraryBookshelfViewController * fromShelfVC;                 //@synthesize fromShelfVC=_fromShelfVC - In the implementation block
@property (nonatomic,retain) BKLibraryBookshelfViewController * toShelfVC;                   //@synthesize toShelfVC=_toShelfVC - In the implementation block
@property (nonatomic,retain) UIViewController * regularVC;                                   //@synthesize regularVC=_regularVC - In the implementation block
@property (nonatomic,retain) BKLibraryViewController * regularLibraryVC;                     //@synthesize regularLibraryVC=_regularLibraryVC - In the implementation block
@property (nonatomic,retain) BKLibraryViewController * seriesLibraryVC;                      //@synthesize seriesLibraryVC=_seriesLibraryVC - In the implementation block
@property (nonatomic,retain) BKLibraryBookshelfViewController * seriesShelfVC;               //@synthesize seriesShelfVC=_seriesShelfVC - In the implementation block
@property (nonatomic,retain) BKLibraryBookshelfViewController * regularShelfVC;              //@synthesize regularShelfVC=_regularShelfVC - In the implementation block
@property (assign,nonatomic) char openingContainer;                                          //@synthesize openingContainer=_openingContainer - In the implementation block
@property (nonatomic,retain) BKBookInfo * book;                                              //@synthesize book=_book - In the implementation block
@property (nonatomic,copy) id seriesAnimCompletionBlock;                                     //@synthesize seriesAnimCompletionBlock=_seriesAnimCompletionBlock - In the implementation block
@property (nonatomic,retain) CALayer * containerClippingLayer;                               //@synthesize containerClippingLayer=_containerClippingLayer - In the implementation block
@property (assign,nonatomic) CGPoint seriesAnimContentOffset;                                //@synthesize seriesAnimContentOffset=_seriesAnimContentOffset - In the implementation block
@property (nonatomic,retain) IMToolbar * regularUpperToolbar;                                //@synthesize regularUpperToolbar=_regularUpperToolbar - In the implementation block
@property (nonatomic,retain) UIView * regularUpperToolbarScrim;                              //@synthesize regularUpperToolbarScrim=_regularUpperToolbarScrim - In the implementation block
@property (nonatomic,retain) UIView * regularSearchBar;                                      //@synthesize regularSearchBar=_regularSearchBar - In the implementation block
@property (assign,nonatomic) CGPoint regularUpperToolbarOldAnchorPoint;                      //@synthesize regularUpperToolbarOldAnchorPoint=_regularUpperToolbarOldAnchorPoint - In the implementation block
@property (assign,nonatomic) CGPoint regularUpperToolbarScrimOldAnchorPoint;                 //@synthesize regularUpperToolbarScrimOldAnchorPoint=_regularUpperToolbarScrimOldAnchorPoint - In the implementation block
@property (assign,nonatomic) CGPoint regularSearchBarOldAnchorPoint;                         //@synthesize regularSearchBarOldAnchorPoint=_regularSearchBarOldAnchorPoint - In the implementation block
@property (assign,nonatomic) int viewType;                                                   //@synthesize viewType=_viewType - In the implementation block
@property (assign,nonatomic) char isCompact;                                                 //@synthesize isCompact=_isCompact - In the implementation block
@property (assign,nonatomic) char isPortrait;                                                //@synthesize isPortrait=_isPortrait - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)seriesAnimContentOffset;
-(void)setSeriesAnimContentOffset:(CGPoint)arg1 ;
-(void)setViewType:(int)arg1 ;
-(id)initWithBook:(id)arg1 regularLibraryViewController:(id)arg2 viewType:(int)arg3 ;
-(double)totalAnimationDuration;
-(void)setFromShelfVC:(BKLibraryBookshelfViewController *)arg1 ;
-(void)setToShelfVC:(BKLibraryBookshelfViewController *)arg1 ;
-(void)setSeriesLibraryVC:(BKLibraryViewController *)arg1 ;
-(void)setSeriesShelfVC:(BKLibraryBookshelfViewController *)arg1 ;
-(void)setRegularShelfVC:(BKLibraryBookshelfViewController *)arg1 ;
-(void)setRegularUpperToolbar:(IMToolbar *)arg1 ;
-(void)setRegularUpperToolbarScrim:(UIView *)arg1 ;
-(void)setRegularSearchBar:(UIView *)arg1 ;
-(void)playSeriesContainerAnimationWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_playSeriesContainerAnimationWithTransitionContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)calcForShelfViewController:(id)arg1 numBigColumns:(int*)arg2 numBigRows:(int*)arg3 ;
-(char)openingContainer;
-(BKLibraryBookshelfViewController *)regularShelfVC;
-(void)setSeriesAnimCompletionBlock:(id)arg1 ;
-(id)fetchBooksForShelf:(id)arg1 stackBooks:(id)arg2 firstVisBook:(id)arg3 visRange:(NSRange)arg4 numBigColumns:(unsigned)arg5 numBooksBeforeTopStackBook:(unsigned)arg6 numBooksAfterTopStackBook:(unsigned)arg7 seriesAnimContentOffset:(CGPoint*)arg8 seriesVisibleCellRange:(NSRange*)arg9 ;
-(void)animationsCompleted;
-(void)setContainerClippingLayer:(CALayer *)arg1 ;
-(id)bannerLayerAndAnimationsWithReverse:(char)arg1 bannerImage:(id)arg2 bookInfo:(id)arg3 scaleStartDelay:(double)arg4 scaleDur:(double)arg5 opacityStartDelay:(double)arg6 opacityDur:(double)arg7 totalDur:(double)arg8 scaleTimingFunc:(id)arg9 opacityTimingFunc:(id)arg10 fromPos:(CGPoint)arg11 toPos:(CGPoint)arg12 fromSizeScalar:(float)arg13 toSizeScalar:(float)arg14 fromOpacity:(float)arg15 tOpacity:(float)arg16 ;
-(int)_findBookIndexInArray:(id)arg1 withBook:(id)arg2 ;
-(BKLibraryBookshelfViewController *)fromShelfVC;
-(BKLibraryBookshelfViewController *)toShelfVC;
-(UIViewController *)regularVC;
-(void)setRegularVC:(UIViewController *)arg1 ;
-(BKLibraryViewController *)regularLibraryVC;
-(void)setRegularLibraryVC:(BKLibraryViewController *)arg1 ;
-(BKLibraryViewController *)seriesLibraryVC;
-(BKLibraryBookshelfViewController *)seriesShelfVC;
-(void)setOpeningContainer:(char)arg1 ;
-(BKBookInfo *)book;
-(void)setBook:(BKBookInfo *)arg1 ;
-(id)seriesAnimCompletionBlock;
-(CALayer *)containerClippingLayer;
-(IMToolbar *)regularUpperToolbar;
-(UIView *)regularUpperToolbarScrim;
-(UIView *)regularSearchBar;
-(CGPoint)regularUpperToolbarOldAnchorPoint;
-(void)setRegularUpperToolbarOldAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)regularUpperToolbarScrimOldAnchorPoint;
-(void)setRegularUpperToolbarScrimOldAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)regularSearchBarOldAnchorPoint;
-(void)setRegularSearchBarOldAnchorPoint:(CGPoint)arg1 ;
-(void)setIsPortrait:(char)arg1 ;
-(char)isPortrait;
-(void)dealloc;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(int)viewType;
-(void)setIsCompact:(char)arg1 ;
-(char)isCompact;
@end
