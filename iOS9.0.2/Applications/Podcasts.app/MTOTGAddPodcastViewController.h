/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTBasePodcastListViewController.h>

@class NSString, NSSet;

@interface MTOTGAddPodcastViewController : MTBasePodcastListViewController {

	NSString* _playlistUuid;
	NSSet* _addedEpisodeUuids;

}

@property (nonatomic,copy) NSString * playlistUuid;                //@synthesize playlistUuid=_playlistUuid - In the implementation block
@property (nonatomic,copy) NSSet * addedEpisodeUuids;              //@synthesize addedEpisodeUuids=_addedEpisodeUuids - In the implementation block
-(id)metricsName;
-(void)restoreSelection;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setPlaylistUuid:(NSString *)arg1 ;
-(NSString *)playlistUuid;
-(void)setAddedEpisodeUuids:(NSSet *)arg1 ;
-(NSSet *)addedEpisodeUuids;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
@end

