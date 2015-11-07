/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/NMMapsAppXPCInterface.h>
#import <Maps/MapsSyncedClient.h>

@protocol OS_dispatch_queue, HistoryDelegate;
@class NSString, NSArray, MapsSyncManager, NSObject, NSUserActivity, NSXPCConnection, NSMutableArray;

@interface History : NSObject <NMMapsAppXPCInterface, MapsSyncedClient> {

	MapsSyncManager* _syncManager;
	NSObject*<OS_dispatch_queue> _saveQ;
	id<HistoryDelegate> _delegate;
	NSUserActivity* _recentUserActivity;
	NSXPCConnection* _connection;
	NSMutableArray* _history;
	NSMutableArray* _syncedHistory;
	NSMutableArray* _failedSearches;
	NSMutableArray* _failedDirectionsRequests;
	char _addressBookCallbackWasRegistered;
	char _shouldSendHistoryDidChangeNotifications;

}

@property (nonatomic,readonly) NSArray * orderedHistory; 
@property (nonatomic,readonly) unsigned orderedHistoryCount; 
@property (nonatomic,readonly) NSArray * allHistory; 
@property (assign,nonatomic,__weak) id<HistoryDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldSendHistoryDidChangeNotifications;              //@synthesize shouldSendHistoryDidChangeNotifications=_shouldSendHistoryDidChangeNotifications - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) char syncSupportsKVO; 
@property (nonatomic,readonly) char syncInvertedOrdering; 
@property (nonatomic,readonly) char syncShouldUseItemPositions; 
@property (nonatomic,readonly) char syncShouldUseCustomStore; 
+(id)beginHoldingUIInterferingTasks;
+(void)beginPrecachingHistoryIfNeeded;
+(id)sharedHistoryCreatingIfMissing:(char)arg1 ;
+(id)sharedHistory;
-(void)_saveFailuresWithTaskName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)stopDirections;
-(void)_saveFailedDirectionsRequests;
-(char)_isValidHistoryItem:(id)arg1 ;
-(void)updateDirectionsStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateDroppedPin:(id)arg1 ;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)_createCompanionConnection;
-(void)clearPreviewRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startDirectionsToPreviewRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeSyncedItemsAtIndexes:(id)arg1 ;
-(void)_removeInvalidItems;
-(void)_registerAddressBookIfPossible;
-(void)updateSyncedItemAtIndexes:(id)arg1 ;
-(char)_containsFailedDirectionsHistoryItem:(id)arg1 ;
-(NSString *)syncIdentifier;
-(void)setShouldSendHistoryDidChangeNotifications:(char)arg1 ;
-(void)addHistoryItem:(id)arg1 ;
-(void)_registerAddressBookIfUnregistered;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1 ;
-(void)_addHistoryItem:(id)arg1 isDirectionsFailure:(char)arg2 isSearchFailure:(char)arg3 ;
-(void)addStateToHistory;
-(NSArray *)syncedItems;
-(void)updateHistoryItem:(id)arg1 ;
-(char)syncShouldUseItemPositions;
-(void)updateHistoryItemTimestamp:(id)arg1 ;
-(void)addDirectionsHistoryItem:(id)arg1 isFailure:(char)arg2 ;
-(char)syncSupportsKVO;
-(void)addSearchRequestHistoryItem:(id)arg1 isFailure:(char)arg2 ;
-(char)syncShouldUseCustomStore;
-(void)holdingStateDidChange;
-(void)_startSyncIfNotYetStarted;
-(void)updatePlaceDisplayHistoryItem:(id)arg1 byReplacingWithItem:(id)arg2 ;
-(char)syncInvertedOrdering;
-(void)_dedupeAndSortHistory;
-(void)_saveHistory;
-(void)_startSyncIfPossible;
-(char)_holdingUIInterferingTasksIsUseful;
-(void)updateHistoryItem:(id)arg1 withTransportType:(int)arg2 ;
-(void)_updateHistory;
-(void)_saveFailedSearches;
-(void)_madeChanges;
-(NSArray *)allHistory;
-(char)shouldSendHistoryDidChangeNotifications;
-(unsigned)orderedHistoryCount;
-(void)updateAddressForSearchResult:(id)arg1 ;
-(NSArray *)orderedHistory;
-(id)newSyncedItemForSyncData:(id)arg1 ;
-(id)allRAPUserDirectionsRequests;
-(id)allRAPUserSearches;
-(void)mergeWithLocalStoreOnNextLaunch;
-(void)resetSyncState;
-(void)removeAllItems;
-(void)setDelegate:(id<HistoryDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<HistoryDelegate>)delegate;
@end
