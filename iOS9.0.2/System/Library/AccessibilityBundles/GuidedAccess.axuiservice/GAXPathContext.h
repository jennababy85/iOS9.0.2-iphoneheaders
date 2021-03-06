/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@interface GAXPathContext : NSObject {

	CGPathRef _lastSeenCGPath;
	void* _linePointsContexts;
	void* _linePointsIndicesPerElementIndices;

}

@property (nonatomic,readonly) CGPathRef lastSeenCGPath;                              //@synthesize lastSeenCGPath=_lastSeenCGPath - In the implementation block
@property (nonatomic,readonly) void* linePointsContexts;                              //@synthesize linePointsContexts=_linePointsContexts - In the implementation block
@property (nonatomic,readonly) void* linePointsIndicesPerElementIndices;              //@synthesize linePointsIndicesPerElementIndices=_linePointsIndicesPerElementIndices - In the implementation block
-(void*)linePointsContexts;
-(void*)linePointsIndicesPerElementIndices;
-(CGPathRef)lastSeenCGPath;
-(id)initWithLastSeenCGPath:(CGPathRef)arg1 ;
-(void)dealloc;
@end

