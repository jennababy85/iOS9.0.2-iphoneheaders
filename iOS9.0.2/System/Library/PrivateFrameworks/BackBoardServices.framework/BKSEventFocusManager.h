/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKSEventFocusIPCInterface;
@class NSString, NSMutableSet, NSMutableDictionary;

@interface BKSEventFocusManager : NSObject {

	id<BKSEventFocusIPCInterface> _ipcInterface;
	char _needsFlush;
	char _systemAppControlsFocusOnMainDisplay;
	int _pid;
	NSString* _clientIdentifier;
	NSMutableSet* _currentState;
	NSMutableDictionary* _pendingStatesByPriority;

}

@property (assign,nonatomic) int pid;                                                             //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                           //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * currentState;                                //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * pendingStatesByPriority;              //@synthesize pendingStatesByPriority=_pendingStatesByPriority - In the implementation block
@property (assign,nonatomic) char needsFlush;                                                     //@synthesize needsFlush=_needsFlush - In the implementation block
@property (assign,nonatomic) char systemAppControlsFocusOnMainDisplay;                            //@synthesize systemAppControlsFocusOnMainDisplay=_systemAppControlsFocusOnMainDisplay - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)flush;
-(NSMutableSet *)currentState;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(char)needsFlush;
-(void)setNeedsFlush:(char)arg1 ;
-(id)initWithIPCInterface:(id)arg1 ;
-(void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3 ;
-(void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)pendingStatesByPriority;
-(void)reallyFlushWithSet:(id)arg1 ;
-(void)setSystemAppControlsFocusOnMainDisplay:(char)arg1 ;
-(char)systemAppControlsFocusOnMainDisplay;
-(void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2 ;
-(NSString *)clientIdentifier;
-(void)setPid:(int)arg1 ;
-(int)pid;
@end

