/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying> {

	NSString* _command;
	NSData* _infoDictionary;
	NSString* _seid;
	NSData* _url;

}

@property (nonatomic,retain) NSData * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * seid;                       //@synthesize seid=_seid - In the implementation block
@property (nonatomic,retain) NSString * command;                    //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) char hasInfoDictionary; 
@property (nonatomic,retain) NSData * infoDictionary;               //@synthesize infoDictionary=_infoDictionary - In the implementation block
-(NSString *)command;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSData *)infoDictionary;
-(NSData *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(void)setInfoDictionary:(NSData *)arg1 ;
-(char)hasInfoDictionary;
-(NSString *)seid;
-(char)readFrom:(id)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
@end
