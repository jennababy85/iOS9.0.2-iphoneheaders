/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@protocol MNTraceControlViewDelegate;
@class UIButton, UILabel;

@interface MNTraceControlView : UIView {

	id<MNTraceControlViewDelegate> _delegate;
	char _isPlaying;
	double _playSpeed;
	char _isLogging;
	UIButton* _jumpBackButton;
	UIButton* _playButton;
	UIButton* _ffButton;
	UIButton* _frButton;
	UIButton* _bookmarksButton;
	UIButton* _testLoggingButton;
	UILabel* _timePositionLabel;

}

@property (assign,nonatomic,__weak) id<MNTraceControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char isPlaying;                                              //@synthesize isPlaying=_isPlaying - In the implementation block
@property (assign,nonatomic) double playSpeed;                                            //@synthesize playSpeed=_playSpeed - In the implementation block
@property (assign,nonatomic) char isLogging;                                              //@synthesize isLogging=_isLogging - In the implementation block
@property (nonatomic,readonly) UIButton * jumpBackButton;                                 //@synthesize jumpBackButton=_jumpBackButton - In the implementation block
@property (nonatomic,readonly) UIButton * playButton;                                     //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,readonly) UIButton * ffButton;                                       //@synthesize ffButton=_ffButton - In the implementation block
@property (nonatomic,readonly) UIButton * frButton;                                       //@synthesize frButton=_frButton - In the implementation block
@property (nonatomic,readonly) UIButton * bookmarksButton;                                //@synthesize bookmarksButton=_bookmarksButton - In the implementation block
-(void)_ffButtonPressed:(id)arg1 ;
-(void)_frButtonPressed:(id)arg1 ;
-(UIButton *)bookmarksButton;
-(void)setIsPlaying:(char)arg1 ;
-(void)setTimePosition:(double)arg1 ;
-(unsigned)_currentPlaySpeedIndex;
-(double)playSpeed;
-(void)_jumpBackButtonPressed:(id)arg1 ;
-(void)setPlaySpeed:(double)arg1 ;
-(UIButton *)frButton;
-(void)_testLoggingButtonPressed:(id)arg1 ;
-(void)_bookmarksButtonPressed:(id)arg1 ;
-(UIButton *)ffButton;
-(void)setIsLogging:(char)arg1 ;
-(UIButton *)jumpBackButton;
-(char)isPlaying;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNTraceControlViewDelegate>)arg1 ;
-(id<MNTraceControlViewDelegate>)delegate;
-(void)_playButtonPressed:(id)arg1 ;
-(UIButton *)playButton;
-(char)isLogging;
@end

