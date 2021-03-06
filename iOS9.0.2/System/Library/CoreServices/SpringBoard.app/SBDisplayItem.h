/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBDisplayItem : NSObject <NSCopying> {

	NSString* _uniqueStringRepresentation;
	NSString* _type;
	NSString* _displayIdentifier;

}

@property (nonatomic,copy,readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayIdentifier;              //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
+(id)displayItemWithType:(NSString*)arg1 displayIdentifier:(id)arg2 ;
+(id)homeScreenDisplayItem;
+(id)sideSwitcherDisplayItem;
-(id)initWithType:(NSString*)arg1 displayIdentifier:(id)arg2 ;
-(id)uniqueStringRepresentation;
-(id)_calculateUniqueStringRepresentation;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)displayIdentifier;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

