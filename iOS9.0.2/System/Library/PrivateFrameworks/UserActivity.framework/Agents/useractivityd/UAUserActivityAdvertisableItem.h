/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:17:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <useractivityd/UAAdvertisableItem.h>

@class NSData, UAUserActivityClientProcess;

@interface UAUserActivityAdvertisableItem : UAAdvertisableItem {

	NSData* _advertisingBytes;
	UAUserActivityClientProcess* _client;

}

@property (__weak) UAUserActivityClientProcess * client;              //@synthesize client=_client - In the implementation block
-(id)advertisingBytes;
-(char)eligibleToAdvertise;
-(char)eligibleToAlwaysAdvertise;
-(char)updateInformationFromSourceEvenIfClean:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(char)wasResumedOnAnotherDeviceWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithUUID:(id)arg1 client:(id)arg2 ;
-(char)needsUpdateBeforeAdvertising;
-(id)webpageURL;
-(void)setWebpageURL:(id)arg1 ;
-(UAUserActivityClientProcess *)client;
-(char)isDirty;
-(void)setClient:(UAUserActivityClientProcess *)arg1 ;
@end

