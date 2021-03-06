/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@interface BarShadowView : UIView {

	int _axis;

}

@property (assign,nonatomic) int axis;              //@synthesize axis=_axis - In the implementation block
-(CGRect)frameForPlacingBesideFrame:(CGRect)arg1 edge:(unsigned)arg2 edgeInsets:(UIEdgeInsets)arg3 ;
-(float)_hairline;
-(CGRect)frameForPlacingAsSubviewOfView:(id)arg1 edge:(unsigned)arg2 edgeInsets:(UIEdgeInsets)arg3 ;
-(CGRect)frameForPlacingBesideView:(id)arg1 alignedToAttribute:(int)arg2 edgeInsets:(UIEdgeInsets)arg3 ;
-(id)initWithAxis:(int)arg1 ;
-(void)updateColorForDarkBackground:(char)arg1 ;
-(CGRect)frameForPlacingBesideView:(id)arg1 edge:(unsigned)arg2 edgeInsets:(UIEdgeInsets)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setAxis:(int)arg1 ;
-(CGSize)intrinsicContentSize;
-(int)axis;
@end

