/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOStructuredAddress, NSString, NSMutableArray, GEOLatLng;

@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying> {

	unsigned long long _muid;
	int _addressGeocodeAccuracyHint;
	GEOStructuredAddress* _addressHint;
	NSString* _externalItemId;
	NSMutableArray* _formattedAddressLineHints;
	GEOLatLng* _locationHint;
	NSString* _placeNameHint;
	int _placeTypeHint;
	int _resultProviderId;
	NSString* _vendorId;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                                    //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (assign,nonatomic) char hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                                 //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) char hasVendorId; 
@property (nonatomic,retain) NSString * vendorId;                                     //@synthesize vendorId=_vendorId - In the implementation block
@property (nonatomic,readonly) char hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId;                               //@synthesize externalItemId=_externalItemId - In the implementation block
@property (nonatomic,readonly) char hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint;                                //@synthesize locationHint=_locationHint - In the implementation block
@property (nonatomic,readonly) char hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint;                      //@synthesize addressHint=_addressHint - In the implementation block
@property (nonatomic,readonly) char hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint;                                //@synthesize placeNameHint=_placeNameHint - In the implementation block
@property (nonatomic,retain) NSMutableArray * formattedAddressLineHints;              //@synthesize formattedAddressLineHints=_formattedAddressLineHints - In the implementation block
@property (assign,nonatomic) char hasPlaceTypeHint; 
@property (assign,nonatomic) int placeTypeHint;                                       //@synthesize placeTypeHint=_placeTypeHint - In the implementation block
@property (assign,nonatomic) char hasAddressGeocodeAccuracyHint; 
@property (assign,nonatomic) int addressGeocodeAccuracyHint;                          //@synthesize addressGeocodeAccuracyHint=_addressGeocodeAccuracyHint - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(char)arg1 ;
-(unsigned long long)muid;
-(char)hasMuid;
-(char)hasResultProviderId;
-(void)setResultProviderId:(int)arg1 ;
-(int)resultProviderId;
-(void)setHasResultProviderId:(char)arg1 ;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(void)setPlaceTypeHint:(int)arg1 ;
-(void)setHasAddressGeocodeAccuracyHint:(char)arg1 ;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(void)clearFormattedAddressLineHints;
-(char)hasPlaceNameHint;
-(NSString *)placeNameHint;
-(void)setHasPlaceTypeHint:(char)arg1 ;
-(char)hasAddressGeocodeAccuracyHint;
-(GEOStructuredAddress *)addressHint;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(id)formattedAddressLineHintAtIndex:(unsigned)arg1 ;
-(char)hasPlaceTypeHint;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(unsigned)formattedAddressLineHintsCount;
-(GEOLatLng *)locationHint;
-(char)hasAddressHint;
-(void)setAddressGeocodeAccuracyHint:(int)arg1 ;
-(int)placeTypeHint;
-(NSMutableArray *)formattedAddressLineHints;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(char)hasLocationHint;
-(int)addressGeocodeAccuracyHint;
-(void)setVendorId:(NSString *)arg1 ;
-(NSString *)externalItemId;
-(char)hasVendorId;
-(void)setExternalItemId:(NSString *)arg1 ;
-(NSString *)vendorId;
-(char)hasExternalItemId;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 ;
-(id)initWithMuid:(unsigned long long)arg1 locationHint:(SCD_Struct_GE16)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 contentProvider:(id)arg3 ;
-(char)readFrom:(id)arg1 ;
@end
