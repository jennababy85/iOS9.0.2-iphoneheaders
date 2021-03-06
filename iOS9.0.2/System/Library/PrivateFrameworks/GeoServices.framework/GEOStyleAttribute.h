/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOStyleAttribute : PBCodable <NSCopying> {

	unsigned _key;
	unsigned _value;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) char hasKey; 
@property (assign,nonatomic) unsigned key;                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasValue; 
@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)key;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(unsigned)arg1 ;
-(char)hasKey;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasKey:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)hasValue;
-(void)setHasValue:(char)arg1 ;
@end

