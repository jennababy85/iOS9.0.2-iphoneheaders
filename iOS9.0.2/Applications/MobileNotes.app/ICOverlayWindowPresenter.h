/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIWindow;

@interface ICOverlayWindowPresenter : NSObject {

	int _presentAnimationType;
	UIWindow* _window;
	UIWindow* _presentingWindow;

}

@property (assign,nonatomic) int presentAnimationType;                 //@synthesize presentAnimationType=_presentAnimationType - In the implementation block
@property (nonatomic,retain) UIWindow * window;                        //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) UIWindow * presentingWindow;              //@synthesize presentingWindow=_presentingWindow - In the implementation block
-(void)dismissWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithRootViewController:(id)arg1 presentingWindow:(id)arg2 ;
-(void)presentWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setPresentingWindow:(UIWindow *)arg1 ;
-(UIWindow *)presentingWindow;
-(void)animateWindowFrameReverse:(char)arg1 duration:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(int)presentAnimationType;
-(void)setPresentAnimationType:(int)arg1 ;
@end

