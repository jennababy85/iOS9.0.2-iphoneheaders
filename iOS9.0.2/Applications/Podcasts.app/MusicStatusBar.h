/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStatusBar.h>

@protocol MusicNowPlayingAtmosphericStatusBarDelegate;
@interface MusicStatusBar : UIStatusBar {

	id<MusicNowPlayingAtmosphericStatusBarDelegate> __music_statusBarDelegate;

}

@property (assign,nonatomic,__weak) id<MusicNowPlayingAtmosphericStatusBarDelegate> _music_statusBarDelegate;              //@synthesize _music_statusBarDelegate=__music_statusBarDelegate - In the implementation block
-(void)requestStyle:(int)arg1 animationParameters:(id)arg2 ;
-(id<MusicNowPlayingAtmosphericStatusBarDelegate>)_music_statusBarDelegate;
-(void)set_music_statusBarDelegate:(id<MusicNowPlayingAtmosphericStatusBarDelegate>)arg1 ;
@end
