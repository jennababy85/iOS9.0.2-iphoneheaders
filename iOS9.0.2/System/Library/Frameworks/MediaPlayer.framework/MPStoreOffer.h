/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSURL;

@interface MPStoreOffer : NSObject {

	NSDictionary* _offerDictionary;
	MPStoreOffer* _regularPriceOffer;
	NSDictionary* _mediaAssetDictionary;
	unsigned long long _entityPersistentID;
	int _entityType;
	NSString* _entityTitle;
	int _passType;

}

@property (nonatomic,readonly) int entityType;                                        //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) unsigned long long entityPersistentID;                 //@synthesize entityPersistentID=_entityPersistentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityTitle;                           //@synthesize entityTitle=_entityTitle - In the implementation block
@property (nonatomic,readonly) int buyType; 
@property (nonatomic,readonly) int passType;                                          //@synthesize passType=_passType - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyParameters; 
@property (nonatomic,copy,readonly) NSString * displayTitle; 
@property (nonatomic,copy,readonly) NSString * actionDisplayTitle; 
@property (nonatomic,readonly) char requiresConfirmation; 
@property (nonatomic,copy,readonly) NSString * displayPrice; 
@property (nonatomic,readonly) float price; 
@property (nonatomic,copy,readonly) NSString * regularPriceDisplayPrice; 
@property (nonatomic,readonly) unsigned long long downloadSize; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) double previewDuration; 
+(int)bestOfferVariantInOfferDictionaries:(id)arg1 withPreferredVariant:(int)arg2 ;
+(void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variant:(int)arg4 ;
+(int)buyTypeForOfferDictionary:(id)arg1 regularPriceOffer:(id)arg2 ;
+(id)offerVariantResponseKeyForOfferVariant:(int)arg1 ;
+(void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variantString:(id)arg4 ;
+(id)_priceForOfferDictionary:(id)arg1 ;
-(double)previewDuration;
-(NSURL *)previewURL;
-(int)buyType;
-(id)initWithStoreOfferDictionary:(id)arg1 regularPriceOfferDictionary:(id)arg2 passType:(int)arg3 entityType:(int)arg4 persistentID:(unsigned long long)arg5 title:(id)arg6 ;
-(int)passType;
-(char)_isBuy;
-(NSString *)actionDisplayTitle;
-(NSString *)displayPrice;
-(id)buyURL;
-(char)requiresConfirmation;
-(NSString *)regularPriceDisplayPrice;
-(unsigned long long)downloadSize;
-(id)storeOfferDictionary;
-(unsigned long long)entityPersistentID;
-(NSString *)entityTitle;
-(NSString *)displayTitle;
-(int)entityType;
-(NSString *)buyParameters;
-(float)price;
@end
