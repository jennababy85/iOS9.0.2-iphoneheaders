/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSArray;

@interface CKAnyPredicateValidator : CKPredicateValidatorInstance {

	NSArray* _validators;

}

@property (nonatomic,retain) NSArray * validators;              //@synthesize validators=_validators - In the implementation block
-(char)validate:(id)arg1 error:(id*)arg2 ;
-(void)setValidators:(NSArray *)arg1 ;
-(id)initWithValidators:(id)arg1 ;
-(NSArray *)validators;
-(id)CKPropertiesDescription;
@end
