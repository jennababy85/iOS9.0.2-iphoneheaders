/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@class NSString, CNObservable;

@interface CNAutocompleteObservable : CNObservable {

	NSString* _debugDescription;
	CNObservable* _observable;

}

@property (nonatomic,retain) NSString * debugDescription;              //@synthesize debugDescription=_debugDescription - In the implementation block
@property (nonatomic,retain) CNObservable * observable;                //@synthesize observable=_observable - In the implementation block
-(id)subscribe:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)debugDescription;
-(void)setDebugDescription:(NSString *)arg1 ;
-(CNObservable *)observable;
-(void)setObservable:(CNObservable *)arg1 ;
@end

