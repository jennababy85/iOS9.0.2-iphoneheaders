/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKViewController.h>

@class UITableView, UISlider, UIView, UIButton, UISwitch;

@interface BEAppearanceViewController : BKViewController {

	UITableView* _tableView;
	UISlider* _brightnessSlider;
	UIView* _fontSizeButtons;
	UIButton* _sizeSmallerButton;
	UIButton* _sizeLargerButton;
	UIView* _sizeSeparatorLine;
	UISwitch* _scrollSwitch;

}

@property (assign,nonatomic) UITableView * tableView;                   //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) UISlider * brightnessSlider;               //@synthesize brightnessSlider=_brightnessSlider - In the implementation block
@property (assign,nonatomic) UIView * fontSizeButtons;                  //@synthesize fontSizeButtons=_fontSizeButtons - In the implementation block
@property (assign,nonatomic) UIButton * sizeSmallerButton;              //@synthesize sizeSmallerButton=_sizeSmallerButton - In the implementation block
@property (assign,nonatomic) UIButton * sizeLargerButton;               //@synthesize sizeLargerButton=_sizeLargerButton - In the implementation block
@property (assign,nonatomic) UIView * sizeSeparatorLine;                //@synthesize sizeSeparatorLine=_sizeSeparatorLine - In the implementation block
@property (assign,nonatomic) UISwitch * scrollSwitch;                   //@synthesize scrollSwitch=_scrollSwitch - In the implementation block
-(void)releaseViews;
-(void)increaseFontSize:(id)arg1 ;
-(void)decreaseFontSize:(id)arg1 ;
-(void)stylizeForTheme;
-(UISlider *)brightnessSlider;
-(UIView *)fontSizeButtons;
-(void)configureScrollSwitchCell:(id)arg1 ;
-(UIButton *)sizeSmallerButton;
-(UIButton *)sizeLargerButton;
-(UISwitch *)scrollSwitch;
-(UIView *)sizeSeparatorLine;
-(void)onScrollSwitch:(id)arg1 ;
-(void)updateBrightness;
-(void)changeBrightness:(id)arg1 ;
-(void)setBrightnessSlider:(UISlider *)arg1 ;
-(void)setFontSizeButtons:(UIView *)arg1 ;
-(void)setSizeSmallerButton:(UIButton *)arg1 ;
-(void)setSizeLargerButton:(UIButton *)arg1 ;
-(void)setSizeSeparatorLine:(UIView *)arg1 ;
-(void)setScrollSwitch:(UISwitch *)arg1 ;
-(id)tableViewHeaderView;
-(void)loadView;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

