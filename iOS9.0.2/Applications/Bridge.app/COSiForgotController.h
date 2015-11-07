/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@protocol COSiForgotControllerDelegate;
@class RemoteUIController, UINavigationController, AASetupAssistantService, RUIStyle, NSString;

@interface COSiForgotController : NSObject <RemoteUIControllerDelegate> {

	char _canceled;
	id<COSiForgotControllerDelegate> _delegate;
	RemoteUIController* _remoteController;
	UINavigationController* _navigationController;
	AASetupAssistantService* _aaService;
	OpaqueCFHTTPCookieStorageRef _cookieStorage;
	RUIStyle* _remoteUIStyle;

}

@property (assign,nonatomic,__weak) id<COSiForgotControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RemoteUIController * remoteController;                         //@synthesize remoteController=_remoteController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                 //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) AASetupAssistantService * aaService;                           //@synthesize aaService=_aaService - In the implementation block
@property (assign,nonatomic) OpaqueCFHTTPCookieStorageRef cookieStorage;                    //@synthesize cookieStorage=_cookieStorage - In the implementation block
@property (nonatomic,retain) RUIStyle * remoteUIStyle;                                      //@synthesize remoteUIStyle=_remoteUIStyle - In the implementation block
@property (assign,nonatomic) char canceled;                                                 //@synthesize canceled=_canceled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addHeadersAndCookiesToRequest:(id)arg1 cookieStorage:(OpaqueCFHTTPCookieStorageRef)arg2 ;
-(void)loadAndPresent;
-(void)downloadSetupAssistantServiceURLConfiguration;
-(void)handleSetupAssistantConfigurationResponse:(id)arg1 ;
-(void)presentRemoteiForgotWithURL:(id)arg1 ;
-(void)displayConnectionErrorAlert;
-(void)dismissiForgot;
-(void)handleRequestCompletionWithSuccess:(char)arg1 error:(id)arg2 ;
-(void)setRemoteController:(RemoteUIController *)arg1 ;
-(AASetupAssistantService *)aaService;
-(void)setAaService:(AASetupAssistantService *)arg1 ;
-(OpaqueCFHTTPCookieStorageRef)cookieStorage;
-(char)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(char)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)setDelegate:(id<COSiForgotControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<COSiForgotControllerDelegate>)delegate;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)cancelPresentation;
-(RUIStyle *)remoteUIStyle;
-(void)setRemoteUIStyle:(RUIStyle *)arg1 ;
-(void)setCanceled:(char)arg1 ;
-(void)setCookieStorage:(OpaqueCFHTTPCookieStorageRef)arg1 ;
-(RemoteUIController *)remoteController;
-(char)canceled;
@end
