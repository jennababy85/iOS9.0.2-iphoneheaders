/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CHRequest, CHResponse;

@interface CHTransaction : NSObject {

	CHRequest* _request;
	CHResponse* _response;

}

@property (nonatomic,retain) CHRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) CHResponse * response;              //@synthesize response=_response - In the implementation block
-(CHRequest *)request;
-(CHResponse *)response;
-(void)setRequest:(CHRequest *)arg1 ;
-(void)setResponse:(CHResponse *)arg1 ;
@end
