/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class NSString;

@interface PLAccountingNodeEntry : PLEntry

@property (nonatomic,readonly) NSString * name; 
+(void)load;
+(id)entryKey;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)initWithRootNodeID:(id)arg1 ;
-(id)initEntryWithRawData:(id)arg1 ;
@end
