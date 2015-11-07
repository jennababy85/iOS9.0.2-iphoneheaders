/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BuddyController <NSObject>
@optional
+(void)skip;
+(char)controllerNeedsToRun;
-(id)viewController;
-(void)controllerWasPopped;
-(char)controllerAllowsNavigatingBack;
-(void)startOver;
-(char)shouldAllowStartOver;
-(void)willDisplayStartOver;
-(void)removeFromNavHierarchyOf:(id)arg1;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(char)shouldSuppressExtendedInitializationActivityIndicator;

@required
-(void)setDelegate:(id)arg1;

@end
