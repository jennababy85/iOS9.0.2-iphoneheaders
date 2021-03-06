/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@class NSArray;

@interface SCNActionGroup : SCNAction {

	void* _mycaction;
	NSArray* _actions;

}
+(id)groupWithActions:(id)arg1 ;
+(char)supportsSecureCoding;
-(char)finished;
-(id)reversedAction;
-(void)setupWithActions:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isCustom;
@end

