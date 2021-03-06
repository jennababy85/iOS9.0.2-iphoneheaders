/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSOperationQueue;

@interface ICRemoteFileAttachmentDownloader : NSObject {

	NSMutableDictionary* _operationsByAttachmentIdentifier;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * operationsByAttachmentIdentifier;              //@synthesize operationsByAttachmentIdentifier=_operationsByAttachmentIdentifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)sharedDownloader;
+(char)needsToDownloadRemoteFileAttachments;
+(id)allUndownloadedLegacyAttachments;
+(void)releaseSharedDownloaderIfPossible;
+(void)initializeDownloaderAfterDelayIfNecessary;
-(void)dealloc;
-(id)init;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)reachabilityChanged:(id)arg1 ;
-(void)downloadRemoteFileForAttachment:(id)arg1 ;
-(void)setOperationsByAttachmentIdentifier:(NSMutableDictionary *)arg1 ;
-(void)resumeDownloadsAfterDelay;
-(void)downloadUndownloadedLegacyAttachments;
-(NSMutableDictionary *)operationsByAttachmentIdentifier;
@end

