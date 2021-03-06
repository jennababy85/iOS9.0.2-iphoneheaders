/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SPLocalServerProtocol.h>
#import <companionappd/SPDaemonManagerTransactionObserver.h>
#import <companionappd/SPTransportDelegate.h>
#import <libobjc.A.dylib/NRDevicePropertyObserver.h>
#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/NRDevicePropertyObserver.h>
#import <libobjc.A.dylib/SPCompanionAppServerProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCListener, NSMutableDictionary, NRDevice, SPUsageTrack, BKSProcessAssertion, NSString, NSDate;

@interface SPCompanionAppServer : NSObject <NSXPCListenerDelegate, SPLocalServerProtocol, SPDaemonManagerTransactionObserver, SPTransportDelegate, NRDevicePropertyObserver, PSYSyncCoordinatorDelegate, NRDevicePropertyObserver, SPCompanionAppServerProtocol> {

	char _paired;
	char _launchRequestIsOutstanding;
	char _cancelOutstandingLaunchRequests;
	int _appDBUpdateCounter;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _queueRemote;
	NSObject*<OS_dispatch_queue> _dbUpdateQueue;
	NSObject*<OS_dispatch_source> _gizmoApplicationsUpdateTimer;
	NSXPCListener* _localListener;
	NSMutableDictionary* _localConnections;
	NRDevice* _pairedDevice;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSMutableDictionary* _outstandingtransactions;
	unsigned _nextTransactionID;
	SPUsageTrack* _usageTrack;
	NSMutableDictionary* _dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
	NSObject*<OS_dispatch_queue> _processAssertionQueue;
	BKSProcessAssertion* _processAssertion;
	NSString* _activeApplication;
	NSObject*<OS_dispatch_queue> _processAssertionForXcodeQueue;
	BKSProcessAssertion* _processAssertionForXcode;
	NSString* _plugInIdentifierForXcodeProcessAssertion;
	id _batteryStateObserver;
	NSObject*<OS_dispatch_queue> _remoteInterfaceProcessAssertionsQueue;
	NSMutableDictionary* _remoteInterfaceProcessAssertions;
	NSObject*<OS_dispatch_queue> _launchSockPuppetAppQueue;
	NSDate* _dateOfFirstUnlock;
	NSMutableDictionary* _extensionsDoingBackgroundGlanceUpdate;
	NSObject*<OS_dispatch_queue> _extensionsDoingBackgroundGlanceUpdateQueue;
	NSMutableDictionary* _lastExtensionKilledDates;
	NSObject*<OS_dispatch_queue> _lastExtensionKilledDatesQueue;
	unsigned _timingTest_IDSSendSize;
	double _timingTest_IDSReceiveTime;
	double _timingTest_IDSSendTime;

}

@property (assign) int appDBUpdateCounter;                                                                         //@synthesize appDBUpdateCounter=_appDBUpdateCounter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queueRemote;                                             //@synthesize queueRemote=_queueRemote - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dbUpdateQueue;                                           //@synthesize dbUpdateQueue=_dbUpdateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> gizmoApplicationsUpdateTimer;                           //@synthesize gizmoApplicationsUpdateTimer=_gizmoApplicationsUpdateTimer - In the implementation block
@property (retain) NSXPCListener * localListener;                                                                  //@synthesize localListener=_localListener - In the implementation block
@property (retain) NSMutableDictionary * localConnections;                                                         //@synthesize localConnections=_localConnections - In the implementation block
@property (assign) char paired;                                                                                    //@synthesize paired=_paired - In the implementation block
@property (nonatomic,retain) NRDevice * pairedDevice;                                                              //@synthesize pairedDevice=_pairedDevice - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> transactionQueue;                                        //@synthesize transactionQueue=_transactionQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingtransactions;                                        //@synthesize outstandingtransactions=_outstandingtransactions - In the implementation block
@property (assign,nonatomic) unsigned nextTransactionID;                                                           //@synthesize nextTransactionID=_nextTransactionID - In the implementation block
@property (nonatomic,retain) SPUsageTrack * usageTrack;                                                            //@synthesize usageTrack=_usageTrack - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dateOfFirstAttemptToLaunchGizmoAppsByBundleID;                  //@synthesize dateOfFirstAttemptToLaunchGizmoAppsByBundleID=_dateOfFirstAttemptToLaunchGizmoAppsByBundleID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processAssertionQueue;                                   //@synthesize processAssertionQueue=_processAssertionQueue - In the implementation block
@property (retain) BKSProcessAssertion * processAssertion;                                                         //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,retain) NSString * activeApplication;                                                         //@synthesize activeApplication=_activeApplication - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processAssertionForXcodeQueue;                           //@synthesize processAssertionForXcodeQueue=_processAssertionForXcodeQueue - In the implementation block
@property (retain) BKSProcessAssertion * processAssertionForXcode;                                                 //@synthesize processAssertionForXcode=_processAssertionForXcode - In the implementation block
@property (nonatomic,retain) NSString * plugInIdentifierForXcodeProcessAssertion;                                  //@synthesize plugInIdentifierForXcodeProcessAssertion=_plugInIdentifierForXcodeProcessAssertion - In the implementation block
@property (nonatomic,retain) id batteryStateObserver;                                                              //@synthesize batteryStateObserver=_batteryStateObserver - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> remoteInterfaceProcessAssertionsQueue;                   //@synthesize remoteInterfaceProcessAssertionsQueue=_remoteInterfaceProcessAssertionsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * remoteInterfaceProcessAssertions;                               //@synthesize remoteInterfaceProcessAssertions=_remoteInterfaceProcessAssertions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> launchSockPuppetAppQueue;                                //@synthesize launchSockPuppetAppQueue=_launchSockPuppetAppQueue - In the implementation block
@property (assign,nonatomic) char launchRequestIsOutstanding;                                                      //@synthesize launchRequestIsOutstanding=_launchRequestIsOutstanding - In the implementation block
@property (assign,nonatomic) char cancelOutstandingLaunchRequests;                                                 //@synthesize cancelOutstandingLaunchRequests=_cancelOutstandingLaunchRequests - In the implementation block
@property (nonatomic,retain) NSDate * dateOfFirstUnlock;                                                           //@synthesize dateOfFirstUnlock=_dateOfFirstUnlock - In the implementation block
@property (retain) NSMutableDictionary * extensionsDoingBackgroundGlanceUpdate;                                    //@synthesize extensionsDoingBackgroundGlanceUpdate=_extensionsDoingBackgroundGlanceUpdate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> extensionsDoingBackgroundGlanceUpdateQueue;              //@synthesize extensionsDoingBackgroundGlanceUpdateQueue=_extensionsDoingBackgroundGlanceUpdateQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastExtensionKilledDates;                                       //@synthesize lastExtensionKilledDates=_lastExtensionKilledDates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lastExtensionKilledDatesQueue;                           //@synthesize lastExtensionKilledDatesQueue=_lastExtensionKilledDatesQueue - In the implementation block
@property (assign,nonatomic) double timingTest_IDSReceiveTime;                                                     //@synthesize timingTest_IDSReceiveTime=_timingTest_IDSReceiveTime - In the implementation block
@property (assign,nonatomic) double timingTest_IDSSendTime;                                                        //@synthesize timingTest_IDSSendTime=_timingTest_IDSSendTime - In the implementation block
@property (assign,nonatomic) unsigned timingTest_IDSSendSize;                                                      //@synthesize timingTest_IDSSendSize=_timingTest_IDSSendSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUsageTrack:(SPUsageTrack *)arg1 ;
-(void)setLocalListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)localListener;
-(void)setLocalConnections:(NSMutableDictionary *)arg1 ;
-(void)setDateOfFirstUnlock:(NSDate *)arg1 ;
-(void)sendFirstUnlockStatusToGizmo;
-(void)syncApplications;
-(void)startAppDbUpdate;
-(void)updateInstalledWatchKitApplications:(id)arg1 forEvent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)nanoRegistryChanged:(id)arg1 ;
-(void)sendPlist:(id)arg1 timeOut:(double)arg2 allowInsecureTransport:(char)arg3 ;
-(void)syncStateWithGizmo;
-(void)registerNotifyGizmoBuildChange;
-(void)restartInterruptedInstallations;
-(void)updateWatchKitApplicationsIfNecessary;
-(void)sendPlist:(id)arg1 allowInsecureTransport:(char)arg2 ;
-(SPUsageTrack *)usageTrack;
-(void)_saveSendTimeAndSize:(unsigned)arg1 ;
-(void)cancelGizmoApplicationsUpdateTimer;
-(void)updateGizmoApplications;
-(char)_checkUnlockedSinceBoot;
-(char)_unlockedSinceBoot;
-(NSMutableDictionary *)localConnections;
-(void)sendProtobuf:(id)arg1 sender:(id)arg2 timeOut:(double)arg3 allowInsecureTransport:(char)arg4 ;
-(char)shouldKillExtensionOnError:(id)arg1 ;
-(void)setLastExtensionKilledDateForPluginIdentifier:(id)arg1 ;
-(void)clearLastResetDateForPluginIdentifier:(id)arg1 ;
-(NSMutableDictionary *)lastExtensionKilledDates;
-(NSObject*<OS_dispatch_queue>)queueRemote;
-(NSObject*<OS_dispatch_queue>)processAssertionForXcodeQueue;
-(NSString *)plugInIdentifierForXcodeProcessAssertion;
-(void)takeProcessAssertionForXcode:(id)arg1 ;
-(void)takeRemoteInterfaceProcessAssertionForPlugin:(id)arg1 ;
-(id)decodeOutData:(id)arg1 ;
-(void)sendToRemoteInterface:(id)arg1 call:(/*^block*/id)arg2 ;
-(id)decodeProtoData:(id)arg1 ;
-(id)applicationIdentifierFromXPCConnection:(id)arg1 ;
-(id)bundleIDFromApplicationID:(id)arg1 ;
-(void)notifyTestFlightApplicationInstalled:(id)arg1 ;
-(void)removeApplicationWithBundleID:(id)arg1 installer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)launchSockPuppetAppQueue;
-(void)_launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)launchRequestIsOutstanding;
-(char)cancelOutstandingLaunchRequests;
-(void)setLaunchRequestIsOutstanding:(char)arg1 ;
-(void)setCancelOutstandingLaunchRequests:(char)arg1 ;
-(NSMutableDictionary *)dateOfFirstAttemptToLaunchGizmoAppsByBundleID;
-(void)setDateOfFirstAttemptToLaunchGizmoAppsByBundleID:(NSMutableDictionary *)arg1 ;
-(void)setApplicationIDForXcodeProcessAssertion:(id)arg1 ;
-(void)releaseProcessAssertionForXcode;
-(void)sendAndTrackTransactionDict:(id)arg1 withCompletion:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)processAssertionQueue;
-(void)releaseProcessAssertion:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)remoteInterfaceProcessAssertionsQueue;
-(NSMutableDictionary *)remoteInterfaceProcessAssertions;
-(id)logStringArray:(id)arg1 ;
-(id)decodeInData:(id)arg1 ;
-(double)timingTest_IDSReceiveTime;
-(double)timingTest_IDSSendTime;
-(unsigned)timingTest_IDSSendSize;
-(void)sendProtoData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3 ;
-(void)handleIncomingProtoPlist:(id)arg1 ;
-(void)_saveReceiveTime;
-(id)appBundleIDFromPlist:(id)arg1 ;
-(void)handleIncomingPlist:(id)arg1 ;
-(char)isExtensionDoingBackgroundGlanceUpdate:(id)arg1 ;
-(void)setTimingTest_IDSSendTime:(double)arg1 ;
-(void)setTimingTest_IDSSendSize:(unsigned)arg1 ;
-(void)setTimingTest_IDSReceiveTime:(double)arg1 ;
-(void)handleIncomingData:(id)arg1 ;
-(id)logDictionary:(id)arg1 ;
-(void)_applicationActivated:(id)arg1 ;
-(void)_sendTextSizeToApplication:(id)arg1 onlyIfChanged:(char)arg2 ;
-(void)_applicationDeactivated:(id)arg1 ;
-(void)extensionDidBeginBackgroundGlanceUpdate:(id)arg1 ;
-(void)extensionDidEndBackgroundGlanceUpdate:(id)arg1 ;
-(void)sendData:(id)arg1 toApplication:(id)arg2 ;
-(id)transactionDictForID:(id)arg1 removeFromOutstanding:(char)arg2 ;
-(void)sendPreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 ;
-(void)notifyTestFlightProfilesChanged:(id)arg1 ;
-(void)sendiTunesMetadataForApplication:(id)arg1 ;
-(void)sendData:(id)arg1 toCompanionApplication:(id)arg2 fromIdentifier:(id)arg3 ;
-(char)_isApplicationViewControllerActivate:(id)arg1 ;
-(void)takeProcessAssertion:(id)arg1 ;
-(void)releaseRemoteInterfaceAssertionsForPluginIdentifer:(id)arg1 ;
-(void)setPlugInIdentifierForXcodeProcessAssertion:(NSString *)arg1 ;
-(id)batteryStateObserver;
-(void)setBatteryStateObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dbUpdateQueue;
-(int)appDBUpdateCounter;
-(void)setAppDBUpdateCounter:(int)arg1 ;
-(id)dbUpdatePathStateKeepAlivePath;
-(void)appDbUpdateCompleted;
-(void)installApplicationIfNeeded:(id)arg1 newGizmo:(char)arg2 ;
-(void)updateGizmoApplicationsWithCompletion:(/*^block*/id)arg1 ;
-(char)isAlwaysInstallMode;
-(void)handleBuildChangeFromBuild:(id)arg1 toBuild:(id)arg2 ;
-(unsigned)nextTransactionID;
-(void)setNextTransactionID:(unsigned)arg1 ;
-(NSMutableDictionary *)outstandingtransactions;
-(void)setOutstandingtransactions:(NSMutableDictionary *)arg1 ;
-(id)_textSizeChanged;
-(id)launchURLForProfileChanges:(id)arg1 ;
-(void)incomingData:(id)arg1 ;
-(void)logDataSent:(unsigned)arg1 application:(id)arg2 ;
-(void)incomingProtobuf:(id)arg1 ;
-(NSDate *)dateOfFirstUnlock;
-(void)startGizmoApplicationsUpdateTimer;
-(char)showUserNotificationWithTitle:(id)arg1 message:(id)arg2 ;
-(void)notifyGizmoContainerApplicationInstalled:(id)arg1 ;
-(void)setQueueRemote:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDbUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)gizmoApplicationsUpdateTimer;
-(void)setGizmoApplicationsUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setProcessAssertionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)activeApplication;
-(void)setActiveApplication:(NSString *)arg1 ;
-(void)setProcessAssertionForXcodeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BKSProcessAssertion *)processAssertionForXcode;
-(void)setProcessAssertionForXcode:(BKSProcessAssertion *)arg1 ;
-(void)setRemoteInterfaceProcessAssertionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRemoteInterfaceProcessAssertions:(NSMutableDictionary *)arg1 ;
-(void)setLaunchSockPuppetAppQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)extensionsDoingBackgroundGlanceUpdate;
-(void)setExtensionsDoingBackgroundGlanceUpdate:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)extensionsDoingBackgroundGlanceUpdateQueue;
-(void)setExtensionsDoingBackgroundGlanceUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLastExtensionKilledDates:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)lastExtensionKilledDatesQueue;
-(void)setLastExtensionKilledDatesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLogLevel:(id)arg1 ;
-(char)paired;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)run;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)_textSize;
-(void)sendCacheRequest:(id)arg1 identifier:(id)arg2 ;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 ;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)fetchNotificationForNotificationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTimingData:(id)arg1 timingMetaData:(id)arg2 ;
-(void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)remoteInterfaceDidDeactivate:(id)arg1 ;
-(void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2 ;
-(void)_setupSignalHandlers;
-(void)daemonManagerWillEndXPCTransaction;
-(void)fetchInstalledGlancesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchInstalledComplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)activeComplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)installAllApplicationsForProcessWithIdentifier:(id)arg1 ;
-(void)cancelPendingInstallations;
-(void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 installerIsTestFlight:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)installApplicationWithIdentifier:(id)arg1 installer:(id)arg2 withProvisioningProfiles:(id)arg3 profileNames:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeApplicationWithIdentifier:(id)arg1 installer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchInfoForApplicationWithContainingApplicationBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)launchSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)terminateSockPuppetAppForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getSockPuppetAppRunningStatusForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCompanionExtensionPIDForCompanionAppWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xcodeWillInstallSockPuppetAppWithCompanionAppIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showUserNotification:(int)arg1 applicationName:(id)arg2 ;
-(void)hideUserNotification;
-(void)wakeExtensionForWatchApp:(id)arg1 ;
-(void)installProvisioningProfileWithName:(id)arg1 profileData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeProvisioningProfileWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchProvisioningProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAlwaysInstall:(id)arg1 ;
-(void)getAlwaysInstallWithCompletion:(/*^block*/id)arg1 ;
-(NRDevice *)pairedDevice;
-(void)setPairedDevice:(NRDevice *)arg1 ;
-(char)connection:(id)arg1 hasEntitlement:(id)arg2 ;
-(void)fetchInstalledApplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(id)_setupSignal:(int)arg1 handler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)transactionQueue;
-(void)setTransactionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)isPaired;
-(void)setPaired:(char)arg1 ;
-(void)setProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(BKSProcessAssertion *)processAssertion;
-(char)unlockedSinceBoot;
@end

