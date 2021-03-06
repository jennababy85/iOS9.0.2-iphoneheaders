/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNWaypointsLoaderDelegate;
@class GEOMapServiceTraits, MNWaypointsLoaderTicket, NSError, DirectionsWaypoint, GEOComposedWaypoint;

@interface MNWaypointsLoader : NSObject {

	id<MNWaypointsLoaderDelegate> _delegate;
	GEOMapServiceTraits* _traits;
	int _transportType;
	MNWaypointsLoaderTicket* _startTicket;
	MNWaypointsLoaderTicket* _endTicket;
	NSError* _error;
	DirectionsWaypoint* _startWaypoint;
	DirectionsWaypoint* _endWaypoint;
	GEOComposedWaypoint* _startGEOWaypoint;
	GEOComposedWaypoint* _endGEOWaypoint;

}

@property (nonatomic,readonly) DirectionsWaypoint * startWaypoint;                       //@synthesize startWaypoint=_startWaypoint - In the implementation block
@property (nonatomic,readonly) DirectionsWaypoint * endWaypoint;                         //@synthesize endWaypoint=_endWaypoint - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * startGEOWaypoint;                   //@synthesize startGEOWaypoint=_startGEOWaypoint - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * endGEOWaypoint;                     //@synthesize endGEOWaypoint=_endGEOWaypoint - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                             //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic,__weak) id<MNWaypointsLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isLoading,nonatomic,readonly) char loading; 
-(id)_composedWaypointForDirectionsWaypoint:(id)arg1 transportType:(int)arg2 traits:(id)arg3 completionHandler:(/*^block*/id)arg4 networkActivityHandler:(/*^block*/id)arg5 ;
-(GEOComposedWaypoint *)startGEOWaypoint;
-(void)_waypointLoadFinished:(id)arg1 isStartWaypoint:(char)arg2 error:(id)arg3 ;
-(id)initWithStartWaypoint:(id)arg1 endWaypoint:(id)arg2 transportType:(int)arg3 traits:(id)arg4 ;
-(GEOComposedWaypoint *)endGEOWaypoint;
-(id)_searchForWaypoint:(id)arg1 searchSource:(int)arg2 handler:(/*^block*/id)arg3 ;
-(void)forceCacheFallback;
-(id)_clientAttributesForDirectionsWaypoint:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<MNWaypointsLoaderDelegate>)arg1 ;
-(id<MNWaypointsLoaderDelegate>)delegate;
-(void)begin;
-(GEOMapServiceTraits *)traits;
-(char)isLoading;
-(char)allowsNetworkTileLoad;
-(DirectionsWaypoint *)startWaypoint;
-(DirectionsWaypoint *)endWaypoint;
@end

