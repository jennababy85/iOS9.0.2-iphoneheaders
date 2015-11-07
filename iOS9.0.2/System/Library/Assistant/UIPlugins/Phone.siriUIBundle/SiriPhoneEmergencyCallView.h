/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Phone/Phone-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SiriPhoneEmergencyCallView : UIView {

	NSString* _countdownText;
	UILabel* _countdownLabel;

}

@property (nonatomic,copy) NSString * countdownText;                  //@synthesize countdownText=_countdownText - In the implementation block
@property (nonatomic,readonly) UILabel * countdownLabel;              //@synthesize countdownLabel=_countdownLabel - In the implementation block
-(void)setCountdownText:(NSString *)arg1 ;
-(UILabel *)countdownLabel;
-(NSString *)countdownText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
