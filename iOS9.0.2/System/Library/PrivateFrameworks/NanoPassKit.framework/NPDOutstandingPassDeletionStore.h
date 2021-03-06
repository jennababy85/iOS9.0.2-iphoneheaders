/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableDictionary, NSMutableArray, NSObject;

@interface NPDOutstandingPassDeletionStore : NSObject {

	NSMutableDictionary* _outstandingMessageRecords;
	NSMutableArray* _pendingDeletionUniqueIDs;
	NSObject*<OS_dispatch_source> _cleanupTimer;

}

@property (nonatomic,retain) NSMutableDictionary * outstandingMessageRecords;              //@synthesize outstandingMessageRecords=_outstandingMessageRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingDeletionUniqueIDs;                    //@synthesize pendingDeletionUniqueIDs=_pendingDeletionUniqueIDs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> cleanupTimer;                   //@synthesize cleanupTimer=_cleanupTimer - In the implementation block
+(id)sharedOutstandingDeletionStore;
-(void)clearStore;
-(void)noteDeletionPendingForUniqueID:(id)arg1 ;
-(void)setCleanupTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableArray *)pendingDeletionUniqueIDs;
-(void)_saveOutstandingRecords;
-(NSMutableDictionary *)outstandingMessageRecords;
-(void)setOutstandingMessageRecords:(NSMutableDictionary *)arg1 ;
-(void)noteDeletionSentForUniqueID:(id)arg1 messageID:(id)arg2 ;
-(void)noteDeliveryForMessageID:(id)arg1 ;
-(void)notePassDatabaseReconciled;
-(char)isDeletionPendingForUniqueID:(id)arg1 ;
-(void)setPendingDeletionUniqueIDs:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)cleanupTimer;
-(void)_performCleanup;
-(void)dealloc;
-(id)init;
@end

