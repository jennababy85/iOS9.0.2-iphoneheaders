/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/XPCServices/com.apple.tonelibraryd.xpc/com.apple.tonelibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TLServiceAgentInterface <NSObject>
@required
-(void)retrieveCurrentTonePreferencesWithCompletionHandler:(/*^block*/id)arg1;
-(void)setCurrentToneIdentifier:(id)arg1 keyedByAccountIdentifier:(id)arg2 forPreferenceKey:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)retrieveUserGeneratedVibrationPatternsWithCompletionHandler:(/*^block*/id)arg1;
-(void)setUserGeneratedVibrationPatterns:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)removeAllUserGeneratedVibrationPatternsWithCompletionHandler:(/*^block*/id)arg1;

@end

