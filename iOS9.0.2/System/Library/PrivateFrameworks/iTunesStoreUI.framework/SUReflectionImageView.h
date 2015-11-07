/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, SUReflectionView;

@interface SUReflectionImageView : UIView {

	float _reflectionHeight;
	float _spacing;
	float _reflectionAlpha;
	char _useImageSize;
	unsigned _nonSquareImage : 1;
	UIImageView* _imageView;
	SUReflectionView* _reflection;

}

@property (assign,nonatomic) float reflectionSpacing;              //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) char nonSquareImage; 
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithReflectionHeight:(float)arg1 spacing:(float)arg2 ;
-(char)nonSquareImage;
-(void)setNonSquareImage:(char)arg1 ;
-(void)setReflectionAlphaWhenVisible:(float)arg1 ;
-(void)setReflectionVisible:(char)arg1 ;
-(void)setUseImageSize:(char)arg1 ;
-(float)reflectionSpacing;
-(void)setReflectionSpacing:(float)arg1 ;
@end
