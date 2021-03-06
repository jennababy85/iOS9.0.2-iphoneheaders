/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <SpringBoard/SBAppViewBackgroundView.h>

@protocol SBAppViewBackgroundView <NSObject>
@property (assign,nonatomic) char hasDiscreteWallpaperEffect; 
@property (assign,nonatomic) int wallpaperStyle; 
@optional
-(int)wallpaperStyle;
-(void)setWallpaperStyle:(int)arg1;
-(char)hasDiscreteWallpaperEffect;
-(void)setHasDiscreteWallpaperEffect:(char)arg1;

@end


@class NSString;

@interface SBAppViewBackgroundView : UIView <SBAppViewBackgroundView> {

	char _hasDiscreteWallpaperEffect;
	int _wallpaperStyle;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasDiscreteWallpaperEffect;              //@synthesize hasDiscreteWallpaperEffect=_hasDiscreteWallpaperEffect - In the implementation block
@property (assign,nonatomic) int wallpaperStyle;                           //@synthesize wallpaperStyle=_wallpaperStyle - In the implementation block
-(int)_backgroundStyle;
-(int)wallpaperStyle;
-(void)setWallpaperStyle:(int)arg1 ;
-(void)_recalulateBackgroundColor;
-(char)hasDiscreteWallpaperEffect;
-(void)setHasDiscreteWallpaperEffect:(char)arg1 ;
-(NSString *)description;
-(char)_isTranslucent;
@end

