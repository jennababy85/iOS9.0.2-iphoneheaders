/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIImageDataConsumer.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, SKUIColorScheme;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying> {

	UIColor* _backgroundColor;
	CGSize _iconSize;
	SKUIColorScheme* _colorScheme;

}

@property (nonatomic,readonly) CGSize iconSize;                          //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
+(id)smartBannerConsumer;
+(id)giftComposePosterConsumer;
+(id)giftComposeLetterboxConsumer;
+(id)giftComposeConsumer;
+(id)giftResultConsumer;
+(id)giftThemePosterConsumer;
+(id)giftThemeLetterboxConsumer;
+(id)giftThemeConsumer;
+(id)lockupConsumerWithSize:(int)arg1 itemKind:(int)arg2 ;
+(id)consumerWithSize:(CGSize)arg1 ;
+(id)gridConsumer;
+(id)wishlistConsumer;
+(id)cardConsumer;
+(id)chartsConsumer;
+(id)updatesConsumer;
+(id)purchasedConsumer;
+(id)productPageConsumer;
+(id)swooshConsumer;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)imageSize;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)imageForImage:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
-(CGSize)iconSize;
@end

