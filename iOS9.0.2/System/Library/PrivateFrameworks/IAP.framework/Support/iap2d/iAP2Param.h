/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface iAP2Param : NSObject {

	unsigned short paramID;
	unsigned short paramLen;
	unsigned short paramLenRemain;
	int paramType;
	iAP2ParamDataInteger_ paramInteger;
	unsigned char paramRawLen;
	int paramParseState;
	id pNSParamData;

}
+(id)createParamWithID:(unsigned short)arg1 ;
+(id)createParamWithIDAndDataRaw:(unsigned short)arg1 :(char*)arg2 :(unsigned short)arg3 ;
+(id)createParamWithIDAndDataBool:(unsigned short)arg1 :(BOOL)arg2 ;
+(id)createParamWithIDAndDataU8:(unsigned short)arg1 :(unsigned char)arg2 ;
+(id)createParamWithIDAndDataU16:(unsigned short)arg1 :(unsigned short)arg2 ;
+(id)createParamWithIDAndDataU32:(unsigned short)arg1 :(unsigned)arg2 ;
+(id)createParamWithIDAndDataU64:(unsigned short)arg1 :(unsigned long long)arg2 ;
+(id)createParamWithIDAndDataInt8:(unsigned short)arg1 :(char)arg2 ;
+(id)createParamWithIDAndDataInt16:(unsigned short)arg1 :(short)arg2 ;
+(id)createParamWithIDAndDataInt32:(unsigned short)arg1 :(int)arg2 ;
+(id)createParamWithIDAndDataInt64:(unsigned short)arg1 :(long long)arg2 ;
+(id)createParamWithIDAndNSData:(unsigned short)arg1 :(id)arg2 ;
+(id)createParamWithIDAndNSString:(unsigned short)arg1 :(id)arg2 ;
-(unsigned short)getGrpParamID;
-(unsigned short)getRawParamLength;
-(void)getParamDataAsNone:(int*)arg1 ;
-(const char*)getParamDataAsRaw:(unsigned short*)arg1 :(int*)arg2 ;
-(BOOL)getParamDataAsBool:(int*)arg1 ;
-(unsigned char)getParamDataAsU8:(int*)arg1 ;
-(unsigned short)getParamDataAsU16:(int*)arg1 ;
-(unsigned)getParamDataAsU32:(int*)arg1 ;
-(unsigned long long)getParamDataAsU64:(int*)arg1 ;
-(id)getParamDataAsNSData:(int*)arg1 ;
-(id)getParamDataAsNSString:(int*)arg1 ;
-(int)parseParamBuffer:(const char*)arg1 :(unsigned short)arg2 :(unsigned short)arg3 :(unsigned short*)arg4 ;
-(void)setGrpParamID:(unsigned short)arg1 ;
-(unsigned short)getGrpParamLen;
-(id)getParamDataPtr;
-(void)setParamDataPtr:(id)arg1 ;
-(unsigned short)generateRawParamBuffer:(char*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end
