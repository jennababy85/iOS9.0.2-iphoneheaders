/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKPageLocation.h>

@class UIPDFSelection, UIPDFAnnotation, NSData;

@interface BKPdfLocation : BKPageLocation {

	UIPDFSelection* _selection;
	UIPDFAnnotation* _annotation;
	NSData* _serialData;

}

@property (nonatomic,retain) UIPDFSelection * selection;                //@synthesize selection=_selection - In the implementation block
@property (nonatomic,retain) UIPDFAnnotation * annotation;              //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) NSData * serialData;                       //@synthesize serialData=_serialData - In the implementation block
+(id)locationForAnnotation:(id)arg1 offset:(unsigned)arg2 ;
+(id)locationForSelection:(id)arg1 offset:(unsigned)arg2 ;
+(id)deserializeLocationFromDictionary:(id)arg1 ;
-(id)serializeLocationToDictionary;
-(id)initWithLocationDictionary:(id)arg1 ;
-(void)setSerialData:(NSData *)arg1 ;
-(NSData *)serialData;
-(id)serialString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIPDFSelection *)selection;
-(void)setSelection:(UIPDFSelection *)arg1 ;
-(UIPDFAnnotation *)annotation;
-(void)setAnnotation:(UIPDFAnnotation *)arg1 ;
@end
