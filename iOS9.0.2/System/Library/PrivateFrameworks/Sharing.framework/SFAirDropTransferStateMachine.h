/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/SFStateMachine.h>

@interface SFAirDropTransferStateMachine : SFStateMachine {

	char _restoring;

}

@property (assign,nonatomic) char restoring;              //@synthesize restoring=_restoring - In the implementation block
-(id)init;
-(void)setRestoring:(char)arg1 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(char)restoring;
@end
