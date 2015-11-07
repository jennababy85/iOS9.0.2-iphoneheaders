/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <SpringBoardFoundation/SBFButton.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <libobjc.A.dylib/SBUIControlCenterControl.h>

@protocol SBUIControlCenterButtonDelegate;
@class UIVisualEffect, UIImageView, UIVisualEffectView, UIImage, NSString;

@interface SBUIControlCenterButton : SBFButton <_UISettingsKeyObserver, SBUIControlCenterControl> {

	UIEdgeInsets _bgCapInsets;
	UIVisualEffect* _normalStateEffect;
	UIVisualEffect* _highlightedStateEffect;
	UIVisualEffect* _disabledStateEffect;
	UIImageView* _backgroundImageView;
	UIImageView* _glyphImageView;
	UIVisualEffectView* _backgroundEffectView;
	char _useSmallButton;
	char _isCircleButton;
	char _isRectButton;
	id<SBUIControlCenterButtonDelegate> _delegate;
	UIImage* _normalBGImage;
	UIImage* _sourceGlyphImage;
	UIImage* _sourceSelectedGlyphImage;
	float _naturalHeight;

}

@property (assign,nonatomic) id<SBUIControlCenterButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char useSmallButton;                                       //@synthesize useSmallButton=_useSmallButton - In the implementation block
@property (assign,nonatomic) char isCircleButton;                                       //@synthesize isCircleButton=_isCircleButton - In the implementation block
@property (assign,nonatomic) char isRectButton;                                         //@synthesize isRectButton=_isRectButton - In the implementation block
@property (nonatomic,retain) UIImage * normalBGImage;                                   //@synthesize normalBGImage=_normalBGImage - In the implementation block
@property (nonatomic,retain) UIImage * sourceGlyphImage;                                //@synthesize sourceGlyphImage=_sourceGlyphImage - In the implementation block
@property (nonatomic,retain) UIImage * sourceSelectedGlyphImage;                        //@synthesize sourceSelectedGlyphImage=_sourceSelectedGlyphImage - In the implementation block
@property (assign,nonatomic) float naturalHeight;                                       //@synthesize naturalHeight=_naturalHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)controlAppearanceDidChangeForState:(int)arg1 ;
+(id)_circleBackgroundImageForSize:(CGSize)arg1 ;
+(id)_circleBackgroundImage;
+(id)_buttonWithBGImage:(id)arg1 glyphImage:(id)arg2 naturalHeight:(float)arg3 ;
+(id)_roundRectBackgroundImage;
+(id)_smallCircleBackgroundImage;
+(id)circularButton;
+(id)roundRectButton;
-(float)naturalHeight;
-(void)_updateEffects;
-(char)_drawingAsSelected;
-(int)_currentState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBUIControlCenterButtonDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SBUIControlCenterButtonDelegate>)delegate;
-(void)setEnabled:(char)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)setBackgroundImage:(id)arg1 ;
-(id)_backgroundImage;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2 ;
-(void)_updateForStateChange;
-(void)setIsCircleButton:(char)arg1 ;
-(void)setIsRectButton:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backgroundImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(float)arg4 ;
-(void)_setBackgroundImage:(id)arg1 naturalHeight:(float)arg2 ;
-(void)_updateForReduceTransparencyChange;
-(void)_pressAction;
-(void)setNormalBGImage:(UIImage *)arg1 ;
-(void)setSourceGlyphImage:(UIImage *)arg1 ;
-(void)setSourceSelectedGlyphImage:(UIImage *)arg1 ;
-(char)isCircleButton;
-(char)useSmallButton;
-(char)isRectButton;
-(CGRect)_rectForGlyph:(id)arg1 centeredInRect:(CGRect)arg2 ;
-(id)_controlStateStringFromState:(int)arg1 ;
-(void)_updateBackgroundForStateChange;
-(UIImage *)normalBGImage;
-(UIImage *)sourceGlyphImage;
-(void)_updateGlyphForStateChange;
-(UIImage *)sourceSelectedGlyphImage;
-(id)_glyphImageForState:(int)arg1 ;
-(id)_backgroundImageWithGlyphImage:(id)arg1 state:(int)arg2 ;
-(void)setNaturalHeight:(float)arg1 ;
-(void)setUseSmallButton:(char)arg1 ;
@end
