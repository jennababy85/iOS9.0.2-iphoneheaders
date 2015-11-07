/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>

@class NSString, PSSpecifier;

@interface SLFacebookRegistrationPasswordPrompt : SLFacebookRegistrationInfoPrompt {

	NSString* _password;
	NSString* _verify;
	PSSpecifier* _signUpButton;

}
-(void)_signUpTapped:(id)arg1 ;
-(char)isReadyToValidate;
-(void)updateRegistrationInfo;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(void)_setVerify:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_verifyWithSpecifier:(id)arg1 ;
-(id)specifiers;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)textFieldValueDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(char)validate;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
@end
