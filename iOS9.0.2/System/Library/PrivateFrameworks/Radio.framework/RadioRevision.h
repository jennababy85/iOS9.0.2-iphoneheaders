/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface RadioRevision : NSManagedObject

@property (assign,nonatomic) long long revisionID; 
@property (assign,nonatomic) int revisionType; 
@property (assign,nonatomic) long long stationID; 
-(void)setStationID:(long long)arg1 ;
-(long long)stationID;
-(void)setRevisionID:(long long)arg1 ;
-(void)setRevisionType:(int)arg1 ;
-(int)revisionType;
-(long long)revisionID;
@end
