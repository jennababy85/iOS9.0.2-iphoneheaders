/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSMutableDictionary;

@interface IMPerformSelectorProxy : NSProxy {

	id _weakTarget;
	NSMutableDictionary* _signatures;

}

@property (nonatomic,readonly) id target; 
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)target;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4 ;
-(id)initWithTarget:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)teardown;
@end

