/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSOperationQueue, NSMutableDictionary, ML3QueryResultSet, NSString;

@interface VideosRentalDataStore : NSObject <MPStoreDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _localNotifications;
	NSOperationQueue* _operationQueue;
	int _pendingRentalEventCount;
	NSMutableDictionary* _rentalDataByPID;
	ML3QueryResultSet* _resultSet;
	char _shouldReloadRentalData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)existingInstance;
+(id)sharedInstance;
-(void)loadRentalDataFromLibrary;
-(char)handleLocalNotification:(id)arg1 ;
-(void)resetAllDataForReason:(unsigned)arg1 ;
-(id)rentalDataForMediaItem:(id)arg1 ;
-(void)_libraryDisplayValuesDidChange:(id)arg1 ;
-(id)_rentalDataForMediaItem:(id)arg1 ;
-(void)loadRentalData:(id)arg1 withReason:(int)arg2 ;
-(void)_scheduleRentalEvents;
-(char)_isLoadingRentalData:(id)arg1 ;
-(void)_reloadRentalData;
-(void)_handleFinishedOperation:(id)arg1 ;
-(id)_rentalItems;
-(void)resetRentalDataForMediaItem:(id)arg1 reason:(unsigned)arg2 ;
-(void)_resetLocalNotifications;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)_libraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_enqueueOperation:(id)arg1 ;
@end

