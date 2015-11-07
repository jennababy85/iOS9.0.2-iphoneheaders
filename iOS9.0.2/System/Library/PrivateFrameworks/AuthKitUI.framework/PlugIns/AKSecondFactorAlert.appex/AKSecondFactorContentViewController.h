/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/PlugIns/AKSecondFactorAlert.appex/AKSecondFactorAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBSUIRemoteAlertItemContentViewController.h>

@class AKCodeGenerationView, AKAppleIDAuthenticationContext, AKBasicLoginContentViewController;

@interface AKSecondFactorContentViewController : SBSUIRemoteAlertItemContentViewController {

	AKCodeGenerationView* _codeGeneratorView;
	AKAppleIDAuthenticationContext* _authenticationContext;
	AKBasicLoginContentViewController* _titleHeaderViewController;

}

@property (nonatomic,retain) AKCodeGenerationView * codeGeneratorView;                                   //@synthesize codeGeneratorView=_codeGeneratorView - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authenticationContext;                     //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) AKBasicLoginContentViewController * titleHeaderViewController;              //@synthesize titleHeaderViewController=_titleHeaderViewController - In the implementation block
+(void)initialize;
-(void)loadView;
-(void)_configureTitleHeaderView;
-(void)_configureCodeGenView;
-(AKCodeGenerationView *)codeGeneratorView;
-(void)setCodeGeneratorView:(AKCodeGenerationView *)arg1 ;
-(AKBasicLoginContentViewController *)titleHeaderViewController;
-(void)setTitleHeaderViewController:(AKBasicLoginContentViewController *)arg1 ;
-(void)setAuthenticationContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(AKAppleIDAuthenticationContext *)authenticationContext;
@end
