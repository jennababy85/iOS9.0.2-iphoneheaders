/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAStockSearchCompleted : SABaseCommand <SAServerBoundCommand> {

	NSArray* _stockList;

}

@property (nonatomic,copy) NSArray * stockList;                     //@synthesize stockList=_stockList - In the implementation block
@property (nonatomic,copy) NSArray * stockReferences; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)stockReferences;
-(void)setStockReferences:(NSArray *)arg1 ;
-(NSArray *)stockList;
-(void)setStockList:(NSArray *)arg1 ;
@end

