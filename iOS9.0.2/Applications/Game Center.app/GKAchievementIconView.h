/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIImageView.h>

@class GKAchievement;

@interface GKAchievementIconView : UIImageView {

	char _isDetail;
	GKAchievement* _achievement;
	GKAchievement* _localAchievement;

}

@property (assign,nonatomic) char isDetail;                                 //@synthesize isDetail=_isDetail - In the implementation block
@property (nonatomic,retain) GKAchievement * achievement;                   //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;              //@synthesize localAchievement=_localAchievement - In the implementation block
+(id)progressSourceDetail;
+(id)progressSource;
-(void)setLocalAchievement:(GKAchievement *)arg1 ;
-(void)setupForAchievement:(id)arg1 localAchievement:(id)arg2 ;
-(GKAchievement *)localAchievement;
-(void)configureImage;
-(id)processProgressImageForAchievementImage:(id)arg1 ;
-(id)progressIdentifierForAchievement:(id)arg1 ;
-(void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)invalidateIntrinsicContentSize;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(char)isDetail;
-(void)setIsDetail:(char)arg1 ;
-(GKAchievement *)achievement;
@end

