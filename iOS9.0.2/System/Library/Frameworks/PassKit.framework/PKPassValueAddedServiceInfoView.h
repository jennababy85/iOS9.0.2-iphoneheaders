/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class PKPass, PKPassSnapshotter, UILabel, UIImageView;

@interface PKPassValueAddedServiceInfoView : UIView {

	int _style;
	PKPass* _pass;
	PKPassSnapshotter* _snapshotter;
	UILabel* _labelView;
	UIImageView* _snapshotView;
	UILabel* _statusView;

}

@property (assign,nonatomic) int style;                  //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PKPass * pass;              //@synthesize pass=_pass - In the implementation block
-(id)_statusAttributedStringForStyle:(int)arg1 ;
-(CGSize)_snapshotSize;
-(void)_calculateViewMetricsForWidth:(float)arg1 labelSize:(CGSize*)arg2 statusSize:(CGSize*)arg3 baselineAdjustment:(float*)arg4 ;
-(float)_baselineDistance;
-(void)setStyle:(int)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPass:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)_labelAttributedStringForString:(id)arg1 ;
-(id)_statusFont;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)_labelFont;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
@end

