/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSArray, NSFileAccessNode, NSMutableSet, NSMutableDictionary;

@interface NSFileSubarbitrationClaim : NSFileAccessClaim {

	NSArray* _readingURLs;
	unsigned _readingOptions;
	NSArray* _writingURLs;
	unsigned _writingOptions;
	/*^block*/id _messageSender;
	NSArray* _readingLocations;
	NSArray* _writingLocations;
	NSFileAccessNode* _rootNode;
	NSMutableSet* _forwardedClaimIDs;
	NSMutableDictionary* _readRelinquishmentsByPresenterID;
	NSMutableDictionary* _writeRelinquishmentsByPresenterID;
	char _nullified;

}
-(char)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(char)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)revoked;
-(void)setMessageSender:(/*^block*/id)arg1 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(/*^block*/id)messageSender;
-(id)initWithClient:(id)arg1 messageParameters:(id)arg2 arbiterQueue:(id)arg3 replySender:(/*^block*/id)arg4 ;
-(void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenter:(id)arg3 usingReplySender:(/*^block*/id)arg4 ;
-(void)forwardReacquisitionMessageWithKind:(id)arg1 parameters:(id)arg2 toPresenterForID:(id)arg3 usingReplySender:(/*^block*/id)arg4 ;
-(void)granted;
-(void)invokeClaimer;
-(void)devalueSelf;
-(void)evaluateNewClaim:(id)arg1 ;
-(char)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(char)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned)arg2 ;
-(void)devalueOldClaim:(id)arg1 ;
-(id)initWithReadingURLs:(id)arg1 options:(unsigned)arg2 writingURLs:(id)arg3 options:(unsigned)arg4 claimer:(/*^block*/id)arg5 ;
-(id)relinquishmentForMessageOfKind:(id)arg1 toPresenterForID:(id)arg2 ;
-(void)dealloc;
@end
