/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>

@class MKMapView, SearchResult;

@interface SnapshotMapViewController : UIViewController {

	MKMapView* _mapView;
	SearchResult* _searchResult;

}

@property (nonatomic,readonly) SearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RA13 mapRegion; 
@property (nonatomic,readonly) float zoomLevel; 
-(id)initWithSearchResult:(id)arg1 ;
-(void)setMapRegionForCoordinateAndUserLocation;
-(float)zoomLevel;
-(id)initWithCoder:(id)arg1 ;
-(int)preferredStatusBarStyle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(SCD_Struct_RA13)mapRegion;
-(SearchResult *)searchResult;
@end
