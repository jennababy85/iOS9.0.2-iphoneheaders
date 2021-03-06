/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/PlugIns/ExternalAccessoryWACUIBits.bundle/ExternalAccessoryWACUIBits
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSCopying;
@class NSSet, EAWiFiUnconfiguredAccessory, NSExtension, WACUIRemoteViewController, UIViewController, NSMutableSet;

@interface EAWiFiUnconfiguredAccessoryBrowserManager : NSObject {

	char __debugLog;
	char _isConfiguring;
	NSSet* _unconfiguredAccessories;
	EAWiFiUnconfiguredAccessory* _accessoryBeingConfigured;
	NSExtension* _extension;
	WACUIRemoteViewController* _remoteViewController;
	UIViewController* _targetViewController;
	id<NSCopying> _currentRequestIdentifier;
	NSMutableSet* __accessories;
	int _currentBrowserState;

}

@property (copy,readonly) NSSet * unconfiguredAccessories;                              //@synthesize unconfiguredAccessories=_unconfiguredAccessories - In the implementation block
@property (retain) EAWiFiUnconfiguredAccessory * accessoryBeingConfigured;              //@synthesize accessoryBeingConfigured=_accessoryBeingConfigured - In the implementation block
@property (retain) NSExtension * extension;                                             //@synthesize extension=_extension - In the implementation block
@property (retain) WACUIRemoteViewController * remoteViewController;                    //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (__weak) UIViewController * targetViewController;                             //@synthesize targetViewController=_targetViewController - In the implementation block
@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;                    //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (retain) NSMutableSet * _accessories;                                         //@synthesize _accessories=__accessories - In the implementation block
@property (assign) int currentBrowserState;                                             //@synthesize currentBrowserState=_currentBrowserState - In the implementation block
@property (assign) char isConfiguring;                                                  //@synthesize isConfiguring=_isConfiguring - In the implementation block
+(id)sharedInstance;
-(void)_signalPresentationComplete;
-(void)dismissWithStatus:(long)arg1 ;
-(char)isConfiguring;
-(void)didFindNewUnconfiguredAccessories:(id)arg1 andRemovedUnconfiguredAccessories:(id)arg2 ;
-(void)wifiDidShutdown;
-(void)purgeAccessoriesSet;
-(int)currentBrowserState;
-(void)cancelActiveConfiguration;
-(void)setIsConfiguring:(char)arg1 ;
-(void)setAccessoryBeingConfigured:(EAWiFiUnconfiguredAccessory *)arg1 ;
-(void)setTargetViewController:(UIViewController *)arg1 ;
-(void)setCurrentBrowserState:(int)arg1 ;
-(EAWiFiUnconfiguredAccessory *)accessoryBeingConfigured;
-(NSMutableSet *)_accessories;
-(void)set_accessories:(NSMutableSet *)arg1 ;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)currentRequestIdentifier;
-(void)stopSearchingForUnconfiguredAccessories;
-(void)startSearchingForUnconfiguredAccessories;
-(void)configureAccessory:(id)arg1 withConfigurationUIOnViewController:(id)arg2 ;
-(NSSet *)unconfiguredAccessories;
-(id)init;
-(WACUIRemoteViewController *)remoteViewController;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setRemoteViewController:(WACUIRemoteViewController *)arg1 ;
-(UIViewController *)targetViewController;
-(void)setup;
-(void)updateState:(int)arg1 ;
@end

