/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKZipArchiveDataRepresentation;
#import <iBooks/iBooks-Structs.h>
@class NSMutableDictionary, BKDataRepresentation, NSData, NSString, BKCryptoKey;

@interface BKZipArchive : NSObject {

	NSMutableDictionary* mEntries;
	BKDataRepresentation*<BKZipArchiveDataRepresentation> mDataRepresentation;
	NSData* mPassphraseVerifier;
	NSString* mPassphraseHint;
	BKCryptoKey* mCryptoKey;
	NSData* mEncryptedDocumentUuid;

}
+(char)isZipArchiveAtPath:(id)arg1 ;
-(void)collapseCommonRootDirectory;
-(void)dealloc;
-(id)entryWithName:(id)arg1 ;
-(void)readEntries;
-(void)setCryptoKey:(id)arg1 ;
-(id)allEntryNames;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(char)arg2 ;
-(id)entryWithName:(id)arg1 dataLength:(long long)arg2 ;
-(char)isEncrypted;
-(id)passphraseVerifier;
-(id)passphraseHint;
-(id)encryptedDocumentUuid;
-(char)decompressAtPath:(id)arg1 ;
-(BKZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1 ;
-(id)readFilenameFromBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
-(void)readExtraFieldFromBuffer:(const char*)arg1 size:(unsigned long)arg2 entry:(id)arg3 ;
-(const char*)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2 ;
-(BKZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2 ;
-(BKZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2 ;
@end

