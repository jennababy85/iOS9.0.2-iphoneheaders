/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSArray;

@interface UIMovieScrubberEditingView : UIView {

	UIImageView* _leftImageView;
	UIImageView* _middleImageView;
	UIImageView* _rightImageView;
	NSArray* _activeImages;
	NSArray* _activeNoEditImages;
	NSArray* _inactiveImages;
	char _enabled;
	char _editing;
	float _edgeInset;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;              //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) float edgeInset;                            //@synthesize edgeInset=_edgeInset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(char)isEditing;
-(void)setEditing:(char)arg1 ;
-(void)setEdgeInset:(float)arg1 ;
-(void)bounce;
-(int)handleForPoint:(CGPoint)arg1 hitOffset:(float*)arg2 ;
-(float)edgeInset;
-(void)_updateHandleImages;
-(id)_handleImages;
-(CGRect)_leftHandleRect;
-(CGRect)_rightHandleRect;
-(float)_bounceValueForFraction:(float)arg1 ;
-(char)pointInsideLeftHandle:(CGPoint)arg1 ;
-(char)pointInsideRightHandle:(CGPoint)arg1 ;
@end

