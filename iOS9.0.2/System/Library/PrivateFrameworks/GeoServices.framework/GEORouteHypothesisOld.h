/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOLocation, NSDate, NSString;

@interface GEORouteHypothesisOld : NSObject {

	GEOLocation* _lastLocation;
	NSDate* _suggestedDepartureDate;
	NSDate* _estimatedArrivalDate;
	unsigned _currentTrafficDensity;
	unsigned _historicTrafficDensity;
	char _hasTrafficIncidentOnRoute;
	int _routeIncidentType;
	int _routeIncidentSignificance;
	NSString* _routeIncidentStreetName;
	unsigned _travelState;
	double _travelStateScore;

}

@property (nonatomic,retain) GEOLocation * lastLocation;                        //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,readonly) NSDate * suggestedDepartureDate;                 //@synthesize suggestedDepartureDate=_suggestedDepartureDate - In the implementation block
@property (nonatomic,readonly) NSDate * estimatedArrivalDate;                   //@synthesize estimatedArrivalDate=_estimatedArrivalDate - In the implementation block
@property (nonatomic,readonly) unsigned currentTrafficDensity;                  //@synthesize currentTrafficDensity=_currentTrafficDensity - In the implementation block
@property (nonatomic,readonly) unsigned historicTrafficDensity;                 //@synthesize historicTrafficDensity=_historicTrafficDensity - In the implementation block
@property (nonatomic,readonly) char hasTrafficIncidentOnRoute;                  //@synthesize hasTrafficIncidentOnRoute=_hasTrafficIncidentOnRoute - In the implementation block
@property (nonatomic,readonly) int routeIncidentType;                           //@synthesize routeIncidentType=_routeIncidentType - In the implementation block
@property (nonatomic,readonly) int routeIncidentSignificance;                   //@synthesize routeIncidentSignificance=_routeIncidentSignificance - In the implementation block
@property (nonatomic,readonly) NSString * routeIncidentStreetName;              //@synthesize routeIncidentStreetName=_routeIncidentStreetName - In the implementation block
@property (nonatomic,readonly) unsigned travelState;                            //@synthesize travelState=_travelState - In the implementation block
@property (nonatomic,readonly) double travelStateScore;                         //@synthesize travelStateScore=_travelStateScore - In the implementation block
-(void)setLastLocation:(GEOLocation *)arg1 ;
-(GEOLocation *)lastLocation;
-(void)dealloc;
-(id)description;
-(int)routeIncidentType;
-(NSString *)routeIncidentStreetName;
-(int)routeIncidentSignificance;
-(unsigned)historicTrafficDensity;
-(char)hasTrafficIncidentOnRoute;
-(NSDate *)estimatedArrivalDate;
-(NSDate *)suggestedDepartureDate;
-(double)travelStateScore;
-(void)updateTravelState:(id)arg1 ;
-(void)updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
-(unsigned)travelState;
-(void)updateDepartureAndArrivalSuggestions:(id)arg1 arrivalDate:(id)arg2 travelTimeWithTraffic:(double)arg3 ;
-(unsigned)currentTrafficDensity;
-(void)updateTrafficIncidents:(id)arg1 ;
-(void)updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2 ;
@end

