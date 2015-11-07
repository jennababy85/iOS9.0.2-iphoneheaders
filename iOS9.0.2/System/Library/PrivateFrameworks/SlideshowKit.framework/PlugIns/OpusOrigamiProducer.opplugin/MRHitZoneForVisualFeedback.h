/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MRHitZoneForVisualFeedback : NSObject {

	char _hasEnded;
	float* _vertices;
	unsigned _countOfVertices;
	double _timestamp;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasEnded;                 //@synthesize hasEnded=_hasEnded - In the implementation block
@property (readonly) float* vertices;                       //@synthesize vertices=_vertices - In the implementation block
@property (readonly) unsigned countOfVertices;              //@synthesize countOfVertices=_countOfVertices - In the implementation block
-(void)setHasEnded:(char)arg1 ;
-(void)set2DVertices:(const float*)arg1 countOfVertices:(unsigned)arg2 ;
-(unsigned)countOfVertices;
-(char)hasEnded;
-(void)dealloc;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float*)vertices;
@end
