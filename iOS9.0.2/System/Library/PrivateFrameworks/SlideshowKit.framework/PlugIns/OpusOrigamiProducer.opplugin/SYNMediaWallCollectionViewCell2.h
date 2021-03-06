/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol MZMediaManagement;
@class MCAssetVideo, SPPlayerViewController, SYNMediaWallCollectionViewCellMainView2, UIImageView, UIView, UIColor;

@interface SYNMediaWallCollectionViewCell2 : UICollectionViewCell {

	MCAssetVideo* _mediaItem;
	SPPlayerViewController* _mediaWallViewController;
	char _isFiltered;
	SYNMediaWallCollectionViewCellMainView2* _mainView;
	UIImageView* _imageView;
	UIImageView* _badgeView;
	UIImageView* _commentsView;
	UIView* _videoLabelView;
	UIColor* _borderColor;
	UIColor* _selectedBorderColor;
	id<MZMediaManagement> _assetManagementDelegate;

}

@property (retain) MCAssetVideo * mediaItem;                                   //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign) id<MZMediaManagement> assetManagementDelegate;              //@synthesize assetManagementDelegate=_assetManagementDelegate - In the implementation block
@property (assign) char isFiltered;                                            //@synthesize isFiltered=_isFiltered - In the implementation block
@property (assign,nonatomic) UIColor * borderColor;                            //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) UIColor * selectedBorderColor;                    //@synthesize selectedBorderColor=_selectedBorderColor - In the implementation block
-(void)blinkSelection;
-(void)animatePop;
-(void)setUseShadow:(char)arg1 ;
-(void)updateImageContentsRect;
-(void)updateCommentsHeader;
-(CGRect)_contentsRectForRegionOfInterestContainerBounds:(CGRect)arg1 ;
-(UIColor *)selectedBorderColor;
-(void)updateVideoFooter;
-(void)setSelectedBorderColor:(UIColor *)arg1 ;
-(void)setImage:(id)arg1 animated:(char)arg2 ;
-(MCAssetVideo *)mediaItem;
-(void)setMediaItem:(MCAssetVideo *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)image;
-(id)snapshot;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(char)hasImage;
-(void)updateShadowPath;
-(char)isFiltered;
-(id<MZMediaManagement>)assetManagementDelegate;
-(void)setAssetManagementDelegate:(id<MZMediaManagement>)arg1 ;
-(void)setBadge:(id)arg1 ;
-(void)setIsFiltered:(char)arg1 ;
-(CGRect)imageContentsRect;
-(void)setAntialiasing:(char)arg1 ;
@end

