/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAFilter, UIColor, UIImage;

@interface TabBarStyle : NSObject {

	int _barStyle;
	char _usesLightControls;
	CAFilter* _tintFilter;
	float _overlayAlpha;
	float _tintAlpha;
	UIColor* _backgroundColor;
	UIColor* _itemTitleColor;
	float _itemActiveTitleAlpha;
	float _itemActiveTitleOverlayAlpha;
	CAFilter* _itemActiveTitleCompositingFilter;
	float _itemInactiveTitleAlpha;
	float _itemInactiveTitleOverlayAlpha;
	CAFilter* _itemInactiveTitleCompositingFilter;
	float _itemBorderAlpha;
	float _itemBorderOverlayAlpha;
	float _itemCloseButtonAlpha;
	UIImage* _itemCloseButtonImage;
	UIImage* _itemCloseButtonOverlayImage;
	CAFilter* _itemCloseButtonOverlayCompositingFilter;
	CAFilter* _itemForegroundCompositingFilter;
	CAFilter* _itemOverlayCompositingFilter;

}

@property (nonatomic,readonly) char usesLightControls;                                          //@synthesize usesLightControls=_usesLightControls - In the implementation block
@property (nonatomic,readonly) CAFilter * tintFilter;                                           //@synthesize tintFilter=_tintFilter - In the implementation block
@property (nonatomic,readonly) float overlayAlpha;                                              //@synthesize overlayAlpha=_overlayAlpha - In the implementation block
@property (nonatomic,readonly) float tintAlpha;                                                 //@synthesize tintAlpha=_tintAlpha - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * itemTitleColor;                                        //@synthesize itemTitleColor=_itemTitleColor - In the implementation block
@property (nonatomic,readonly) float itemActiveTitleAlpha;                                      //@synthesize itemActiveTitleAlpha=_itemActiveTitleAlpha - In the implementation block
@property (nonatomic,readonly) float itemActiveTitleOverlayAlpha;                               //@synthesize itemActiveTitleOverlayAlpha=_itemActiveTitleOverlayAlpha - In the implementation block
@property (nonatomic,readonly) CAFilter * itemActiveTitleCompositingFilter;                     //@synthesize itemActiveTitleCompositingFilter=_itemActiveTitleCompositingFilter - In the implementation block
@property (nonatomic,readonly) float itemInactiveTitleAlpha;                                    //@synthesize itemInactiveTitleAlpha=_itemInactiveTitleAlpha - In the implementation block
@property (nonatomic,readonly) float itemInactiveTitleOverlayAlpha;                             //@synthesize itemInactiveTitleOverlayAlpha=_itemInactiveTitleOverlayAlpha - In the implementation block
@property (nonatomic,readonly) CAFilter * itemInactiveTitleCompositingFilter;                   //@synthesize itemInactiveTitleCompositingFilter=_itemInactiveTitleCompositingFilter - In the implementation block
@property (nonatomic,readonly) float itemBorderAlpha;                                           //@synthesize itemBorderAlpha=_itemBorderAlpha - In the implementation block
@property (nonatomic,readonly) float itemBorderOverlayAlpha;                                    //@synthesize itemBorderOverlayAlpha=_itemBorderOverlayAlpha - In the implementation block
@property (nonatomic,readonly) float itemCloseButtonAlpha;                                      //@synthesize itemCloseButtonAlpha=_itemCloseButtonAlpha - In the implementation block
@property (nonatomic,readonly) UIImage * itemCloseButtonImage;                                  //@synthesize itemCloseButtonImage=_itemCloseButtonImage - In the implementation block
@property (nonatomic,readonly) UIImage * itemCloseButtonOverlayImage;                           //@synthesize itemCloseButtonOverlayImage=_itemCloseButtonOverlayImage - In the implementation block
@property (nonatomic,readonly) CAFilter * itemCloseButtonOverlayCompositingFilter;              //@synthesize itemCloseButtonOverlayCompositingFilter=_itemCloseButtonOverlayCompositingFilter - In the implementation block
@property (nonatomic,readonly) CAFilter * itemForegroundCompositingFilter;                      //@synthesize itemForegroundCompositingFilter=_itemForegroundCompositingFilter - In the implementation block
@property (nonatomic,readonly) CAFilter * itemOverlayCompositingFilter;                         //@synthesize itemOverlayCompositingFilter=_itemOverlayCompositingFilter - In the implementation block
+(id)securityWarningStyle;
+(id)privateBrowsingStyle;
+(id)normalStyle;
+(id)_closeButtonWithColor:(id)arg1 ;
-(float)overlayAlpha;
-(UIColor *)itemTitleColor;
-(float)itemActiveTitleAlpha;
-(float)itemActiveTitleOverlayAlpha;
-(CAFilter *)itemActiveTitleCompositingFilter;
-(float)itemInactiveTitleAlpha;
-(float)itemInactiveTitleOverlayAlpha;
-(CAFilter *)itemInactiveTitleCompositingFilter;
-(float)itemBorderAlpha;
-(float)itemBorderOverlayAlpha;
-(float)itemCloseButtonAlpha;
-(UIImage *)itemCloseButtonImage;
-(UIImage *)itemCloseButtonOverlayImage;
-(CAFilter *)itemCloseButtonOverlayCompositingFilter;
-(CAFilter *)itemForegroundCompositingFilter;
-(CAFilter *)itemOverlayCompositingFilter;
-(char)usesLightControls;
-(UIColor *)backgroundColor;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(CAFilter *)tintFilter;
-(float)tintAlpha;
@end
