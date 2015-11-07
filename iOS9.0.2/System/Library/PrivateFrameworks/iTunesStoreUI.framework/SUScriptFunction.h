/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebScriptObject, NSLock, SUScriptObject;

@interface SUScriptFunction : NSObject {

	WebScriptObject* _function;
	NSLock* _lock;
	SUScriptObject* _thisObject;

}

@property (retain) WebScriptObject * scriptObject; 
@property (__weak) id thisObject; 
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(char)callWithArguments:(id)arg1 ;
-(id)initWithScriptObject:(id)arg1 ;
-(void)setThisObject:(id)arg1 ;
-(WebScriptObject *)scriptObject;
-(void)setScriptObject:(WebScriptObject *)arg1 ;
-(id)callSynchronouslyWithArguments:(id)arg1 ;
-(char)callWithArguments:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_copyAdjustedArgumentsForArguments:(id)arg1 ;
-(id)thisObject;
@end
