/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOSearchCategory, NSString;

@interface CategoryKey : NSObject <NSCopying> {

	char _transitMode;
	GEOSearchCategory* _category;
	NSString* _prefix;

}

@property (nonatomic,retain) GEOSearchCategory * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * prefix;                           //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) char transitMode;                          //@synthesize transitMode=_transitMode - In the implementation block
-(char)transitMode;
-(void)setTransitMode:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setCategory:(GEOSearchCategory *)arg1 ;
-(GEOSearchCategory *)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
@end
