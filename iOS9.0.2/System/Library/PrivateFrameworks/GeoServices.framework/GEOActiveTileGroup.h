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

@class NSString, NSMutableArray, GEOVersionManifest;

@interface GEOActiveTileGroup : PBCodable <NSCopying> {

	SCD_Struct_GE88* _hybridUnavailableRegions;
	unsigned _hybridUnavailableRegionsCount;
	unsigned _hybridUnavailableRegionsSpace;
	NSString* _abExperimentURL;
	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSMutableArray* _announcementsSupportedLanguages;
	NSString* _announcementsURL;
	NSMutableArray* _attributions;
	NSString* _autocompleteURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _businessPortalBaseURL;
	NSString* _directionsURL;
	NSString* _dispatcherURL;
	NSString* _etaURL;
	NSMutableArray* _fontChecksums;
	NSMutableArray* _fonts;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _identifier;
	NSMutableArray* _locationShiftEnabledRegions;
	NSString* _locationShiftURL;
	unsigned _locationShiftVersion;
	NSString* _logMessageUsageURL;
	NSString* _mapMatchURL;
	NSString* _polyLocationShiftURL;
	NSString* _problemCategoriesURL;
	NSString* _problemOptInURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSMutableArray* _regionalResourceRegions;
	NSMutableArray* _regionalResourceTiles;
	NSString* _regionalResourcesURL;
	NSString* _releaseInfo;
	NSMutableArray* _resources;
	NSString* _resourcesURL;
	NSString* _reverseGeocoderVersionsURL;
	NSString* _searchAttributionManifestURL;
	NSString* _simpleETAURL;
	NSMutableArray* _styleSheetChecksums;
	NSMutableArray* _styleSheets;
	NSMutableArray* _textureChecksums;
	NSMutableArray* _textures;
	NSMutableArray* _tileSets;
	NSString* _uniqueIdentifier;
	NSString* _usageURL;
	GEOVersionManifest* _versionManifest;
	NSMutableArray* _xmlChecksums;
	NSMutableArray* _xmls;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) unsigned identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileSets;                                     //@synthesize tileSets=_tileSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * resources;                                    //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) char hasUniqueIdentifier; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                                 //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResourceTiles;                        //@synthesize regionalResourceTiles=_regionalResourceTiles - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResourceRegions;                      //@synthesize regionalResourceRegions=_regionalResourceRegions - In the implementation block
@property (nonatomic,readonly) char hasRegionalResourcesURL; 
@property (nonatomic,retain) NSString * regionalResourcesURL;                               //@synthesize regionalResourcesURL=_regionalResourcesURL - In the implementation block
@property (nonatomic,readonly) char hasSearchAttributionManifestURL; 
@property (nonatomic,retain) NSString * searchAttributionManifestURL;                       //@synthesize searchAttributionManifestURL=_searchAttributionManifestURL - In the implementation block
@property (nonatomic,readonly) char hasAutocompleteURL; 
@property (nonatomic,retain) NSString * autocompleteURL;                                    //@synthesize autocompleteURL=_autocompleteURL - In the implementation block
@property (nonatomic,readonly) char hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL;                                      //@synthesize directionsURL=_directionsURL - In the implementation block
@property (nonatomic,readonly) char hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL;                                             //@synthesize etaURL=_etaURL - In the implementation block
@property (nonatomic,readonly) char hasLocationShiftURL; 
@property (nonatomic,retain) NSString * locationShiftURL;                                   //@synthesize locationShiftURL=_locationShiftURL - In the implementation block
@property (nonatomic,readonly) char hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL;                            //@synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) char hasReleaseInfo; 
@property (nonatomic,retain) NSString * releaseInfo;                                        //@synthesize releaseInfo=_releaseInfo - In the implementation block
@property (nonatomic,readonly) char hasMapMatchURL; 
@property (nonatomic,retain) NSString * mapMatchURL;                                        //@synthesize mapMatchURL=_mapMatchURL - In the implementation block
@property (nonatomic,readonly) char hasResourcesURL; 
@property (nonatomic,retain) NSString * resourcesURL;                                       //@synthesize resourcesURL=_resourcesURL - In the implementation block
@property (nonatomic,readonly) char hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL;                                       //@synthesize simpleETAURL=_simpleETAURL - In the implementation block
@property (nonatomic,readonly) char hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL;                           //@synthesize addressCorrectionInitURL=_addressCorrectionInitURL - In the implementation block
@property (nonatomic,readonly) char hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL;                         //@synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL - In the implementation block
@property (nonatomic,readonly) char hasPolyLocationShiftURL; 
@property (nonatomic,retain) NSString * polyLocationShiftURL;                               //@synthesize polyLocationShiftURL=_polyLocationShiftURL - In the implementation block
@property (nonatomic,readonly) char hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL;                               //@synthesize problemSubmissionURL=_problemSubmissionURL - In the implementation block
@property (nonatomic,readonly) char hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL;                                   //@synthesize problemStatusURL=_problemStatusURL - In the implementation block
@property (nonatomic,readonly) char hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) NSString * reverseGeocoderVersionsURL;                         //@synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL - In the implementation block
@property (nonatomic,readonly) char hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL;                               //@synthesize problemCategoriesURL=_problemCategoriesURL - In the implementation block
@property (nonatomic,readonly) char hasUsageURL; 
@property (nonatomic,retain) NSString * usageURL;                                           //@synthesize usageURL=_usageURL - In the implementation block
@property (nonatomic,readonly) char hasAnnouncementsURL; 
@property (nonatomic,retain) NSString * announcementsURL;                                   //@synthesize announcementsURL=_announcementsURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * announcementsSupportedLanguages;              //@synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages - In the implementation block
@property (nonatomic,readonly) char hasDispatcherURL; 
@property (nonatomic,retain) NSString * dispatcherURL;                                      //@synthesize dispatcherURL=_dispatcherURL - In the implementation block
@property (nonatomic,readonly) char hasProblemOptInURL; 
@property (nonatomic,retain) NSString * problemOptInURL;                                    //@synthesize problemOptInURL=_problemOptInURL - In the implementation block
@property (nonatomic,readonly) char hasVersionManifest; 
@property (nonatomic,retain) GEOVersionManifest * versionManifest;                          //@synthesize versionManifest=_versionManifest - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheets;                                  //@synthesize styleSheets=_styleSheets - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheetChecksums;                          //@synthesize styleSheetChecksums=_styleSheetChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * textures;                                     //@synthesize textures=_textures - In the implementation block
@property (nonatomic,retain) NSMutableArray * textureChecksums;                             //@synthesize textureChecksums=_textureChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * fonts;                                        //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,retain) NSMutableArray * fontChecksums;                                //@synthesize fontChecksums=_fontChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                                        //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                                //@synthesize iconChecksums=_iconChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmls;                                         //@synthesize xmls=_xmls - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmlChecksums;                                 //@synthesize xmlChecksums=_xmlChecksums - In the implementation block
@property (nonatomic,readonly) char hasAbExperimentURL; 
@property (nonatomic,retain) NSString * abExperimentURL;                                    //@synthesize abExperimentURL=_abExperimentURL - In the implementation block
@property (nonatomic,readonly) char hasBusinessPortalBaseURL; 
@property (nonatomic,retain) NSString * businessPortalBaseURL;                              //@synthesize businessPortalBaseURL=_businessPortalBaseURL - In the implementation block
@property (nonatomic,readonly) char hasLogMessageUsageURL; 
@property (nonatomic,retain) NSString * logMessageUsageURL;                                 //@synthesize logMessageUsageURL=_logMessageUsageURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationShiftEnabledRegions;                  //@synthesize locationShiftEnabledRegions=_locationShiftEnabledRegions - In the implementation block
@property (assign,nonatomic) char hasLocationShiftVersion; 
@property (assign,nonatomic) unsigned locationShiftVersion;                                 //@synthesize locationShiftVersion=_locationShiftVersion - In the implementation block
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
-(NSString *)uniqueIdentifier;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)icons;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(void)clearAttributions;
-(unsigned)attributionsCount;
-(id)attributionAtIndex:(unsigned)arg1 ;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributions;
-(void)setTileSets:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tileSets;
-(unsigned)tileSetsCount;
-(void)addTileSet:(id)arg1 ;
-(id)tileSetAtIndex:(unsigned)arg1 ;
-(void)clearTileSets;
-(NSString *)batchReverseGeocoderURL;
-(id)iconAtIndex:(unsigned)arg1 ;
-(void)clearIcons;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(NSMutableArray *)iconChecksums;
-(void)setResourcesURL:(NSString *)arg1 ;
-(char)hasAbExperimentURL;
-(void)clearIconChecksums;
-(NSMutableArray *)locationShiftEnabledRegions;
-(unsigned)locationShiftEnabledRegionsCount;
-(void)setReverseGeocoderVersionsURL:(NSString *)arg1 ;
-(id)textureChecksumAtIndex:(unsigned)arg1 ;
-(char)hasReleaseInfo;
-(NSMutableArray *)xmlChecksums;
-(char)hasBusinessPortalBaseURL;
-(NSMutableArray *)fontChecksums;
-(char)hasLocationShiftURL;
-(void)setFontChecksums:(NSMutableArray *)arg1 ;
-(NSMutableArray *)xmls;
-(char)hasEtaURL;
-(void)setXmls:(NSMutableArray *)arg1 ;
-(NSString *)logMessageUsageURL;
-(char)hasLogMessageUsageURL;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(NSString *)businessPortalBaseURL;
-(NSMutableArray *)textureChecksums;
-(char)hasDispatcherURL;
-(void)clearStyleSheets;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(void)clearLocationShiftEnabledRegions;
-(unsigned)iconChecksumsCount;
-(char)hasSimpleETAURL;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(char)hasMapMatchURL;
-(char)hasProblemOptInURL;
-(void)addIconChecksum:(id)arg1 ;
-(unsigned)fontsCount;
-(NSString *)abExperimentURL;
-(NSMutableArray *)styleSheetChecksums;
-(char)hasBatchReverseGeocoderURL;
-(void)addIcon:(id)arg1 ;
-(void)setTextureChecksums:(NSMutableArray *)arg1 ;
-(GEOVersionManifest *)versionManifest;
-(char)hasVersionManifest;
-(void)setAbExperimentURL:(NSString *)arg1 ;
-(id)styleSheetAtIndex:(unsigned)arg1 ;
-(unsigned)fontChecksumsCount;
-(NSString *)problemStatusURL;
-(id)styleSheetChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)announcementsSupportedLanguagesCount;
-(void)setUsageURL:(NSString *)arg1 ;
-(NSString *)resourcesURL;
-(void)addStyleSheet:(id)arg1 ;
-(NSString *)polyLocationShiftURL;
-(void)setXmlChecksums:(NSMutableArray *)arg1 ;
-(void)setHasLocationShiftVersion:(char)arg1 ;
-(NSString *)searchAttributionManifestURL;
-(void)setEtaURL:(NSString *)arg1 ;
-(void)addLocationShiftEnabledRegion:(id)arg1 ;
-(NSString *)problemSubmissionURL;
-(void)addXml:(id)arg1 ;
-(void)addFontChecksum:(id)arg1 ;
-(char)hasAddressCorrectionInitURL;
-(void)setVersionManifest:(GEOVersionManifest *)arg1 ;
-(unsigned)iconsCount;
-(id)xmlChecksumAtIndex:(unsigned)arg1 ;
-(NSString *)addressCorrectionUpdateURL;
-(void)setStyleSheets:(NSMutableArray *)arg1 ;
-(void)clearAnnouncementsSupportedLanguages;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(void)clearFontChecksums;
-(id)textureAtIndex:(unsigned)arg1 ;
-(id)xmlAtIndex:(unsigned)arg1 ;
-(unsigned)locationShiftVersion;
-(void)setLocationShiftURL:(NSString *)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(NSString *)addressCorrectionInitURL;
-(void)setLocationShiftVersion:(unsigned)arg1 ;
-(void)setTextures:(NSMutableArray *)arg1 ;
-(NSString *)directionsURL;
-(unsigned)textureChecksumsCount;
-(char)hasProblemSubmissionURL;
-(id)locationShiftEnabledRegionAtIndex:(unsigned)arg1 ;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(char)hasPolyLocationShiftURL;
-(void)addTexture:(id)arg1 ;
-(NSString *)etaURL;
-(void)clearXmls;
-(void)clearTextures;
-(NSString *)usageURL;
-(void)setReleaseInfo:(NSString *)arg1 ;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(void)addTextureChecksum:(id)arg1 ;
-(void)setLogMessageUsageURL:(NSString *)arg1 ;
-(char)hasAddressCorrectionUpdateURL;
-(void)addXmlChecksum:(id)arg1 ;
-(char)hasLocationShiftVersion;
-(NSString *)problemCategoriesURL;
-(char)hasResourcesURL;
-(void)clearTextureChecksums;
-(char)hasProblemCategoriesURL;
-(void)setFonts:(NSMutableArray *)arg1 ;
-(NSString *)autocompleteURL;
-(id)iconChecksumAtIndex:(unsigned)arg1 ;
-(char)hasReverseGeocoderVersionsURL;
-(void)setStyleSheetChecksums:(NSMutableArray *)arg1 ;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(char)hasProblemStatusURL;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(NSString *)reverseGeocoderVersionsURL;
-(char)hasAutocompleteURL;
-(unsigned)styleSheetChecksumsCount;
-(NSString *)problemOptInURL;
-(NSString *)mapMatchURL;
-(unsigned)styleSheetsCount;
-(void)addStyleSheetChecksum:(id)arg1 ;
-(NSMutableArray *)styleSheets;
-(id)fontChecksumAtIndex:(unsigned)arg1 ;
-(id)announcementsSupportedLanguagesAtIndex:(unsigned)arg1 ;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(void)clearXmlChecksums;
-(NSString *)simpleETAURL;
-(void)setMapMatchURL:(NSString *)arg1 ;
-(void)clearFonts;
-(char)hasSearchAttributionManifestURL;
-(char)hasUsageURL;
-(NSString *)dispatcherURL;
-(NSMutableArray *)textures;
-(void)setSearchAttributionManifestURL:(NSString *)arg1 ;
-(void)clearStyleSheetChecksums;
-(char)hasDirectionsURL;
-(NSString *)locationShiftURL;
-(NSMutableArray *)announcementsSupportedLanguages;
-(void)setLocationShiftEnabledRegions:(NSMutableArray *)arg1 ;
-(void)addAnnouncementsSupportedLanguages:(id)arg1 ;
-(void)setPolyLocationShiftURL:(NSString *)arg1 ;
-(void)addFont:(id)arg1 ;
-(unsigned)xmlChecksumsCount;
-(NSString *)announcementsURL;
-(unsigned)xmlsCount;
-(void)setAutocompleteURL:(NSString *)arg1 ;
-(unsigned)texturesCount;
-(void)setAnnouncementsSupportedLanguages:(NSMutableArray *)arg1 ;
-(char)hasAnnouncementsURL;
-(NSString *)releaseInfo;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(void)setHybridUnavailableRegions:(SCD_Struct_GE88*)arg1 count:(unsigned)arg2 ;
-(void)clearHybridUnavailableRegions;
-(SCD_Struct_GE88)hybridUnavailableRegionAtIndex:(unsigned)arg1 ;
-(SCD_Struct_GE88*)hybridUnavailableRegions;
-(unsigned)hybridUnavailableRegionsCount;
-(void)addHybridUnavailableRegion:(SCD_Struct_GE88)arg1 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 overrideLocale:(id)arg2 ;
-(id)regionalResourceRegionsForMapRect:(SCD_Struct_GE57)arg1 ;
-(char)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForKey:(const GEOTileKey*)arg1 ;
-(char)isHybridModeAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(double)timeToLiveForTileKey:(const GEOTileKey*)arg1 ;
-(id)regionalResourceKeysForTileKey:(const GEOTileKey*)arg1 ;
-(id)flatRegionalResourceTilesForMapRect:(SCD_Struct_GE57)arg1 ;
-(char)hasRegionalResourcesForTileKey:(const GEOTileKey*)arg1 ;
-(void)_resetBestLanguages;
-(unsigned)versionForTileKey:(const GEOTileKey*)arg1 ;
-(id)localizationURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(id)activeTileSetForTileType:(int)arg1 scale:(int)arg2 ;
-(id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(id)languageForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)largestRegionalResourceZoomLevelContainingTileKey:(const GEOTileKey*)arg1 ;
-(char)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
-(id)baseURLStringForTileKey:(const GEOTileKey*)arg1 ;
-(unsigned)resourcesCount;
-(void)clearResources;
-(void)setRegionalResourceRegions:(NSMutableArray *)arg1 ;
-(id)regionalResourceRegionAtIndex:(unsigned)arg1 ;
-(void)clearRegionalResourceTiles;
-(void)setRegionalResourceTiles:(NSMutableArray *)arg1 ;
-(void)addRegionalResourceRegion:(id)arg1 ;
-(unsigned)regionalResourceTilesCount;
-(void)clearRegionalResourceRegions;
-(char)hasRegionalResourcesURL;
-(id)resourceAtIndex:(unsigned)arg1 ;
-(void)addRegionalResourceTile:(id)arg1 ;
-(unsigned)regionalResourceRegionsCount;
-(void)setRegionalResourcesURL:(NSString *)arg1 ;
-(void)addResource:(id)arg1 ;
-(NSString *)regionalResourcesURL;
-(NSMutableArray *)regionalResourceTiles;
-(id)regionalResourceTileAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)regionalResourceRegions;
-(char)hasUniqueIdentifier;
-(NSMutableArray *)resources;
-(void)setResources:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(NSMutableArray *)fonts;
-(id)fontAtIndex:(unsigned)arg1 ;
@end
