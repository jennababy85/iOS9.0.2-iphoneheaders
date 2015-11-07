/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <backupd/backupd-Structs.h>
@class PQLConnection, NSString, NSObject;

@interface MBCKCache : NSObject {

	PQLConnection* _pdb;
	NSString* _path;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSString* _cacheQueueLabel;
	unsigned _openHandles;

}

@property (nonatomic,readonly) NSString * path;                                       //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) char isOpen; 
@property (nonatomic,readonly) PQLConnection * database;                              //@synthesize pdb=_pdb - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSString * cacheQueueLabel;                              //@synthesize cacheQueueLabel=_cacheQueueLabel - In the implementation block
@property (assign,nonatomic) unsigned openHandles;                                    //@synthesize openHandles=_openHandles - In the implementation block
+(id)cacheWithPath:(id)arg1 ;
+(id)createdDate:(id)arg1 ;
+(id)defaultPath;
+(id)defaultCache;
-(id)removeManifestAndFiles:(id)arg1 ;
-(id)enumerateManifestsForSnapshot:(id)arg1 foundManifest:(/*^block*/id)arg2 ;
-(id)addPendingSnapshot:(id)arg1 ;
-(id)commitSnapshot:(id)arg1 ;
-(unsigned long long)countFilesForManifest:(id)arg1 withError:(id*)arg2 ;
-(long long)checksumForManifest:(id)arg1 shouldLog:(char)arg2 withError:(id*)arg3 ;
-(unsigned long long)countDomainHmacForManifest:(id)arg1 withError:(id*)arg2 ;
-(int)countManifestsForSnapshot:(id)arg1 withError:(id*)arg2 ;
-(unsigned)fetchRestoreStateForDeviceUUID:(id)arg1 snapshotUUID:(id)arg2 error:(id*)arg3 ;
-(id)setRestoreState:(unsigned)arg1 forDeviceUUID:(id)arg2 snapshotUUID:(id)arg3 ;
-(id)clearAllRestoreData;
-(id)hasRestoreFilesWithCallback:(/*^block*/id)arg1 ;
-(id)removeDeletedRestoreFiles;
-(id)enumeratePendingRestorableDomainsWithCallback:(/*^block*/id)arg1 ;
-(id)fetchPendingRestoreSizeForDomain:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)fetchDomainRestoreStateForDomain:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)setDomainRestoreAgent:(id)arg1 forDomain:(id)arg2 ;
-(id)fetchRestorableFileForPath:(id)arg1 error:(id*)arg2 ;
-(id)removeAllOrphanedItemsForSnapshot:(id)arg1 ;
-(id)fetchMostRecentSnapshotForDevice:(id)arg1 withError:(id*)arg2 ;
-(char)hasBackupContentsWithError:(id*)arg1 ;
-(id)removeAllFilesMissingEncryptionKeys;
-(id)disabledDomainsWithError:(id*)arg1 ;
-(id)enumeratePotentiallyChangedDomainNames:(/*^block*/id)arg1 ;
-(id)markFileChangesAsDeletedInDomainNames:(id)arg1 ;
-(id)summarizeFileChanges:(/*^block*/id)arg1 ;
-(id)enumerateChangedDomainNames:(/*^block*/id)arg1 ;
-(id)enumerateDomainNamesOfPendingSnapshot:(id)arg1 domainCallback:(/*^block*/id)arg2 ;
-(id)enumerateFileChangesForDomainName:(id)arg1 foundChange:(/*^block*/id)arg2 ;
-(unsigned long long)countFilesMissingEncryptionKeysWithError:(id*)arg1 ;
-(id)purgeDeletedFileChanges;
-(id)removeAllFileEncryptionKeys;
-(id)fileSeen:(id)arg1 changeType:(unsigned)arg2 ;
-(long long)checksumForManifest:(id)arg1 withError:(id*)arg2 ;
-(id)enumerateSnapshotIDs:(/*^block*/id)arg1 ;
-(id)removeSnapshotID:(id)arg1 ;
-(id)purgeAllFileChanges;
-(id)addSnapshotIntoFileChanges:(id)arg1 ;
-(id)removeAllOrphanedItems;
-(char)performInTransaction:(/*^block*/id)arg1 ;
-(id)enumerateSnapshots:(/*^block*/id)arg1 ;
-(id)moveManifest:(id)arg1 toSnapshot:(id)arg2 ;
-(id)mergeManifest:(id)arg1 withNewerManifest:(id)arg2 outputManifest:(id)arg3 mergeDeletions:(char)arg4 ;
-(id)addManifest:(id)arg1 toPendingSnapshot:(id)arg2 ;
-(id)setEnabled:(char)arg1 forDomain:(id)arg2 ;
-(id)cachedAccountWithError:(id*)arg1 ;
-(id)setDomainShouldRestoreToSafeHarbor:(char)arg1 forDomain:(id)arg2 ;
-(char)domainShouldRestoreToSafeHarbor:(id)arg1 withError:(id*)arg2 ;
-(id)enumerateRestoreFilesForDomain:(id)arg1 state:(unsigned)arg2 foundRestorable:(/*^block*/id)arg3 range:(NSRange)arg4 ;
-(id)enumerateRestoreFilesForDomain:(id)arg1 excludingState:(unsigned)arg2 foundRestorable:(/*^block*/id)arg3 range:(NSRange)arg4 ;
-(id)prioritizeRestoreFileWithDomain:(id)arg1 relativePath:(id)arg2 ;
-(id)enumerateFilesForManifest:(id)arg1 foundFile:(/*^block*/id)arg2 ;
-(id)fetchMostRecentSnapshotWithError:(id*)arg1 ;
-(unsigned long long)sizeOfDomain:(id)arg1 error:(id*)arg2 ;
-(id)enumerateDomainNames:(/*^block*/id)arg1 ;
-(id)disableDomain:(id)arg1 ;
-(void)setCacheQueueLabel:(NSString *)arg1 ;
-(char)removeCorruptDatabaseWithError:(id*)arg1 ;
-(unsigned)openHandles;
-(void)setOpenHandles:(unsigned)arg1 ;
-(id)_newConnection:(id)arg1 ;
-(char)_setupCacheWithError:(id*)arg1 ;
-(char)removeDatabaseFilesWithError:(id*)arg1 ;
-(void)_performOnDBQueue:(/*^block*/id)arg1 ;
-(char)forceCloseWithError:(id*)arg1 ;
-(char)_setupConnectionWithError:(id*)arg1 ;
-(NSString *)cacheQueueLabel;
-(void)performCallbackOnQueue:(/*^block*/id)arg1 ;
-(char)_isNotFoundError:(id)arg1 ;
-(id)_fetchObjectOfClass:(Class)arg1 withError:(id*)arg2 format:(id)arg3 ;
-(id)cachedAccountIgnoringExpiry:(char)arg1 error:(id*)arg2 ;
-(id)_enumerateObjectsOfClass:(Class)arg1 withCallback:(/*^block*/id)arg2 format:(id)arg3 ;
-(id)setFileEncryptionKey:(id)arg1 forInodeNumber:(unsigned long long)arg2 atPath:(id)arg3 ;
-(id)_enumerateRestoreFilesForDomain:(id)arg1 state:(unsigned)arg2 negatingState:(char)arg3 foundRestorable:(/*^block*/id)arg4 range:(NSRange)arg5 ;
-(id)enableDomain:(id)arg1 ;
-(char)resetAndRestoreDatabaseAtPath:(id)arg1 withError:(id*)arg2 ;
-(char)removeAccountWithError:(id*)arg1 ;
-(char)saveDevice:(id)arg1 withError:(id*)arg2 ;
-(char)hasPendingBackupContents:(id*)arg1 ;
-(id)addManifestPage:(id)arg1 forManifestID:(id)arg2 pageIndex:(unsigned)arg3 ;
-(id)deleteManifestPages;
-(id)deleteManifestPagesForManifestID:(id)arg1 ;
-(id)fetchManifestPageForManifestID:(id)arg1 pageIndex:(unsigned)arg2 withError:(id*)arg3 ;
-(id)addFile:(id)arg1 toManifest:(id)arg2 ;
-(id)enumerateFileIDsForManifestID:(id)arg1 foundFileID:(/*^block*/id)arg2 ;
-(id)fetchFileFromFileID:(id)arg1 withError:(id*)arg2 ;
-(id)addPendingFile:(id)arg1 ;
-(id)commitPendingFile:(id)arg1 ;
-(id)enumerateCloudFilesPendingDeleteForManifestID:(id)arg1 withFoundFileID:(/*^block*/id)arg2 ;
-(id)enumerateCloudFilesPendingDelete:(/*^block*/id)arg1 ;
-(id)deleteCloudFilesPendingDeleteForManifestID:(id)arg1 ;
-(id)deleteCloudFilesPendingDelete;
-(id)lastBackedUpFileForFile:(id)arg1 withError:(id*)arg2 ;
-(id)encryptionKeyForFileWithInodeNumber:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)setFileMissingEncryptionKeyForPath:(id)arg1 ;
-(id)removeFileEncryptionKeyForInodeNumber:(unsigned long long)arg1 ;
-(id)enumerateFilesMissingEncryptionKeys:(/*^block*/id)arg1 ;
-(id)addFileToRestoreFiles:(id)arg1 ;
-(id)setRestoreState:(unsigned)arg1 forFile:(id)arg2 ;
-(id)enumeratePendingRestoreFilesForDomain:(id)arg1 orderAscending:(char)arg2 foundRestorable:(/*^block*/id)arg3 ;
-(id)enumeratePendingRestoreFilesForDomain:(id)arg1 forType:(unsigned)arg2 orderAscending:(char)arg3 foundRestorable:(/*^block*/id)arg4 ;
-(id)enumeratePendingRestoreFilesForDomain:(id)arg1 excludingType:(unsigned)arg2 foundRestorable:(/*^block*/id)arg3 ;
-(id)fetchRestorableFileForDomain:(id)arg1 relativePath:(id)arg2 error:(id*)arg3 ;
-(unsigned)fetchRestoreFileStateForFileID:(id)arg1 error:(id*)arg2 ;
-(id)addDomainToRestoreDomains:(id)arg1 ;
-(id)setDomainRestoreState:(unsigned)arg1 forDomain:(id)arg2 ;
-(void)crashAndBurn;
-(id)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)removePropertyForKey:(id)arg1 ;
-(id)flush;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(char)saveAccount:(id)arg1 withError:(id*)arg2 ;
-(char)openWithError:(id*)arg1 ;
-(char)closeWithError:(id*)arg1 ;
-(char)resetWithError:(id*)arg1 ;
-(id)propertyForKey:(id)arg1 error:(id*)arg2 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)_executeSQL:(id)arg1 ;
-(id)beginBatch;
-(char)isOpen;
-(id)removeSnapshot:(id)arg1 ;
-(PQLConnection *)database;
@end
