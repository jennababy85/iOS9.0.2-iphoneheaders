/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSAudioRouteMessage : PBCodable <NSCopying> {

	long long _macAddress;
	NSString* _displayName;
	char _selected;
	char _supportsVideo;
	SCD_Struct_RM5 _has;

}

@property (nonatomic,readonly) char hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) char hasMacAddress; 
@property (assign,nonatomic) long long macAddress;                //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) char hasSupportsVideo; 
@property (assign,nonatomic) char supportsVideo;                  //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (assign,nonatomic) char hasSelected; 
@property (assign,nonatomic) char selected;                       //@synthesize selected=_selected - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSelected:(char)arg1 ;
-(id)dictionaryRepresentation;
-(char)selected;
-(NSString *)displayName;
-(long long)macAddress;
-(void)setMacAddress:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasDisplayName;
-(char)readFrom:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setHasMacAddress:(char)arg1 ;
-(char)hasMacAddress;
-(void)setSupportsVideo:(char)arg1 ;
-(void)setHasSupportsVideo:(char)arg1 ;
-(char)hasSupportsVideo;
-(void)setHasSelected:(char)arg1 ;
-(char)hasSelected;
-(char)supportsVideo;
@end

