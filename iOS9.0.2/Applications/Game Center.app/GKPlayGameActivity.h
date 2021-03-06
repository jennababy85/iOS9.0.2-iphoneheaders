/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class GKGame, GKPlayer;

@interface GKPlayGameActivity : UIActivity {

	GKGame* _game;
	GKPlayer* _player;

}

@property (nonatomic,retain) GKGame * game;                  //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;              //@synthesize player=_player - In the implementation block
+(id)playGameActivityWithPlayer:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
-(void)dealloc;
-(id)activityType;
-(id)_activityImage;
-(id)activityTitle;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(char)_canPerformWithSuppliedActivityItems:(id)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(GKGame *)game;
@end

