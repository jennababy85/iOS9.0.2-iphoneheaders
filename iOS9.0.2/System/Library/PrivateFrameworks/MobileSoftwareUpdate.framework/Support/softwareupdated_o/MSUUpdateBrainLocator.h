/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/Support/softwareupdated_o
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface MSUUpdateBrainLocator : NSObject {

	NSDictionary* _updateAssetAttributes;

}

@property (nonatomic,retain) NSDictionary * updateAssetAttributes;              //@synthesize updateAssetAttributes=_updateAssetAttributes - In the implementation block
@property (nonatomic,readonly) NSString * deviceType; 
+(id)locatorsDictionaryQueue;
+(id)locatorsDictionary;
+(id)brainLocatorWithUpdateAttributes:(id)arg1 ;
-(id)initWithUpdateAssetAttributes:(id)arg1 ;
-(BOOL)purgeInstalledUpdateBrains:(id*)arg1 ;
-(BOOL)cancelAllDownloadsExcept:(id)arg1 error:(id*)arg2 ;
-(void)queryForUpdateBrainAssetLocally:(char)arg1 handler:(/*^block*/id)arg2 ;
-(id)localUpdateBrainAsset:(id*)arg1 ;
-(id)updateBrainQuery;
-(id)bestUpdateAssetFromResults:(id)arg1 error:(id*)arg2 ;
-(id)updateBrainLocalQuery;
-(void)installUpdateBrain:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)adjustDownloadOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)cancelInstall:(id*)arg1 ;
-(char*)copyUpdateBrainPath:(id*)arg1 ;
-(NSDictionary *)updateAssetAttributes;
-(void)setUpdateAssetAttributes:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)requiredDiskSpace:(/*^block*/id)arg1 ;
-(NSString *)deviceType;
@end

