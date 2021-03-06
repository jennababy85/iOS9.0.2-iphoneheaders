/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UITriggerVC/UITriggerVC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CSLUIPBNumber : PBCodable <NSCopying> {

	double _doubleValue;
	long long _int64Value;
	float _floatValue;
	int _int32Value;
	char _boolValue;
	SCD_Struct_CS2 _has;

}

@property (assign,nonatomic) char hasInt32Value; 
@property (assign,nonatomic) int int32Value;                    //@synthesize int32Value=_int32Value - In the implementation block
@property (assign,nonatomic) char hasFloatValue; 
@property (assign,nonatomic) float floatValue;                  //@synthesize floatValue=_floatValue - In the implementation block
@property (assign,nonatomic) char hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) char hasBoolValue; 
@property (assign,nonatomic) char boolValue;                    //@synthesize boolValue=_boolValue - In the implementation block
@property (assign,nonatomic) char hasInt64Value; 
@property (assign,nonatomic) long long int64Value;              //@synthesize int64Value=_int64Value - In the implementation block
-(void)setFloatValue:(float)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)doubleValue;
-(char)boolValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)floatValue;
-(id)dictionaryRepresentation;
-(void)setBoolValue:(char)arg1 ;
-(void)setHasBoolValue:(char)arg1 ;
-(char)hasBoolValue;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(char)arg1 ;
-(char)hasDoubleValue;
-(char)readFrom:(id)arg1 ;
-(void)setInt32Value:(int)arg1 ;
-(void)setHasInt32Value:(char)arg1 ;
-(char)hasInt32Value;
-(void)setHasFloatValue:(char)arg1 ;
-(char)hasFloatValue;
-(void)setInt64Value:(long long)arg1 ;
-(void)setHasInt64Value:(char)arg1 ;
-(char)hasInt64Value;
-(int)int32Value;
-(long long)int64Value;
@end

