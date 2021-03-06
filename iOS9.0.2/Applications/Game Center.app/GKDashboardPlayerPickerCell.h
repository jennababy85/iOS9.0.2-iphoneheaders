/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/GKDashboardPlayerCell.h>

@class UIImageView, UIButton;

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell {

	char _selectable;
	UIImageView* _selectionView;
	UIButton* _selectionButton;

}

@property (assign,getter=isSelectable,nonatomic) char selectable;              //@synthesize selectable=_selectable - In the implementation block
@property (assign,nonatomic) UIImageView * selectionView;                      //@synthesize selectionView=_selectionView - In the implementation block
@property (assign,nonatomic) UIButton * selectionButton;                       //@synthesize selectionButton=_selectionButton - In the implementation block
-(void)setStatusWithAchievementEarnedPoints:(int)arg1 andDate:(id)arg2 ;
-(UIButton *)selectionButton;
-(void)setSelectionButton:(UIButton *)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)awakeFromNib;
-(void)setSelected:(char)arg1 ;
-(UIImageView *)selectionView;
-(void)setSelectionView:(UIImageView *)arg1 ;
-(void)setSelectable:(char)arg1 ;
-(char)isSelectable;
@end

