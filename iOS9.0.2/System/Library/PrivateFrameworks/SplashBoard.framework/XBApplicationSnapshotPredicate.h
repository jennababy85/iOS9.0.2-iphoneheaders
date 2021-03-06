/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString;

@interface XBApplicationSnapshotPredicate : NSObject <BSDescriptionProviding> {

	BSMutableSettings* _clientSettings;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * scheme; 
@property (nonatomic,copy) NSString * launchInterfaceIdentifier; 
@property (nonatomic,copy) NSString * requiredOSVersion; 
@property (assign,nonatomic) unsigned interfaceOrientationMask; 
@property (assign,nonatomic) CGSize referenceSize; 
@property (assign,nonatomic) float imageScale; 
@property (assign,nonatomic) unsigned contentTypeMask; 
@property (assign,nonatomic) unsigned statusBarStateMask; 
@property (assign,getter=isFullScreen,nonatomic) char fullScreen; 
@property (assign,nonatomic) unsigned statusBarState; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicate;
-(char)evaluateWithObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)scheme;
-(void)setFullScreen:(char)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(char)isFullScreen;
-(void)setImageScale:(float)arg1 ;
-(CGSize)referenceSize;
-(unsigned)statusBarState;
-(NSString *)launchInterfaceIdentifier;
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)setStatusBarState:(unsigned)arg1 ;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(void)setContentTypeMask:(unsigned)arg1 ;
-(void)setInterfaceOrientationMask:(unsigned)arg1 ;
-(char)_hasClientObjectForKey:(unsigned)arg1 ;
-(unsigned)contentTypeMask;
-(unsigned)interfaceOrientationMask;
-(NSString *)requiredOSVersion;
-(unsigned)statusBarStateMask;
-(id)_clientObjectForKey:(unsigned)arg1 ;
-(void)_setClientObject:(id)arg1 forKey:(unsigned)arg2 ;
-(void)setStatusBarStateMask:(unsigned)arg1 ;
-(void)setRequiredOSVersion:(NSString *)arg1 ;
-(float)imageScale;
@end

