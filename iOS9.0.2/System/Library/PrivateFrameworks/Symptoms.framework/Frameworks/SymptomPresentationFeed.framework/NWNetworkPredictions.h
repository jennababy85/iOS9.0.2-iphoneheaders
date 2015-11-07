/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NWNetworkPredictions : NSObject <NSSecureCoding> {

	NSDate* _changePointAt;
	int _toQuality;
	int _resolutionSeconds;
	double _confidence;

}

@property (readonly) NSDate * changePointAt;              //@synthesize changePointAt=_changePointAt - In the implementation block
@property (readonly) int toQuality;                       //@synthesize toQuality=_toQuality - In the implementation block
@property (readonly) double confidence;                   //@synthesize confidence=_confidence - In the implementation block
@property (readonly) int resolutionSeconds;               //@synthesize resolutionSeconds=_resolutionSeconds - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)confidence;
-(id)initWithSpec:(id)arg1 toQuality:(int)arg2 withConfidence:(double)arg3 resolutionSeconds:(unsigned)arg4 ;
-(NSDate *)changePointAt;
-(int)toQuality;
-(int)resolutionSeconds;
@end
