/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDDataObserver <NSObject>
@optional
-(void)samplesJournaled:(id)arg1 type:(id)arg2;
-(void)samplesOfTypeWereRemoved:(id)arg1 anchor:(id)arg2;

@required
-(void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end

