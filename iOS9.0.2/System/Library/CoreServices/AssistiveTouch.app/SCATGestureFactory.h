/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <assistivetouchd/assistivetouchd-Structs.h>
@interface SCATGestureFactory : NSObject
+(id)tapGestureAtPoint:(CGPoint)arg1 isDoubleTap:(char)arg2 numberOfFingers:(unsigned)arg3 unnamedValue:(float)arg4 ;
+(id)flickGestureAtPoint:(CGPoint)arg1 angle:(float)arg2 numberOfFingers:(unsigned)arg3 distance:(int)arg4 ;
+(id)lineGestureBetweenPoints:(id)arg1 duration:(float)arg2 numberOfFingers:(unsigned)arg3 ;
+(id)flickGestureStartingAtPoint:(CGPoint)arg1 endingAtPoint:(CGPoint)arg2 numberOfFingers:(unsigned)arg3 ;
+(id)lineGestureBetweenPoints:(id)arg1 duration:(float)arg2 numberOfFingers:(unsigned)arg3 initialHoldDuration:(float)arg4 ;
+(void)_addAllFingerPointsForPoint:(CGPoint)arg1 toFingerPointArrays:(id)arg2 ;
+(id)tapGestureAtPoint:(CGPoint)arg1 ;
+(id)flickGestureAtPoint:(CGPoint)arg1 angle:(float)arg2 distance:(int)arg3 ;
+(id)lineGestureBetweenPoints:(id)arg1 duration:(float)arg2 ;
+(id)orbPopGesture:(CGPoint)arg1 ;
+(id)orbPeekGesture:(CGPoint)arg1 ;
@end
