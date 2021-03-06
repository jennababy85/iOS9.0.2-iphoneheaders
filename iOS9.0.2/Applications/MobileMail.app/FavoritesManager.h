/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MailboxUtilsClient.h>

@class NSString, NSMutableArray, NSRecursiveLock, NSUbiquitousKeyValueStore;

@interface FavoritesManager : NSObject <MailboxUtilsClient> {

	NSString* _storagePath;
	NSMutableArray* _mailboxCollections;
	NSMutableArray* _visibleMailboxCollections;
	NSRecursiveLock* _lock;
	NSUbiquitousKeyValueStore* _kvStore;
	char _showingOutbox;
	char _showingSingleAccount;
	char _loadingMailboxes;

}
+(id)sharedInstance;
-(id)mailboxesCollection;
-(id)copyMailboxSources;
-(void)_accountsDidChange:(id)arg1 ;
-(void)_sharedMailboxControllerBadgeCountDidChange:(id)arg1 ;
-(id)indexPathForItem:(id)arg1 ;
-(char)updateCollections:(id)arg1 withItems:(id)arg2 ;
-(id)visibleMailboxCollections;
-(void)moveItemOfCollection:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 ;
-(id)favoriteMailboxesForAccount:(id)arg1 ;
-(id)accountsCollection;
-(id)accountMailboxesCollection;
-(id)itemsOfType:(unsigned)arg1 ;
-(void)_updateOutboxStatus:(id)arg1 ;
-(void)_mailboxListingChanged:(id)arg1 ;
-(void)_mailboxNameChanged:(id)arg1 ;
-(void)_watchedMailboxesChanged:(id)arg1 ;
-(void)_keyValueStoreChangedExternally:(id)arg1 ;
-(void)_invalidateVisibleMailboxCollections;
-(void)_addSharedMailboxItems;
-(void)_createDefaultCollections;
-(void)_migrateItemOrder;
-(void)_writeLocalData;
-(void)_syncLocalChanges_nts:(id)arg1 removed:(id)arg2 ;
-(void)_postNotificationChangedItems:(id)arg1 ;
-(id)_copyKVValueForItem:(id)arg1 ;
-(void)syncLocalChanges:(id)arg1 removed:(id)arg2 ;
-(void)_processOrphanedMailboxes:(id)arg1 ;
-(void)_processNewMailboxes:(id)arg1 ;
-(void)_mergeExternalChanges:(unsigned)arg1 changedKeys:(id)arg2 ;
-(id)collectionContainingItem:(id)arg1 ;
-(id)_indexPathForSharedMailboxControllerOfSourceType:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(char)shouldHideInbox;
-(char)shouldHideNotesForAccount:(id)arg1 ;
-(void)_loadMailboxes:(char)arg1 ;
-(void)_loadMailboxesForcibly:(id)arg1 ;
-(void)_loadMailboxesAfterMailboxListingChanged;
-(void)_postNotification;
-(void)_reload;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
@end

