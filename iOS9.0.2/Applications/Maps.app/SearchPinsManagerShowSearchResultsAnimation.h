/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SearchInfo, MKMapView, SearchResult;

@interface SearchPinsManagerShowSearchResultsAnimation : NSObject {

	SearchInfo* _searchInfo;
	MKMapView* _mapView;
	char _started;
	char _canProceedToDropPins;
	char _viewportAllowsDroppingPins;
	char _hasDroppedPins;
	char _cancelled;
	SearchResult* _searchResultToSelect;
	/*^block*/id _completion;

}
-(id)initWithSearchInfo:(id)arg1 selectedSearchResult:(id)arg2 mapView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_proceedWithDroppingPins;
-(void)proceedWithDroppingPins:(char)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)start;
@end
