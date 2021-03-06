/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNiOSAccountPredicate.h>

@class NSString;

@interface CNiOSABAccountForExternalIdentifierPredicate : CNPredicate <CNiOSAccountPredicate> {

	NSString* _externalIdentifier;

}

@property (nonatomic,copy,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CFArrayRef)cn_copyAccountsInAddressBook:(void*)arg1 error:(_CFError*)arg2 ;
-(id)initWithAccountExternalIdentifier:(id)arg1 ;
-(void)dealloc;
-(NSString *)externalIdentifier;
@end

