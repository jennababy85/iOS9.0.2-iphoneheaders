/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingSnippet.h>

@class NSNumber;

@interface SASettingBoolSnippet : SASettingSnippet

@property (assign,nonatomic) char toggle; 
@property (nonatomic,copy) NSNumber * value; 
+(id)boolSnippet;
+(id)boolSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setToggle:(char)arg1 ;
-(char)toggle;
@end
