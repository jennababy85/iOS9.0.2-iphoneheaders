/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCContainer.h>

@class NSMutableDictionary, NSArray, NSSet;

@interface MCContainerParallelizer : MCContainer {

	NSMutableDictionary* mPlugs;
	NSArray* mCachedZOrderedPlugs;
	CGColorRef mBackgroundColor;

}

@property (readonly) NSSet * plugs; 
@property (nonatomic,readonly) unsigned countOfPlugs; 
@property (readonly) NSArray * zOrderedPlugs; 
@property (assign) CGColorRef backgroundColor; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)removeAllPlugs;
-(id)setPlugProxyForPlug:(id)arg1 ;
-(unsigned)countOfPlugs;
-(NSArray *)zOrderedPlugs;
-(void)demolish;
-(id)plugForID:(id)arg1 ;
-(void)removePlug:(id)arg1 ;
-(NSSet *)plugs;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)removePlugForID:(id)arg1 ;
-(id)setPlugForContainer:(id)arg1 forID:(id)arg2 ;
-(void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)changeIDOfPlug:(id)arg1 toID:(id)arg2 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)imprint;
@end

