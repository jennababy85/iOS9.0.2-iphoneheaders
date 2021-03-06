/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface ZWLensChromeGrabberView : UIView {

	char _expanded;
	int _grabberEdge;
	CAShapeLayer* _outerBorderLayer;
	CAShapeLayer* _etchLayer;

}

@property (assign,nonatomic) int grabberEdge;                              //@synthesize grabberEdge=_grabberEdge - In the implementation block
@property (nonatomic,retain) CAShapeLayer * outerBorderLayer;              //@synthesize outerBorderLayer=_outerBorderLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * etchLayer;                     //@synthesize etchLayer=_etchLayer - In the implementation block
@property (assign,getter=isExpanded,nonatomic) char expanded;              //@synthesize expanded=_expanded - In the implementation block
-(void)setEtchLayer:(CAShapeLayer *)arg1 ;
-(int)grabberEdge;
-(CAShapeLayer *)etchLayer;
-(void)setGrabberEdge:(int)arg1 ;
-(id)initWithEdge:(int)arg1 startExpanded:(char)arg2 ;
-(void)collapseGrabberAnimated:(char)arg1 ;
-(void)expandGrabberAnimated:(char)arg1 ;
-(void)setOuterBorderLayer:(CAShapeLayer *)arg1 ;
-(id)_grabberPathForCurrentEdgeIncludingFlatEdge:(char)arg1 ;
-(CAShapeLayer *)outerBorderLayer;
-(id)_grabberEtchPathForCurrentEdge;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
@end

