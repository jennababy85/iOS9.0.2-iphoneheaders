/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTask.h>

@class AVURLAsset, NSURL, NSDictionary, NSArray, NSURLRequest, NSURLResponse;

@interface AVAssetDownloadTask : NSURLSessionTask {

	AVURLAsset* _URLAsset;
	NSURL* _destinationURL;
	NSDictionary* _options;
	NSArray* _loadedTimeRanges;

}

@property (nonatomic,readonly) AVURLAsset * URLAsset;                   //@synthesize URLAsset=_URLAsset - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                  //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                  //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * loadedTimeRanges;              //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (copy,readonly) NSURLRequest * originalRequest; 
@property (copy,readonly) NSURLRequest * currentRequest; 
@property (copy,readonly) NSURLResponse * response; 
-(AVURLAsset *)URLAsset;
-(NSArray *)loadedTimeRanges;
-(NSURL *)destinationURL;
-(NSDictionary *)options;
@end

