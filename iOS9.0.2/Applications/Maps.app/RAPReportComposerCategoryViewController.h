/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPReportTableViewController.h>
#import <Maps/RAPCategoryCases.h>

@class RAPReportComposerLabelCorrectionController, RAPReportComposerImageryCorrectionController, RAPReportComposerAddPlaceController, RAPReportComposerPlaceCorrectionController, NSString;

@interface RAPReportComposerCategoryViewController : RAPReportTableViewController <RAPCategoryCases> {

	RAPReportComposerLabelCorrectionController* _labelCorrectionController;
	RAPReportComposerImageryCorrectionController* _imageryCorrectionController;
	RAPReportComposerAddPlaceController* _addPlaceController;
	RAPReportComposerPlaceCorrectionController* _placeCorrectionController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)proceedToPlaceSelectionQuestion:(id)arg1 ;
-(void)proceedToProblemNotListedQuestion:(id)arg1 ;
-(void)proceedToBadRouteSuggestionsQuestion:(id)arg1 ;
-(void)proceedToProblemWithImageryQuestion:(id)arg1 ;
-(void)proceedToTransitSubcategoryQuestion:(id)arg1 ;
-(void)proceedToProblemWithDirectionsQuestion:(id)arg1 ;
-(void)proceedToIncorrectSearchResultsQuestion:(id)arg1 ;
-(void)proceedToStationAccessPointQuestion:(id)arg1 ;
-(void)proceedToPlaceClosureQuestion:(id)arg1 ;
-(void)proceedToPlaceCorrectionsQuestion:(id)arg1 ;
-(void)proceedToPlaceLocationCorrectionsQuestion:(id)arg1 ;
-(void)_segueToViewControllerForSelectedInitialCategory;
-(void)proceedToLabelCorrectionsQuestion:(id)arg1 ;
-(void)proceedToAddNewPlaceQuestion:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)_cancel;
@end

