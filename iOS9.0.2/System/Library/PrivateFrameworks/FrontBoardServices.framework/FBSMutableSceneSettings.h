/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) float level; 
@property (assign,nonatomic) int interfaceOrientation; 
@property (assign,getter=isBackgrounded,nonatomic) char backgrounded; 
@property (nonatomic,copy) NSArray * occlusions; 
+(char)_isMutable;
-(void)setFrame:(CGRect)arg1 ;
-(void)setInterfaceOrientation:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(float)arg1 ;
-(void)setBackgrounded:(char)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)otherSettings;
-(id)ignoreOcclusionReasons;
-(void)setOcclusions:(NSArray *)arg1 ;
-(id)transientLocalSettings;
@end
