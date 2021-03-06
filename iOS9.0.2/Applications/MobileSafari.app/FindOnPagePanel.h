/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/BrowserPanel.h>
#import <UIKit/UIKeyInput.h>

@class FindOnPageToolbar, UITextField, NSString;

@interface FindOnPagePanel : UIView <BrowserPanel, UIKeyInput> {

	char _requiresKeyboard;
	char _usesNarrowLayout;
	FindOnPageToolbar* _toolbar;

}

@property (nonatomic,readonly) UITextField * findTextField; 
@property (nonatomic,readonly) FindOnPageToolbar * toolbar; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(int)panelType;
-(char)shouldHideOnSuspend;
-(UITextField *)findTextField;
-(void)_advance:(id)arg1 ;
-(void)setUsesNarrowLayout:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)keyCommands;
-(char)canBecomeFirstResponder;
-(void)didMoveToSuperview;
-(char)_requiresKeyboardWhenFirstResponder;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(FindOnPageToolbar *)toolbar;
-(id)inputAccessoryView;
-(void)updateUI;
-(void)_dismiss:(id)arg1 ;
@end

