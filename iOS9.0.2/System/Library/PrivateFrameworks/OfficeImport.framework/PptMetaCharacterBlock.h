/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PptMetaCharacterBlock : NSObject {

	int mType;
	int mPosition;
	int mExtraData;

}
-(int)type;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(id)initWithType:(int)arg1 position:(int)arg2 extraData:(int)arg3 ;
-(id)initWithType:(int)arg1 position:(int)arg2 ;
-(int)extraData;
@end
