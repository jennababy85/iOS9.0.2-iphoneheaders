/*
* This header is generated by classdump-dyld 0.7
* on Sunday, October 25, 2015 at 6:40:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol SearchUITableRowCardSection <SearchUICardSection>
@property (nonatomic,copy,readonly) NSString * tableID; 
@property (nonatomic,readonly) id<SearchUITableAlignmentSchema> alignmentSchema; 
@property (nonatomic,readonly) unsigned rowType; 
@property (nonatomic,readonly) NSArray * values; 
@required
-(NSArray *)values;
-(NSString *)tableID;
-(id<SearchUITableAlignmentSchema>)alignmentSchema;
-(unsigned)rowType;

@end

