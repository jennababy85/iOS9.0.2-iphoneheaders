/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CalloutViewControllerProtocol.h>

@protocol _MKCalloutAccessoryView;
@class UILabel, UIView, _MKSmallCalloutPassthroughButton, MKCalloutBackgroundView, UILayoutGuide, NSMutableArray, NSString;

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView*<_MKCalloutAccessoryView> _leftView;
	UIView*<_MKCalloutAccessoryView> _rightView;
	UIView*<_MKCalloutAccessoryView> _externalLeftView;
	UIView*<_MKCalloutAccessoryView> _externalRightView;
	UIView*<_MKCalloutAccessoryView> _detailView;
	CGSize _preferredContentSize;
	float _maxWidth;
	char _shouldPositionTitleForMapsTransitionMovingSideways;
	_MKSmallCalloutPassthroughButton* _maskedContainerView;
	UIView* _unmaskedContainerView;
	MKCalloutBackgroundView* _calloutBackgroundView;
	SCD_Struct_MK14 _mapDisplayStyle;
	UIView* _leftSpacerView;
	UIView* _rightSpacerView;
	UILayoutGuide* _titleBaselineToDetailViewTopGuide;
	UILayoutGuide* _detailViewBottomToBottomGuide;
	NSMutableArray* _lastConstraints;
	char _initialDetailViewPositioning;
	char _initialLeftViewPositioning;
	char _initialRightViewPositioning;

}

@property (nonatomic,readonly) CGSize _preferredContentSize;                               //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (nonatomic,retain) MKCalloutBackgroundView * calloutBackgroundView;              //@synthesize calloutBackgroundView=_calloutBackgroundView - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK14 mapDisplayStyle;                              //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,nonatomic) float maximumWidth;                                           //@synthesize maxWidth=_maxWidth - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
-(SCD_Struct_MK14)mapDisplayStyle;
-(void)setMapDisplayStyle:(SCD_Struct_MK14)arg1 ;
-(void)beginMapsTransitionMovingSideways;
-(char)canDisplayCompleteTitleWhenExpanded;
-(UIView *)detailView;
-(void)setCalloutSubtitle:(NSString *)arg1 ;
-(char)_shouldCenterDetailView;
-(void)setDetailView:(UIView *)arg1 ;
-(void)setCalloutBackgroundView:(MKCalloutBackgroundView *)arg1 ;
-(void)setCalloutSubtitle:(id)arg1 animated:(char)arg2 ;
-(void)setDetailView:(id)arg1 animated:(char)arg2 ;
-(NSString *)calloutSubtitle;
-(MKCalloutBackgroundView *)calloutBackgroundView;
-(void)_updateAccessoryViewStyles;
-(id)_subtitleLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reset;
-(void)setMaximumWidth:(float)arg1 ;
-(float)maximumWidth;
-(CGSize)_preferredContentSize;
-(void)updateConstraints;
-(void)setLeftView:(id)arg1 animated:(char)arg2 ;
-(void)setRightView:(id)arg1 animated:(char)arg2 ;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
-(void)_updatePreferredContentSize;
-(NSString *)calloutTitle;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end
