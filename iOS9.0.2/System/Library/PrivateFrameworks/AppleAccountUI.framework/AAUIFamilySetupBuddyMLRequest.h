/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class SSAccount, NSString;

@interface AAUIFamilySetupBuddyMLRequest : AAFamilyRequest {

	SSAccount* _iTunesAccount;
	NSString* _inviteCode;

}

@property (setter=setiTunesAccount:,nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (nonatomic,copy) NSString * inviteCode;                                             //@synthesize inviteCode=_inviteCode - In the implementation block
-(id)urlString;
-(void)setiTunesAccount:(id)arg1 ;
-(char)isUserInitiated;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
-(SSAccount *)iTunesAccount;
-(id)urlRequest;
@end
