/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Reminders/Reminders-Structs.h>
@class _UIDynamicValueAnimation, UIPanGestureRecognizer, UIView;

@interface RemindersCardVerticalPanAnimator : NSObject {

	_UIDynamicValueAnimation* _panningAnimation;
	UIPanGestureRecognizer* _gestureRecognizer;
	UIView* _panningCardView;
	float _panningViewTargetScale;
	CGPoint _panningViewStartPosition;
	CGPoint _panningViewTargetPosition;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIView * panningCardView;                                //@synthesize panningCardView=_panningCardView - In the implementation block
@property (assign,nonatomic) CGPoint panningViewStartPosition;                        //@synthesize panningViewStartPosition=_panningViewStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint panningViewTargetPosition;                       //@synthesize panningViewTargetPosition=_panningViewTargetPosition - In the implementation block
@property (assign,nonatomic) float panningViewTargetScale;                            //@synthesize panningViewTargetScale=_panningViewTargetScale - In the implementation block
-(void)setPanningCardView:(UIView *)arg1 ;
-(id)initWithCardView:(id)arg1 ;
-(void)dismissWithStartVelocity:(float)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)panningCardView;
-(CGPoint)panningViewStartPosition;
-(void)layoutViewsWithY:(float)arg1 ;
-(void)setPanningViewStartPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetScale:(float)arg1 ;
-(id)_dynamicAnimationWithStart:(float)arg1 target:(float)arg2 initialVelocity:(float)arg3 ;
-(CGPoint)panningViewTargetPosition;
-(float)panningViewTargetScale;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)stop;
@end

