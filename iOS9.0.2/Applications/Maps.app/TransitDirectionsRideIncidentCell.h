/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/TransitDirectionsExpandCell.h>

@class NSLayoutConstraint, UIButton;

@interface TransitDirectionsRideIncidentCell : TransitDirectionsExpandCell {

	NSLayoutConstraint* _previousInstructionToIncidentBaselineConstraint;
	NSLayoutConstraint* _incidentBaselineToBottomConstraint;
	NSLayoutConstraint* _iconCenterLayoutGuideBottomConstraint;
	UIButton* _incidentButton;

}

@property (assign,nonatomic,__weak) id<TransitDirectionsInstructionsCellDelegate><TransitDirectionsIncidentCellDelegate> delegate; 
@property (nonatomic,readonly) UIButton * incidentButton;                                                                                       //@synthesize incidentButton=_incidentButton - In the implementation block
-(void)configureWithItem:(id)arg1 ;
-(id)_initialConstraints;
-(void)_incidentButtonTapped:(id)arg1 ;
-(float)_distanceToIncidentButtonBaseline;
-(id)_tertiaryFont;
-(float)_incidentButtonBaselineToBottomDistance;
-(void)_contentSizeCategoryDidChange;
-(UIButton *)incidentButton;
-(void)_createSubviews;
-(void)tintColorDidChange;
@end

