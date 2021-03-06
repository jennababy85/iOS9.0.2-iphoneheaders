/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPRecordFieldDerivedField : PBCodable <NSCopying> {

	CKDPRecordFieldIdentifier* _aggregatedField;
	NSMutableArray* _aggregatedTypes;
	int _aggregationFunction;
	NSMutableArray* _filters;
	CKDPRecordFieldIdentifier* _groupByField;
	CKDPRecordFieldIdentifier* _identifier;
	NSMutableArray* _targetTypes;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * aggregatedTypes;                         //@synthesize aggregatedTypes=_aggregatedTypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * targetTypes;                             //@synthesize targetTypes=_targetTypes - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                                 //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) char hasAggregatedField; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * aggregatedField;              //@synthesize aggregatedField=_aggregatedField - In the implementation block
@property (nonatomic,readonly) char hasGroupByField; 
@property (nonatomic,retain) CKDPRecordFieldIdentifier * groupByField;                 //@synthesize groupByField=_groupByField - In the implementation block
@property (assign,nonatomic) char hasAggregationFunction; 
@property (assign,nonatomic) int aggregationFunction;                                  //@synthesize aggregationFunction=_aggregationFunction - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CKDPRecordFieldIdentifier *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)setIdentifier:(CKDPRecordFieldIdentifier *)arg1 ;
-(NSMutableArray *)filters;
-(id)dictionaryRepresentation;
-(void)addFilters:(id)arg1 ;
-(unsigned)filtersCount;
-(void)clearFilters;
-(id)filtersAtIndex:(unsigned)arg1 ;
-(void)addAggregatedTypes:(id)arg1 ;
-(void)addTargetTypes:(id)arg1 ;
-(unsigned)aggregatedTypesCount;
-(void)clearAggregatedTypes;
-(id)aggregatedTypesAtIndex:(unsigned)arg1 ;
-(unsigned)targetTypesCount;
-(void)clearTargetTypes;
-(id)targetTypesAtIndex:(unsigned)arg1 ;
-(void)setAggregatedField:(CKDPRecordFieldIdentifier *)arg1 ;
-(void)setGroupByField:(CKDPRecordFieldIdentifier *)arg1 ;
-(char)hasAggregatedField;
-(char)hasGroupByField;
-(int)aggregationFunction;
-(void)setAggregationFunction:(int)arg1 ;
-(void)setHasAggregationFunction:(char)arg1 ;
-(char)hasAggregationFunction;
-(NSMutableArray *)aggregatedTypes;
-(void)setAggregatedTypes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)targetTypes;
-(void)setTargetTypes:(NSMutableArray *)arg1 ;
-(CKDPRecordFieldIdentifier *)aggregatedField;
-(CKDPRecordFieldIdentifier *)groupByField;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasIdentifier;
-(char)readFrom:(id)arg1 ;
@end

