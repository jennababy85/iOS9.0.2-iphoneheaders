/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreLocation/CoreLocation-Structs.h>
@class NSString, CLLocation, CLHeading, NSSet;

@interface CLLocationManager : NSObject {

	id _internal;

}

@property (assign,getter=isMatchInfoEnabled,nonatomic) char matchInfoEnabled; 
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate; 
@property (nonatomic,readonly) char locationServicesEnabled; 
@property (nonatomic,copy) NSString * purpose; 
@property (assign,nonatomic) int activityType; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) char pausesLocationUpdatesAutomatically; 
@property (assign,nonatomic) char allowsBackgroundLocationUpdates; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (nonatomic,readonly) char headingAvailable; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy,readonly) CLHeading * heading; 
@property (nonatomic,readonly) double maximumRegionMonitoringDistance; 
@property (nonatomic,copy,readonly) NSSet * monitoredRegions; 
@property (nonatomic,copy,readonly) NSSet * rangedRegions; 
@property (assign,nonatomic) char privateMode; 
@property (nonatomic,readonly) char locationServicesAvailable; 
@property (nonatomic,readonly) char locationServicesApproved; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (assign,nonatomic) char supportInfo; 
@property (nonatomic,readonly) double bestAccuracy; 
@property (nonatomic,readonly) CLClientRef internalClient; 
@property (assign,getter=isPersistentMonitoringEnabled,nonatomic) char persistentMonitoringEnabled; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) char locationServicesPreferencesDialogEnabled; 
@property (assign,getter=isDynamicAccuracyReductionEnabled,nonatomic) char dynamicAccuracyReductionEnabled; 
+(int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(int)_regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
+(char)significantLocationChangeMonitoringAvailable;
+(char)isMonitoringAvailableForClass:(Class)arg1 ;
+(char)regionMonitoringAvailable;
+(char)regionMonitoringEnabled;
+(char)deferredLocationUpdatesAvailable;
+(int)regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 ;
+(int)regionMonitoringAuthorizationStatusForBundle:(id)arg1 ;
+(void)setAuthorizationStatus:(char)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setAuthorizationStatus:(char)arg1 forBundle:(id)arg2 ;
+(void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2 ;
+(void)setDefaultEffectiveBundle:(id)arg1 ;
+(char)shutdownDaemon;
+(char)bundleSupported:(id)arg1 ;
+(char)advertiseAsBeacon:(id)arg1 withPower:(id)arg2 ;
+(unsigned)entityClassesForLocationDictionary:(id)arg1 ;
+(char)isLocationActiveForLocationDictionary:(id)arg1 ;
+(char)hasUsedBackgroundLocationServices:(id)arg1 ;
+(char)mapCorrectionAvailable;
+(int)authorizationStatusForBundle:(id)arg1 ;
+(char)headingAvailable;
+(char)isRangingAvailable;
+(void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2 ;
+(id)sharedManager;
+(int)authorizationStatus;
+(char)dumpLogsWithMessage:(id)arg1 ;
+(int)_authorizationStatus;
+(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
+(char)locationServicesEnabled;
+(unsigned)entityAuthorizationForLocationDictionary:(id)arg1 ;
+(unsigned)activeLocationServiceTypesForLocationDictionary:(id)arg1 ;
+(id)dateLocationLastUsedForLocationDictionary:(id)arg1 ;
+(void)setLocationServicesEnabled:(char)arg1 ;
+(unsigned)allowableAuthorizationForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorization:(unsigned)arg1 forLocationDictionary:(id)arg2 ;
+(char)isStatusBarIconEnabledForLocationEntityClass:(unsigned)arg1 ;
+(void)setStatusBarIconEnabled:(char)arg1 forLocationEntityClass:(unsigned)arg2 ;
+(void)setDefaultEffectiveBundleIdentifier:(id)arg1 ;
+(char)locationServicesEnabled:(char)arg1 ;
+(unsigned)primaryEntityClassForLocationDictionary:(id)arg1 ;
+(char)isEntityAuthorizedForLocationDictionary:(id)arg1 ;
+(void)setEntityAuthorized:(char)arg1 forLocationDictionary:(id)arg2 ;
-(void)onClientEvent:(int)arg1 supportInfo:(id)arg2 ;
-(void)setAllowsBackgroundLocationUpdates:(char)arg1 ;
-(char)allowsBackgroundLocationUpdates;
-(NSSet *)rangedRegions;
-(void)onDidBecomeActive:(id)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2 ;
-(void)onClientEventAuthStatus:(id)arg1 ;
-(void)onClientEventLocation:(id)arg1 ;
-(void)onClientEventLocationUnavailable:(id)arg1 ;
-(void)onClientEventHeading:(id)arg1 ;
-(void)onClientEventHeadingCalibration:(id)arg1 ;
-(void)onClientEventHistoricLocation:(id)arg1 ;
-(void)onClientEventError:(id)arg1 ;
-(void)onClientEventRegion:(id)arg1 ;
-(void)onClientEventRegionState:(id)arg1 ;
-(void)onClientEventRegionError:(id)arg1 ;
-(void)onClientEventRanging:(id)arg1 ;
-(void)onClientEventRangingError:(id)arg1 ;
-(void)onClientEventRegionResponseDelayed:(id)arg1 ;
-(void)onClientEventRegionSetupCompleted:(id)arg1 ;
-(void)onClientEventAutopauseStatus:(id)arg1 ;
-(void)onClientEventBatch:(id)arg1 ;
-(void)onClientEventInterrupted:(id)arg1 ;
-(void)onClientEventVehicleSpeed:(id)arg1 ;
-(void)onClientEventVehicleHeading:(id)arg1 ;
-(void)onClientEventSignificantLocationVisit:(id)arg1 ;
-(void)resumeLocationUpdates;
-(void)pauseLocationUpdates:(char)arg1 ;
-(char)pausesLocationUpdatesAutomatically;
-(char)locationServicesAvailable;
-(void)setSupportInfo:(char)arg1 ;
-(char)supportInfo;
-(double)bestAccuracy;
-(CLClientRef)internalClient;
-(void)setPrivateMode:(char)arg1 ;
-(char)privateMode;
-(void)requestLocation;
-(void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2 ;
-(void)disallowDeferredLocationUpdates;
-(double)headingFilter;
-(void)startAppStatusUpdates;
-(void)stopAppStatusUpdates;
-(void)startTechStatusUpdates;
-(void)stopTechStatusUpdates;
-(void)startMonitoringSignificantLocationChanges;
-(void)stopMonitoringSignificantLocationChanges;
-(void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2 ;
-(void)requestStateForRegion:(id)arg1 ;
-(double)maximumRegionMonitoringDistance;
-(void)startRangingBeaconsInRegion:(id)arg1 ;
-(void)stopRangingBeaconsInRegion:(id)arg1 ;
-(id)appsUsingLocation;
-(id)appsUsingLocationWithDetails;
-(id)technologiesInUse;
-(void)onLocationRequestTimeout;
-(char)isPersistentMonitoringEnabled;
-(void)setPersistentMonitoringEnabled:(char)arg1 ;
-(char)isDynamicAccuracyReductionEnabled;
-(void)registerAsLocationClient;
-(void)setLocationServicesPreferencesDialogEnabled:(char)arg1 ;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(void)dismissHeadingCalibrationDisplay;
-(char)isMatchInfoEnabled;
-(void)stopUpdatingVehicleSpeed;
-(void)setActivityType:(int)arg1 ;
-(int)headingOrientation;
-(double)desiredAccuracy;
-(void)startUpdatingVehicleHeading;
-(void)setMatchInfoEnabled:(char)arg1 ;
-(char)isLocationServicesPreferencesDialogEnabled;
-(double)distanceFilter;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleHeading;
-(double)expectedGpsUpdateInterval;
-(id)initWithEffectiveBundle:(id)arg1 ;
-(char)headingAvailable;
-(void)requestWhenInUseAuthorization;
-(void)setPausesLocationUpdatesAutomatically:(char)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)startUpdatingLocationWithPrompt;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CLLocationManagerDelegate>)delegate;
-(int)activityType;
-(CLLocation *)location;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(CLHeading *)heading;
-(NSString *)purpose;
-(void)setPurpose:(NSString *)arg1 ;
-(void)startMonitoringForRegion:(id)arg1 ;
-(void)stopMonitoringForRegion:(id)arg1 ;
-(NSSet *)monitoredRegions;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setHeadingFilter:(double)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(char)locationServicesApproved;
-(char)locationServicesEnabled;
-(void)resetApps;
-(void)setDynamicAccuracyReductionEnabled:(char)arg1 ;
-(void)markAsHavingReceivedLocation;
-(void)requestAlwaysAuthorization;
-(void)setIsActuallyAWatchKitExtension:(char)arg1 ;
-(void)startMonitoringVisits;
-(void)stopMonitoringVisits;
@end

