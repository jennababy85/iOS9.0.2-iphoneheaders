/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBSceneManagerInternalObserver <FBSceneManagerObserver>
@optional
-(void)sceneManagerWillBeginSceneUpdateSynchronization:(id)arg1;
-(void)sceneManagerDidEndSceneUpdateSynchronization:(id)arg1;
-(void)sceneManager:(id)arg1 amendSettings:(id)arg2 forUpdatingScene:(id)arg3;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;

@end

