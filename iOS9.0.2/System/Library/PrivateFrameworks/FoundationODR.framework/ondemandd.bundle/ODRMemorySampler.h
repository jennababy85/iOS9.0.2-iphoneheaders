/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ondemandd/ODRDataSampler.h>

@class NSByteCountFormatter;

@interface ODRMemorySampler : ODRDataSampler {

	NSByteCountFormatter* _bytesFormatter;

}
-(id)takeSample;
-(id)currentStatsString;
@end
