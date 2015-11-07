/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <MobileTimer/WorldClockViewBackgroundHost.h>

@protocol FullScreenWorldClockCollectionCellDelegate;
@class UIView, WorldClockView, NSString;

@interface FullScreenWorldClockCollectionCell : UICollectionViewCell <WorldClockViewBackgroundHost> {

	UIView* _clockBackground;
	WorldClockView* _clockView;
	id<FullScreenWorldClockCollectionCellDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * clockBackground;                                                  //@synthesize clockBackground=_clockBackground - In the implementation block
@property (nonatomic,readonly) WorldClockView * clockView;                                                //@synthesize clockView=_clockView - In the implementation block
@property (assign,nonatomic,__weak) id<FullScreenWorldClockCollectionCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dayTimeBackgroundColor;
+(id)nightTimeBackgroundColor;
-(WorldClockView *)clockView;
-(UIView *)clockBackground;
-(void)updateBackground:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FullScreenWorldClockCollectionCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FullScreenWorldClockCollectionCellDelegate>)delegate;
@end
