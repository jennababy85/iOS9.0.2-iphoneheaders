/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/SiteIconDownloadRequestDelegate.h>

@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;

@interface SiteIconDownloader : NSObject <SiteIconDownloadRequestDelegate> {

	NSMutableArray* _activeAndPendingBookmarkUUIDs;
	NSMutableArray* _pendingDownloadRequests;
	NSMutableSet* _activeDownloadRequests;
	NSMutableDictionary* _bookmarksNotInBookmarkDB;
	char _iconDownloadingEnabled;

}

@property (assign,nonatomic) char iconDownloadingEnabled;              //@synthesize iconDownloadingEnabled=_iconDownloadingEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSiteIconDownloader;
-(void)setIconDownloadingEnabled:(char)arg1 ;
-(void)siteIconDownloadRequestDidFail:(id)arg1 ;
-(void)siteIconDownloadRequest:(id)arg1 didComputeIconKeyColor:(id)arg2 ;
-(void)siteIconDownloadRequest:(id)arg1 didLoadIconData:(id)arg2 ;
-(void)downloadIconsForBookmark:(id)arg1 ;
-(void)downloadIconsForBookmark:(id)arg1 withIconURLs:(id)arg2 ;
-(char)_downloadIsActiveOrPendingForBookmark:(id)arg1 ;
-(void)_startDownloadRequestIfPossible;
-(unsigned)_maximumSimultaneousDownloads;
-(void)_siteIconDownloadRequestDidFinish:(id)arg1 ;
-(void)_updateBookmarkForIconDownloadRequest:(id)arg1 withIconKeyColor:(id)arg2 iconData:(id)arg3 ;
-(char)iconDownloadingEnabled;
-(id)init;
-(void)cancelAllDownloads;
@end
