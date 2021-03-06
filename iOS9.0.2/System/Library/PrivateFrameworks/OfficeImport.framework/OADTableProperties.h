/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>

@class OADTableStyle, NSArray, NSString;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {

	OADTableStyle* mStyle;
	char mRightToLeft;
	char mFirstRow;
	char mFirstColumn;
	char mLastRow;
	char mLastColumn;
	char mBandRow;
	char mBandColumn;
	NSArray* mEffects;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProperties;
-(void)dealloc;
-(NSString *)description;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(char)rightToLeft;
-(char)lastColumn;
-(char)firstColumn;
-(char)firstRow;
-(char)lastRow;
-(void)setLastColumn:(char)arg1 ;
-(void)setFirstColumn:(char)arg1 ;
-(char)bandRow;
-(id)effects;
-(void)setEffects:(id)arg1 ;
-(void)setFirstRow:(char)arg1 ;
-(void)setLastRow:(char)arg1 ;
-(void)setBandColumn:(char)arg1 ;
-(void)setBandRow:(char)arg1 ;
-(void)setRightToLeft:(char)arg1 ;
-(id)initWithDefaults;
-(char)bandColumn;
-(char)hasBandsNormalToDir:(int)arg1 ;
-(char)hasVectorNormalToDir:(int)arg1 atExtremePos:(int)arg2 ;
-(char)hasEffects;
@end

