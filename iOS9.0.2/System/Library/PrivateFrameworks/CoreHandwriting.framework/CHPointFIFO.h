/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CHPointFIFO : NSObject {

	CHPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) CHPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)addPoint:;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(CHPointFIFO *)arg1 ;
-(CHPointFIFO *)nextFIFO;
-(void)emitPoint:;
@end

