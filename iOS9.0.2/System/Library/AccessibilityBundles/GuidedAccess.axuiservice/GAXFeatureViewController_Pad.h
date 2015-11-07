/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXFeatureViewController.h>
#import <GuidedAccess/GAXOptionsViewControllerDataSource.h>
#import <GuidedAccess/GAXOptionsViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>

@class UIPopoverController, NSString;

@interface GAXFeatureViewController_Pad : GAXFeatureViewController <GAXOptionsViewControllerDataSource, GAXOptionsViewControllerDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate> {

	UIPopoverController* _appOptionsPopoverController;
	UIPopoverController* _hardwareOptionsPopoverController;
	UIPopoverController* _timeRestrictionsOptionsPopoverController;

}

@property (nonatomic,retain) UIPopoverController * appOptionsPopoverController;                           //@synthesize appOptionsPopoverController=_appOptionsPopoverController - In the implementation block
@property (nonatomic,retain) UIPopoverController * hardwareOptionsPopoverController;                      //@synthesize hardwareOptionsPopoverController=_hardwareOptionsPopoverController - In the implementation block
@property (nonatomic,retain) UIPopoverController * timeRestrictionsOptionsPopoverController;              //@synthesize timeRestrictionsOptionsPopoverController=_timeRestrictionsOptionsPopoverController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissOptionsAnimated:(char)arg1 ;
-(id)_hardwareFeatureViews;
-(id)_appFeatureViews;
-(id)_timeRestrictionFeatureViews;
-(UIPopoverController *)appOptionsPopoverController;
-(void)setAppOptionsPopoverController:(UIPopoverController *)arg1 ;
-(UIPopoverController *)hardwareOptionsPopoverController;
-(void)setHardwareOptionsPopoverController:(UIPopoverController *)arg1 ;
-(UIPopoverController *)timeRestrictionsOptionsPopoverController;
-(void)setTimeRestrictionsOptionsPopoverController:(UIPopoverController *)arg1 ;
-(id)_paddingViewsWithCount:(unsigned)arg1 ;
-(id)_optionsPopoverControllerWithType:(int)arg1 originatingFeatureView:(id)arg2 ;
-(CGRect)_originatingFrameForPopoverCorrespondingToFeatureView:(id)arg1 inView:(id)arg2 ;
-(id)optionsViewController:(id)arg1 textForFeatureAtIndex:(unsigned)arg2 ;
-(id)optionsViewController:(id)arg1 detailTextForFeatureAtIndex:(unsigned)arg2 ;
-(char)optionsViewController:(id)arg1 stateForForFeatureAtIndex:(unsigned)arg2 ;
-(unsigned)numberOfFeaturesInOptionsViewController:(id)arg1 ;
-(void)optionsViewController:(id)arg1 featureAtIndex:(unsigned)arg2 didChangeState:(char)arg3 ;
-(void)optionsViewController:(id)arg1 timeRestrictionValueDidChange:(int)arg2 timeRestrictionsEnabled:(char)arg3 ;
-(int)timeRestrictionDurationForAppWithOptionsViewController:(id)arg1 ;
-(char)timeRestrictiosEnabledForAppWithOptionsViewController:(id)arg1 ;
-(void)featureView:(id)arg1 didChangeState:(char)arg2 ;
-(void)presentOptionsForFeatureView:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(char)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
@end
