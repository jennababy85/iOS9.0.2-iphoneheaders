/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3StoreItemTrackData.h>

@class NSArray;

@interface MPStoreItemImportTrackData : ML3StoreItemTrackData {

	NSArray* _importElements;

}

@property (nonatomic,readonly) NSArray * importElements;              //@synthesize importElements=_importElements - In the implementation block
+(id)_importPropertiesDictFromImportMetadataDict:(id)arg1 ;
-(NSArray *)importElements;
-(id)initWithImportElements:(id)arg1 ;
-(id)parsedStoreItemsImportProperties;
-(id)_associatedElementForPropertyDict:(id)arg1 ;
@end
