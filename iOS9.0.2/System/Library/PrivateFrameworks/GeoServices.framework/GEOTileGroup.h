/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileGroup : PBCodable <NSCopying> {

	SCD_Struct_GE88* _hybridUnavailableRegions;
	unsigned _hybridUnavailableRegionsCount;
	unsigned _hybridUnavailableRegionsSpace;
	SCD_Struct_GE104* _regionalResourceIndexs;
	unsigned _regionalResourceIndexsCount;
	unsigned _regionalResourceIndexsSpace;
	SCD_Struct_GE52* _attributionIndexs;
	SCD_Struct_GE52* _fontIndexs;
	SCD_Struct_GE52* _iconIndexs;
	SCD_Struct_GE52* _styleSheetIndexs;
	SCD_Struct_GE52* _textureIndexs;
	SCD_Struct_GE52* _xmlIndexs;
	NSRange* _tileSets;
	unsigned _tileSetsCount;
	unsigned _tileSetsSpace;
	unsigned _attributionBadgeIndex;
	unsigned _identifier;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) unsigned identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned tileSetsCount; 
@property (nonatomic,readonly) NSRange* tileSets; 
@property (nonatomic,readonly) unsigned styleSheetIndexsCount; 
@property (nonatomic,readonly) unsigned* styleSheetIndexs; 
@property (nonatomic,readonly) unsigned textureIndexsCount; 
@property (nonatomic,readonly) unsigned* textureIndexs; 
@property (nonatomic,readonly) unsigned fontIndexsCount; 
@property (nonatomic,readonly) unsigned* fontIndexs; 
@property (nonatomic,readonly) unsigned iconIndexsCount; 
@property (nonatomic,readonly) unsigned* iconIndexs; 
@property (nonatomic,readonly) unsigned regionalResourceIndexsCount; 
@property (nonatomic,readonly) SCD_Struct_GE104* regionalResourceIndexs; 
@property (nonatomic,readonly) unsigned xmlIndexsCount; 
@property (nonatomic,readonly) unsigned* xmlIndexs; 
@property (assign,nonatomic) char hasAttributionBadgeIndex; 
@property (assign,nonatomic) unsigned attributionBadgeIndex;                           //@synthesize attributionBadgeIndex=_attributionBadgeIndex - In the implementation block
@property (nonatomic,readonly) unsigned attributionIndexsCount; 
@property (nonatomic,readonly) unsigned* attributionIndexs; 
@property (nonatomic,readonly) unsigned hybridUnavailableRegionsCount; 
@property (nonatomic,readonly) SCD_Struct_GE88* hybridUnavailableRegions; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSRange*)tileSets;
-(unsigned)tileSetsCount;
-(void)addTileSet:(NSRange)arg1 ;
-(NSRange)tileSetAtIndex:(unsigned)arg1 ;
-(void)clearTileSets;
-(void)setXmlIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned)xmlIndexsCount;
-(unsigned)attributionBadgeIndex;
-(unsigned*)iconIndexs;
-(void)clearTextureIndexs;
-(unsigned*)styleSheetIndexs;
-(void)addIconIndex:(unsigned)arg1 ;
-(void)clearIconIndexs;
-(void)addTextureIndex:(unsigned)arg1 ;
-(void)setHybridUnavailableRegions:(SCD_Struct_GE88*)arg1 count:(unsigned)arg2 ;
-(void)setFontIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned*)xmlIndexs;
-(void)clearRegionalResourceIndexs;
-(unsigned)xmlIndexAtIndex:(unsigned)arg1 ;
-(unsigned*)fontIndexs;
-(unsigned)styleSheetIndexsCount;
-(unsigned)styleSheetIndexAtIndex:(unsigned)arg1 ;
-(unsigned)iconIndexAtIndex:(unsigned)arg1 ;
-(unsigned)iconIndexsCount;
-(void)setTileSets:(NSRange*)arg1 count:(unsigned)arg2 ;
-(void)setRegionalResourceIndexs:(SCD_Struct_GE104*)arg1 count:(unsigned)arg2 ;
-(void)setTextureIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)clearStyleSheetIndexs;
-(unsigned*)textureIndexs;
-(unsigned*)attributionIndexs;
-(void)clearHybridUnavailableRegions;
-(void)clearAttributionIndexs;
-(void)setAttributionIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)addStyleSheetIndex:(unsigned)arg1 ;
-(SCD_Struct_GE88)hybridUnavailableRegionAtIndex:(unsigned)arg1 ;
-(void)addAttributionIndex:(unsigned)arg1 ;
-(unsigned)fontIndexsCount;
-(char)hasAttributionBadgeIndex;
-(void)addRegionalResourceIndex:(SCD_Struct_GE104)arg1 ;
-(SCD_Struct_GE88*)hybridUnavailableRegions;
-(unsigned)hybridUnavailableRegionsCount;
-(SCD_Struct_GE104)regionalResourceIndexAtIndex:(unsigned)arg1 ;
-(unsigned)textureIndexAtIndex:(unsigned)arg1 ;
-(SCD_Struct_GE104*)regionalResourceIndexs;
-(unsigned)fontIndexAtIndex:(unsigned)arg1 ;
-(void)setStyleSheetIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned)textureIndexsCount;
-(unsigned)attributionIndexAtIndex:(unsigned)arg1 ;
-(unsigned)attributionIndexsCount;
-(void)setHasAttributionBadgeIndex:(char)arg1 ;
-(void)addFontIndex:(unsigned)arg1 ;
-(void)setAttributionBadgeIndex:(unsigned)arg1 ;
-(void)setIconIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)addXmlIndex:(unsigned)arg1 ;
-(void)addHybridUnavailableRegion:(SCD_Struct_GE88)arg1 ;
-(void)clearFontIndexs;
-(void)clearXmlIndexs;
-(unsigned)regionalResourceIndexsCount;
-(char)readFrom:(id)arg1 ;
@end

