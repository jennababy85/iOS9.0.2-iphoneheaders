/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface BTTableCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	int _state;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(int)state;
-(void)setState:(int)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setDeviceStatePaired:(char)arg1 andConnected:(char)arg2 ;
-(void)setDeviceState:(int)arg1 ;
@end

