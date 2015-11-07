/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/CSCoderEncoder.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString, NSArray, NSNumber;

@interface NSDictionary : NSObject <CSCoderEncoder, NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * bundleId; 
@property (nonatomic,readonly) NSString * creator; 
@property (nonatomic,readonly) float averageRating; 
@property (nonatomic,readonly) unsigned ratingCount; 
@property (nonatomic,readonly) NSString * url; 
@property (nonatomic,readonly) NSString * priceFormatted; 
@property (nonatomic,readonly) NSArray * transitModeKeys; 
@property (nonatomic,readonly) NSArray * categories; 
@property (nonatomic,readonly) NSNumber * storeID; 
@property (nonatomic,readonly) char isOfficialApp; 
@property (nonatomic,readonly) char isInstalled; 
@property (nonatomic,readonly) unsigned short fileHFSFlags; 
@property (nonatomic,readonly) unsigned long long fileHFSResourceForkSize; 
@property (readonly) unsigned count; 
+(id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned)arg2 ;
+(id)safari_dictionaryWithPropertyListData:(id)arg1 ;
+(id)safari_dictionaryWithContentsOfData:(id)arg1 options:(unsigned)arg2 ;
+(id)dictionaryWithParametersInURLString:(id)arg1 ;
+(id)SLDictionaryWithOAuthAccessTokenResponseData:(id)arg1 ;
+(id)ak_dictionaryWithResponseData:(id)arg1 ;
+(id)_geo_replyDictionaryForError:(id)arg1 key:(id)arg2 ;
+(id)_geo_dictionaryFromXPCObject:(id)arg1 ;
+(id)_dictionaryWithData:(id)arg1 isPlist:(char)arg2 allowedClasses:(id)arg3 ;
+(id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2 ;
+(id)dictionaryWithPlistData:(id)arg1 ;
+(id)dictionaryWithArchiveData:(id)arg1 ;
+(id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2 ;
+(id)dictionaryWithAXAuditIssue:(long)arg1 description:(id)arg2 resolution:(id)arg3 element:(id)arg4 ;
+(id)newWithContentsOf:(id)arg1 immutable:(char)arg2 ;
+(id)dictionaryWithContentsOfURL:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)dictionaryWithContentsOfFile:(id)arg1 ;
+(id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
+(id)dictionaryWithDictionary:(id)arg1 copyItems:(char)arg2 ;
+(id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)dictionary;
+(id)dictionaryWithObjectsAndKeys:(id)arg1 ;
+(id)dictionaryWithDictionary:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 ;
+(id)sharedKeySetForKeys:(id)arg1 ;
-(char)hasCaseIgnoringKey:(id)arg1 ;
-(id)objectForInt:(int)arg1 ;
-(id)mutableCopyWithElementsCopy;
-(id)numberForKeyPath:(id)arg1 ;
-(id)stringForKeyPath:(id)arg1 ;
-(id)objectForKeyPath:(id)arg1 ;
-(id)_objectOfKind:(Class)arg1 forKeyPath:(id)arg2 ;
-(float)floatForKeyPath:(id)arg1 ;
-(id)naui_dictionaryByMappingValues:(/*^block*/id)arg1 ;
-(id)naui_filter:(/*^block*/id)arg1 ;
-(id)blj_dictionaryBySwappingValuesWithDictionary:(id)arg1 ;
-(id)blj_dictionaryByRemovingValuesForKey:(id)arg1 ;
-(id)mf_filterUsingMap:(id)arg1 inverse:(char)arg2 ;
-(id)safari_stringForKey:(id)arg1 ;
-(id)safari_dateForKey:(id)arg1 ;
-(char)safari_boolForKey:(id)arg1 ;
-(id)safari_dictionaryForKey:(id)arg1 ;
-(id)safari_arrayForKey:(id)arg1 ;
-(id)safari_URLForKey:(id)arg1 ;
-(id)safari_numberForKey:(id)arg1 ;
-(id)safari_dataForKey:(id)arg1 ;
-(id)safari_UUIDForKey:(id)arg1 ;
-(id)safari_mapAndFilterKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)setOfAllObjects;
-(char)mf_boolForKey:(id)arg1 ;
-(int)mf_integerForKey:(id)arg1 ;
-(char)writeToProtectedFile:(id)arg1 atomically:(char)arg2 ;
-(id)DAObjectForKeyCaseInsensitive:(id)arg1 ;
-(id)DAMergeOverrideDictionary:(id)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)mutableCopyWithElementsCopy;
-(id)CalMutableRecursiveCopy;
-(char)CalHasKeyIn:(id)arg1 ;
-(id)filteredDictionaryPassingTest:(/*^block*/id)arg1 ;
-(id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)CDVObjectForKeyCaseInsensitive:(id)arg1 ;
-(id)CDVMergeOverrideDictionary:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(char)MSASIsGlobalResetSync;
-(id)MSASAlbumResetSyncAlbumGUID;
-(char)MSASIsLocalChange;
-(id)MSASEventIsDueToAlbumDeletionAlbumGUID;
-(id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
-(char)MSASIsNotInteresting;
-(char)MSASIsErrorRecovery;
-(id)MSMutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MSMutableDeepCopy;
-(id)MSDeepCopy;
-(int)iterations;
-(float)offset;
-(SEL)setupSelector;
-(SEL)testSelector;
-(id)scriptPath;
-(id)scriptEntry;
-(char)MR_isEqualToNowPlayingInfo:(id)arg1 ;
-(char)_mapkit_writeBinaryPlist:(id)arg1 atomically:(char)arg2 ;
-(id)bestImageURLForWidth:(float)arg1 ;
-(float)averageRating;
-(char)isOfficialApp;
-(id)_ratingData;
-(NSArray *)transitModeKeys;
-(id)_defaultOffer;
-(NSString *)priceFormatted;
-(char)isInstalled;
-(NSString *)url;
-(NSString *)title;
-(NSArray *)categories;
-(NSString *)bundleId;
-(NSString *)creator;
-(unsigned)ratingCount;
-(NSNumber *)storeID;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(int)abCompare:(id)arg1 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(id)dictionaryChanging:(id)arg1 to:(id)arg2 ;
-(id)_geo_newXPCObject;
-(id)_geo_errorForKey:(id)arg1 ;
-(id)_placeOrCurrentLocation:(char*)arg1 ;
-(id)_cn_filter:(/*^block*/id)arg1 ;
-(id)_accessibilityLeafDescendantsWithCount:(unsigned)arg1 shouldStopAtRemoteElement:(char)arg2 options:(id)arg3 treeLogger:(id)arg4 ;
-(id)_web_messageText;
-(int)_web_messageLineNumber;
-(id)_web_messageSourceURL;
-(int)_web_messageType;
-(char)_boolForKey:(id)arg1 ;
-(char)_ui_dictionaryContainsUIStringDrawingKeys;
-(id)_ui_attributesForDictionaryContainingUIStringDrawingKeys;
-(id)_webkit_objectForMIMEType:(id)arg1 ;
-(id)_webkit_stringForKey:(id)arg1 ;
-(char)_webkit_boolForKey:(id)arg1 ;
-(id)_webkit_arrayForKey:(id)arg1 ;
-(id)_webkit_numberForKey:(id)arg1 ;
-(int)_webkit_intForKey:(id)arg1 ;
-(id)asQueryParameterString;
-(id)_FTFilteredDictionaryForAPS;
-(unsigned short)fileHFSFlags;
-(unsigned long long)fileHFSResourceForkSize;
-(id)_dictionaryForKey:(id)arg1 ;
-(id)_arrayForKey:(id)arg1 ;
-(id)_numberForKey:(id)arg1 ;
-(id)_stringForKey:(id)arg1 ;
-(id)_dataForKey:(id)arg1 ;
-(id)archiveData;
-(char)__imIsMutable;
-(id)__imDeepCopy;
-(id)keysOfChangedEntriesComparedTo:(id)arg1 ;
-(id)dictionaryFromChanges:(id)arg1 ;
-(id)plistData;
-(unsigned long)bw_optimalMicPolarPattern;
-(char)bw_containsBuiltInMicAsAnInput;
-(id)bw_dataSourceDictionaryForDesiredMicOrientation:(unsigned long)arg1 ;
-(char)matchesUID:(id)arg1 ;
-(void)cl_json_serializeValue:(value_ostream*)arg1 ;
-(id)MCMutableDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MCDeepCopyWithZone:(NSZone*)arg1 ;
-(id)MCMutableDeepCopy;
-(id)MCDeepCopy;
-(id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(int)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(int)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8 ;
-(id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(int)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6 ;
-(id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(int)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(int)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7 ;
-(id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(int)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5 ;
-(id)sbs_safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)sbs_dictionaryByAddingEntriesFromDictionary:(id)arg1 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(KeyValueArray*)CA_copyRenderKeyValueArray;
-(id)_cd_queryItems;
-(id)invertedDictionary;
-(void)bs_eachValue:(/*^block*/id)arg1 ;
-(id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)_sa_mappedDictionaryWithBlock:(/*^block*/id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)_web_numberForKey:(id)arg1 ;
-(int)_web_intForKey:(id)arg1 ;
-(id)_web_objectForMIMEType:(id)arg1 ;
-(id)_web_stringForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)fileOwnerAccountName;
-(unsigned)fileOwnerAccountNumber;
-(id)fileGroupOwnerAccountName;
-(unsigned)fileGroupOwnerAccountNumber;
-(int)fileSystemNumber;
-(unsigned)fileSystemFileNumber;
-(char)fileExtensionHidden;
-(unsigned long)fileHFSCreatorCode;
-(unsigned long)fileHFSTypeCode;
-(char)fileIsImmutable;
-(char)fileIsAppendOnly;
-(id)fileOwnerAccountID;
-(id)fileGroupOwnerAccountID;
-(id)fileType;
-(id)fileModificationDate;
-(unsigned)filePosixPermissions;
-(unsigned long long)fileSize;
-(id)fileCreationDate;
-(id)_stringToWrite;
-(id)descriptionInStringsFileFormat;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)getKeys:(id*)arg1 ;
-(char)__getValue:(id*)arg1 forKey:(id)arg2 ;
-(id)keyOfEntryWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysOfEntriesWithOptions:(unsigned)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysSortedByValueWithOptions:(unsigned)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)invertedDictionary;
-(id)keyOfEntryPassingTest:(/*^block*/id)arg1 ;
-(id)keysSortedByValueUsingSelector:(SEL)arg1 ;
-(id)initWithObject:(id)arg1 forKey:(id)arg2 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(unsigned long)_cfTypeID;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned)arg3 ;
-(char)isNSDictionary__;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(char)containsObject:(id)arg1 ;
-(id)initWithObjectsAndKeys:(id)arg1 ;
-(id)allKeys;
-(id)allObjects;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned)arg3 ;
-(char)isEqualToDictionary:(id)arg1 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(id)keysOfEntriesPassingTest:(/*^block*/id)arg1 ;
-(id)initWithDictionary:(id)arg1 copyItems:(char)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)keysSortedByValueUsingComparator:(/*^block*/id)arg1 ;
-(unsigned)countForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(char)containsKey:(id)arg1 ;
-(id)allKeysForObject:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(unsigned)countForObject:(id)arg1 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
@end
