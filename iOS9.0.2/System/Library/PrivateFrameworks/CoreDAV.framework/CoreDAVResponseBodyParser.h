/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSError;


@protocol CoreDAVResponseBodyParser <NSObject>
@property (readonly) NSError * parserError; 
@optional
+(char)canHandleContentType:(id)arg1;

@required
-(NSError *)parserError;
-(char)processData:(id)arg1 forTask:(id)arg2;

@end

