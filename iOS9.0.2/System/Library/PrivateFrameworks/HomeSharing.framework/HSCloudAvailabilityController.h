/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/HSCloudAvailability.h>

@protocol OS_dispatch_queue;
@class NSObject, RadiosPreferences, NSString;

@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, HSCloudAvailability> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	char _isAirplaneModeActive;
	char _isAutoDownloadOnCellularAllowed;
	char _isCellularDataActive;
	char _isShowingAllMusic;
	char _isShowingAllVideo;
	char _isUpdateInProgress;
	char _isWiFiEnabled;
	char _isNetworkReachable;
	char _canShowCloudMusic;
	char _canShowCloudVideo;
	char _canShowCloudDownloadButtons;
	int _preferencesChangedNotifyToken;
	char _preferencesChangedNotifyTokenIsValid;
	int _networkType;
	RadiosPreferences* _radiosPreferences;
	unsigned _networkReachabilityObservationCount;
	SCNetworkReachabilityRef _reachabilityRef;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(char)canShowCloudMusic;
-(char)canShowCloudVideo;
-(char)hasProperNetworkConditionsToPlayMedia;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(char)isCellularDataRestricted;
-(char)shouldProhibitActionsForCurrentNetworkConditions;
-(char)canShowCloudDownloadButtons;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(char)isNetworkReachable;
-(void)dealloc;
-(id)init;
-(char)_isAutoDownloadOnCellularAllowed;
-(char)_uncachedIsAutoDownloadOnCellularAllowed;
-(char)_uncachedIsShowingAllMusic;
-(char)_uncachedIsShowingAllVideo;
-(void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(char)arg1 ;
-(void)_onQueue_updateCanShowCloudTracksWithNotification:(char)arg1 ;
-(void)_wifiEnabledDidChangeNotification:(id)arg1 ;
-(void)_onQueue_beginObservingReachabilityChanges;
-(void)_onQueue_endObservingReachabilityChanges;
-(char)_hasCellularCapability;
-(char)_hasWiFiCapability;
-(void)beginObservingNetworkReachability;
-(void)endObservingNetworkReachability;
-(void)_setNewIsNetworkReachable:(char)arg1 ;
-(void)airplaneModeChanged;
-(void)_handleTelephonyNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
@end

