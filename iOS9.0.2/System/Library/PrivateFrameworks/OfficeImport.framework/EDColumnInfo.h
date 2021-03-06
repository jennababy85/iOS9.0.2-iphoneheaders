/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EDKeyedObject.h>

@class EDResources, EDWorksheet, EDReference, NSString;

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {

	EDResources* mResources;
	EDWorksheet* mWorksheet;
	int mWidth;
	BOOL mHidden;
	EDReference* mRange;
	unsigned mStyleIndex;
	unsigned char mOutlineLevel;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2 ;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)description;
-(int)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(double)width;
-(id)range;
-(void)setWidth:(double)arg1 ;
-(void)setRange:(id)arg1 ;
-(void)setStyleIndex:(unsigned)arg1 ;
-(unsigned)styleIndex;
-(id)initWithResources:(id)arg1 worksheet:(id)arg2 ;
-(void)setWidthInXlUnits:(int)arg1 ;
-(void)setRangeWithFirstColumn:(int)arg1 lastColumn:(int)arg2 ;
-(void)setOutlineLevel:(unsigned char)arg1 ;
-(int)widthInXlUnits;
-(unsigned char)outlineLevel;
@end

