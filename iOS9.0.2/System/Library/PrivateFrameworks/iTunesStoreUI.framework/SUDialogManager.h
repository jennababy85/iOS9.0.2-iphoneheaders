/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISSingleton.h>
#import <libobjc.A.dylib/SUDialogDelegate.h>

@class NSMutableArray, NSString;

@interface SUDialogManager : NSObject <ISSingleton, SUDialogDelegate> {

	NSMutableArray* _dialogs;

}

@property (nonatomic,readonly) int numberOfPendingDialogs; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)newDialogWithError:(id)arg1 ;
+(void)setSharedInstance:(id)arg1 ;
-(void)dealloc;
-(char)presentDialog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(char)presentDialog:(id)arg1 ;
-(int)numberOfPendingDialogs;
-(void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(int)arg2 ;
-(char)_haveEquivalentDialog:(id)arg1 ;
-(void)_finishDialog:(id)arg1 withButtonIndex:(int)arg2 ;
-(char)presentDialogForError:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dialog:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)dialogDidCancel:(id)arg1 ;
-(char)presentDialogForError:(id)arg1 ;
@end
