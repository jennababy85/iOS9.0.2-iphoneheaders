/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol SAClientBoundCommand <SAAceCommand>
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@required
-(NSArray *)callbacks;
-(void)setCallbacks:(id)arg1;
-(char)requiresResponse;
-(NSString *)appId;
-(void)setAppId:(id)arg1;

@end

