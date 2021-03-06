/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXVerifierDelegate;
#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
@class NSMutableArray, GAXVerificationEventObject;

@interface GAXVerifier : NSObject {

	char _isProcessingEventQueue;
	id<GAXVerifierDelegate> _delegate;
	unsigned _mostRecentOutcome;
	NSMutableArray* _verifyQueue;
	GAXVerificationEventObject* _currentVerificationEvent;
	int _sessionAppCheckinAttempts;

}

@property (assign,nonatomic) id<GAXVerifierDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isVerifyingIntegrity; 
@property (assign,nonatomic) unsigned mostRecentOutcome;                                         //@synthesize mostRecentOutcome=_mostRecentOutcome - In the implementation block
@property (nonatomic,retain) NSMutableArray * verifyQueue;                                       //@synthesize verifyQueue=_verifyQueue - In the implementation block
@property (nonatomic,retain) GAXVerificationEventObject * currentVerificationEvent;              //@synthesize currentVerificationEvent=_currentVerificationEvent - In the implementation block
@property (assign,nonatomic) int sessionAppCheckinAttempts;                                      //@synthesize sessionAppCheckinAttempts=_sessionAppCheckinAttempts - In the implementation block
-(void)verifyIntegrityWithEvent:(unsigned)arg1 ;
-(void)springBoardDidRelaunch;
-(void)didFinishAppLaunchAttemptWithConfiguration:(unsigned)arg1 errorMessage:(id)arg2 ;
-(unsigned)mostRecentOutcome;
-(char)isVerifyingIntegrity;
-(void)setMostRecentOutcome:(unsigned)arg1 ;
-(int)sessionAppCheckinAttempts;
-(void)setSessionAppCheckinAttempts:(int)arg1 ;
-(NSMutableArray *)verifyQueue;
-(void)setVerifyQueue:(NSMutableArray *)arg1 ;
-(void)setCurrentVerificationEvent:(GAXVerificationEventObject *)arg1 ;
-(void)verifyIntegrityWithEvent:(unsigned)arg1 afterDelay:(double)arg2 ;
-(void)_beginProcessingEventsIfNeeded;
-(void)_didFinishVerifyingCurrentEventWithOutcome:(unsigned)arg1 error:(id)arg2 ;
-(void)_processNextEventInQueue;
-(void)_verifyWithEventObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(GAXVerificationEventObject *)currentVerificationEvent;
-(void)_shouldAttemptLaunchOfSessionAppWithEvent:(unsigned)arg1 gaxState:(SCD_Struct_GA1)arg2 completion:(/*^block*/id)arg3 ;
-(char)_shouldForceAppRelaunchWithVerifyEvent:(unsigned)arg1 ;
-(char)_appWithIdentifierIsInstalledOnDevice:(id)arg1 ;
-(id)displayStringForOutcome:(unsigned)arg1 ;
-(void)outcome:(unsigned)arg1 isError:(char*)arg2 isIndeterminate:(char*)arg3 ;
-(void)setDelegate:(id<GAXVerifierDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<GAXVerifierDelegate>)delegate;
@end

