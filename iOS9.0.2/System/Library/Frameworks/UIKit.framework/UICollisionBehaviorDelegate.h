/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UICollisionBehaviorDelegate <NSObject>
@optional
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withItem:(id)arg3 atPoint:(CGPoint)arg4;
-(void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withItem:(id)arg3;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(CGPoint)arg4;
-(void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3;

@end

