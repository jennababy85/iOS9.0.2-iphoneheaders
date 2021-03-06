/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPLocationBound, CKDPLocationCoordinate;

@interface CKDPLocation : PBCodable <NSCopying> {

	CKDPLocationBound* _bounds;
	CKDPLocationCoordinate* _coordinate;

}

@property (nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,retain) CKDPLocationCoordinate * coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) char hasBounds; 
@property (nonatomic,retain) CKDPLocationBound * bounds;                       //@synthesize bounds=_bounds - In the implementation block
-(void)setCoordinate:(CKDPLocationCoordinate *)arg1 ;
-(CKDPLocationCoordinate *)coordinate;
-(CKDPLocationBound *)bounds;
-(void)setBounds:(CKDPLocationBound *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasCoordinate;
-(char)hasBounds;
-(char)readFrom:(id)arg1 ;
@end

