/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationControllerTransitionContextProvider.h>

@class SBWorkspaceApplication, NSSet, NSString;

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider> {

	SBWorkspaceApplication* _activatingApp;
	SBWorkspaceApplication* _deactivatingApp;

}

@property (nonatomic,retain) SBWorkspaceApplication * activatingApp;                //@synthesize activatingApp=_activatingApp - In the implementation block
@property (nonatomic,retain) SBWorkspaceApplication * deactivatingApp;              //@synthesize deactivatingApp=_deactivatingApp - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activatingApps; 
@property (nonatomic,copy,readonly) NSSet * deactivatingApps; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionContextProviderWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(SBWorkspaceApplication *)deactivatingApp;
-(SBWorkspaceApplication *)activatingApp;
-(NSSet *)activatingApps;
-(NSSet *)deactivatingApps;
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)setActivatingApp:(SBWorkspaceApplication *)arg1 ;
-(void)setDeactivatingApp:(SBWorkspaceApplication *)arg1 ;
-(void)dealloc;
@end

