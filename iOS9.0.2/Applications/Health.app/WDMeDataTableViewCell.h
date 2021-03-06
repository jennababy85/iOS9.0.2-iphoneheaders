/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIButton, UIColor, NSString, UIView;

@interface WDMeDataTableViewCell : UITableViewCell {

	UILabel* _displayNameLabel;
	UILabel* _displayValueLabel;
	UIButton* _clearButton;
	UIColor* _normalDisplayValueColor;
	UIColor* _selectedDisplayValueColor;
	char _shouldUseSelectedColorForDisplayValue;
	char _shouldDisplayClearButtonDuringEditing;
	NSString* _displayName;
	NSString* _displayValue;
	UIView* _inputView;
	UIView* _inputAccessoryView;

}

@property (nonatomic,retain) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * displayValue;                                 //@synthesize displayValue=_displayValue - In the implementation block
@property (assign,nonatomic) char shouldUseSelectedColorForDisplayValue;              //@synthesize shouldUseSelectedColorForDisplayValue=_shouldUseSelectedColorForDisplayValue - In the implementation block
@property (assign,nonatomic) char shouldDisplayClearButtonDuringEditing;              //@synthesize shouldDisplayClearButtonDuringEditing=_shouldDisplayClearButtonDuringEditing - In the implementation block
@property (nonatomic,retain) UIView * inputView;                                      //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                             //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
-(void)addClearButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeClearButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setDisplayValue:(NSString *)arg1 ;
-(void)setShouldUseSelectedColorForDisplayValue:(char)arg1 ;
-(void)setShouldDisplayClearButtonDuringEditing:(char)arg1 ;
-(void)_updateClearButtonState;
-(char)shouldDisplayClearButtonDuringEditing;
-(char)shouldUseSelectedColorForDisplayValue;
-(NSString *)displayValue;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(char)becomeFirstResponder;
-(char)canBecomeFirstResponder;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(UIView *)inputAccessoryView;
-(UIView *)inputView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(void)setInputView:(UIView *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)_setupUI;
@end

