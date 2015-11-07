/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTBaseFeedManager.h>

@interface MTFeedUpdateManager : MTBaseFeedManager
-(void)updateAllPodcastsForBackgroundFetch:(/*^block*/id)arg1 ;
-(void)updateAllPodcasts:(/*^block*/id)arg1 ;
-(char)_updatePodcastWithUUID:(id)arg1 userInitiated:(char)arg2 useBackgroundFetch:(char)arg3 ;
-(int)_updateAllPodcastsUserInitiated:(char)arg1 useBackgroundFetch:(char)arg2 ;
-(int)_updatePodcastsWithUUIDs:(id)arg1 userInitiated:(char)arg2 useBackgroundFetch:(char)arg3 ;
-(char)isPodcastUpdatable:(id)arg1 userInitiated:(char)arg2 ;
-(void)updatePodcastsWithUUIDs:(id)arg1 userInitiated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePodcastWithUUID:(id)arg1 userInitiated:(char)arg2 completion:(/*^block*/id)arg3 ;
@end
