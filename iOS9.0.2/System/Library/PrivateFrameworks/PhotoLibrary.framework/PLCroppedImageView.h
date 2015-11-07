/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIImage;

@interface PLCroppedImageView : UIView {

	UIImageView* _imageView;
	CGRect _cropRect;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGRect cropRect; 
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImage *)image;
@end
