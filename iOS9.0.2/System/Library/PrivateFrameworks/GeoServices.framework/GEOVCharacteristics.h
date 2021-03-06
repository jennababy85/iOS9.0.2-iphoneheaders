/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVCharacteristics : PBCodable <NSCopying> {

	NSMutableArray* _pointCharacteristics;

}

@property (nonatomic,retain) NSMutableArray * pointCharacteristics;              //@synthesize pointCharacteristics=_pointCharacteristics - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearPointCharacteristics;
-(void)setPointCharacteristics:(NSMutableArray *)arg1 ;
-(id)pointCharacteristicAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)pointCharacteristics;
-(void)addPointCharacteristic:(id)arg1 ;
-(unsigned)pointCharacteristicsCount;
-(char)readFrom:(id)arg1 ;
@end

