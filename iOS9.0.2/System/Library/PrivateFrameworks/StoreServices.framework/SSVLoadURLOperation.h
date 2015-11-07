/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/NSURLConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class AKAppleIDSession, NSMutableData, SSVURLDataConsumer, NSObject, NSData, SSMetricsPageEvent, NSMutableSet, NSURL, NSString, NSHTTPURLResponse, NSRunLoop, SSVFairPlaySAPSession, SSVSAPSignaturePolicy, SSURLBag, SSVURLBagInterpreter, NSURLRequest, NSCachedURLResponse;

@interface SSVLoadURLOperation : NSOperation <NSURLConnectionDelegate> {

	AKAppleIDSession* _authKitSession;
	NSMutableData* _dataBuffer;
	SSVURLDataConsumer* _dataConsumer;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSData* _inputData;
	char _iTunesStoreRequest;
	int _machineDataRetryCount;
	int _machineDataStyle;
	SSMetricsPageEvent* _metricsPageEvent;
	/*^block*/id _outputBlock;
	/*^block*/id _prepareRequestBlock;
	NSMutableSet* _protocolRedirectURLs;
	char _recordsMetrics;
	NSURL* _redirectURL;
	NSString* _referrerApplicationName;
	NSString* _referrerURLString;
	NSHTTPURLResponse* _response;
	NSRunLoop* _runLoop;
	SSVFairPlaySAPSession* _sapSession;
	SSVSAPSignaturePolicy* _sapSignaturePolicy;
	char _shouldRetry;
	NSString* _storeFrontSuffix;
	char _stopped;
	SSURLBag* _urlBag;
	SSVURLBagInterpreter* _urlBagInterpreter;
	NSURLRequest* _urlRequest;

}

@property (readonly) NSURL * URL; 
@property (readonly) NSURLRequest * URLRequest; 
@property (readonly) NSCachedURLResponse * cachedURLResponse; 
@property (retain) SSVURLDataConsumer * dataConsumer; 
@property (getter=isITunesStoreRequest) char ITunesStoreRequest; 
@property (readonly) SSMetricsPageEvent * metricsPageEvent; 
@property (assign) char recordsMetrics; 
@property (copy) NSString * referrerApplicationName; 
@property (copy) NSString * referrerURLString; 
@property (copy) NSString * storeFrontSuffix; 
@property (readonly) NSHTTPURLResponse * URLResponse; 
@property (copy) id expiredOutputBlock; 
@property (copy) id outputBlock; 
@property (copy) id prepareRequestBlock; 
@property (assign) int machineDataStyle; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (copy) SSVSAPSignaturePolicy * SAPSignaturePolicy; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)main;
-(SSVFairPlaySAPSession *)SAPSession;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(void)setITunesStoreRequest:(char)arg1 ;
-(SSMetricsPageEvent *)metricsPageEvent;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(void)setStoreFrontSuffix:(NSString *)arg1 ;
-(NSHTTPURLResponse *)URLResponse;
-(void)configureWithURLBag:(id)arg1 ;
-(id)outputBlock;
-(NSURLRequest *)URLRequest;
-(id)initWithData:(id)arg1 fromOperation:(id)arg2 ;
-(SSVURLDataConsumer *)dataConsumer;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(NSString *)referrerApplicationName;
-(void)setReferrerApplicationName:(NSString *)arg1 ;
-(NSString *)referrerURLString;
-(void)setReferrerURLString:(NSString *)arg1 ;
-(NSCachedURLResponse *)cachedURLResponse;
-(void)setRecordsMetrics:(char)arg1 ;
-(void)setMachineDataStyle:(int)arg1 ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(void)setSAPSignaturePolicy:(SSVSAPSignaturePolicy *)arg1 ;
-(char)isITunesStoreRequest;
-(NSString *)storeFrontSuffix;
-(id)_initSSVLoadURLOperation;
-(char)recordsMetrics;
-(int)machineDataStyle;
-(id)_newURLRequestWithRedirectURL:(id)arg1 ;
-(void)_stopRunLoop;
-(void)_finishWithData:(id)arg1 ;
-(void)_createAuthKitSession;
-(void)_runOnce;
-(void)setPrepareRequestBlock:(id)arg1 ;
-(void)_finishWithOutput:(id)arg1 error:(id)arg2 ;
-(void)_applyResponseToMetrics:(id)arg1 ;
-(char)_shouldRetryAfterMachineDataRequest:(id)arg1 ;
-(id)_outputForData:(id)arg1 error:(id*)arg2 ;
-(void)_releaseOutputBlocks;
-(void)_configureWithURLBagInterpreter:(id)arg1 ;
-(void)_addMachineDataHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2 ;
-(void)_addSAPSignatureToRequest:(id)arg1 ;
-(id)prepareRequestBlock;
-(void)_loadURLBagInterpreter;
-(void)_stopIfCancelled;
-(long)_runRunLoopUntilStopped;
-(void)_keepAliveTimer:(id)arg1 ;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(id)expiredOutputBlock;
-(SSVSAPSignaturePolicy *)SAPSignaturePolicy;
-(void)setExpiredOutputBlock:(id)arg1 ;
-(id)_dataForCachedResponse:(CFCachedURLResponseRef)arg1 ;
-(id)initWithURLRequestProperties:(id)arg1 ;
@end
