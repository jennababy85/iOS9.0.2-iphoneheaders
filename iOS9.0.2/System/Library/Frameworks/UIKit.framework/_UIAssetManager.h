/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class _UICache, CUICatalog, NSString, NSBundle, NSMapTable, CUIMutableCatalog, UITraitCollection;

@interface _UIAssetManager : NSObject {

	_UICache* _imageCache;
	CUICatalog* _catalog;
	NSString* _assetManagerName;
	int _preferredIdiom;
	float _preferredScale;
	unsigned _preferredIdiomSubtype;
	NSBundle* _bundle;
	NSMapTable* _assetMap;
	CUIMutableCatalog* _runtimeCatalog;
	long onceToken_runtimeCatalog;
	UITraitCollection* _preferredTraitCollection;
	_UIAssetManager* _starkAssetManager;
	long _starkAssetManagerOnceToken;
	char _isStarkAssetManager;
	char _isStandaloneAssetManager;
	int _assetMapLock;
	char _managingUIKitAssets;
	_UIAssetManager* _nextAssetManager;

}

@property (nonatomic,retain) _UIAssetManager * nextAssetManager;                                  //@synthesize nextAssetManager=_nextAssetManager - In the implementation block
@property (assign,nonatomic) float preferredScale;                                                //@synthesize preferredScale=_preferredScale - In the implementation block
@property (nonatomic,retain) UITraitCollection * preferredTraitCollection;                        //@synthesize preferredTraitCollection=_preferredTraitCollection - In the implementation block
@property (nonatomic,readonly) NSString * carFileName; 
@property (nonatomic,readonly) CUIMutableCatalog * runtimeCatalog; 
@property (nonatomic,readonly) NSBundle * bundle;                                                 //@synthesize bundle=_bundle - In the implementation block
@property (getter=_managingUIKitAssets,nonatomic,readonly) char managingUIKitAssets;              //@synthesize managingUIKitAssets=_managingUIKitAssets - In the implementation block
+(id)assetManagerForBundle:(id)arg1 ;
+(id)newAssetNamed:(id)arg1 fromBundle:(id)arg2 ;
+(void)_dropResourceReferencesForURL:(id)arg1 ;
+(char)validStackImageFile:(id)arg1 ;
+(int)_userInterfaceIdiomForDeviceClass:(unsigned)arg1 ;
+(float)_watchScreenScale;
+(void)_saveAssetManager:(id)arg1 forBundle:(id)arg2 lock:(char)arg3 ;
+(id)_assetManagerCache;
+(void)_convertTraitCollection:(id)arg1 toCUIScale:(float*)arg2 CUIIdiom:(int*)arg3 UIKitIdiom:(int*)arg4 subtype:(int*)arg5 ;
+(id)sharedRuntimeAssetMap;
+(id)sharedRuntimeCatalog;
-(void)dealloc;
-(id)description;
-(id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(int)arg3 ;
-(id)initManagerWithoutCatalogWithName:(id)arg1 ;
-(id)imageNamed:(id)arg1 withTrait:(id)arg2 ;
-(id)imageNamed:(id)arg1 ;
-(id)stackImageWithContentsOfFile:(id)arg1 forTraitCollection:(id)arg2 ;
-(id)dataNamed:(id)arg1 ;
-(void)setPreferredScale:(float)arg1 ;
-(void)setPreferredTraitCollection:(UITraitCollection *)arg1 ;
-(char)_imageBelongsToUIKit:(id)arg1 ;
-(void)setNextAssetManager:(_UIAssetManager *)arg1 ;
-(NSBundle *)bundle;
-(id)_initWithName:(id)arg1 inBundle:(id)arg2 idiom:(int)arg3 lock:(char)arg4 allowMissingCatalog:(char)arg5 ;
-(void)_clearCachedResources:(id)arg1 ;
-(void)_disconnectImageAssets;
-(void)disableCacheFlushing;
-(id)imageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(unsigned)arg4 cachingOptions:(unsigned)arg5 sizeClassPair:(SCD_Struct_UI32)arg6 attachCatalogImage:(char)arg7 ;
-(char)_starkAssetManager;
-(float)preferredScale;
-(UITraitCollection *)preferredTraitCollection;
-(id)_assetForName:(id)arg1 shouldCreateWhenNotPresent:(char)arg2 ;
-(id)imageNamed:(id)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(unsigned)arg4 ;
-(id)imageNamed:(id)arg1 idiom:(int)arg2 subtype:(unsigned)arg3 ;
-(id)imageNamed:(id)arg1 idiom:(int)arg2 ;
-(id)_assetFromMapForName:(id)arg1 ;
-(id)_assetFromMapForName:(id)arg1 lock:(char)arg2 ;
-(void)_performBlockWithAssetLock:(/*^block*/id)arg1 ;
-(id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 lock:(char)arg3 ;
-(void)_clearCachedResources;
-(id)initWithURL:(id)arg1 idiom:(int)arg2 error:(id*)arg3 ;
-(id)_catalog;
-(NSString *)carFileName;
-(id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 ;
-(CUIMutableCatalog *)runtimeCatalog;
-(_UIAssetManager *)nextAssetManager;
-(char)_managingUIKitAssets;
@end

