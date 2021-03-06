/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SearchUIRichTextItem.h>

@class NSString, NSArray;

@interface MKSearchUIRichTextItem : NSObject <SearchUIRichTextItem> {

	NSString* _text;
	NSArray* _formattedTextItems;
	NSString* _formattedTextDelimiter;
	unsigned _textMaxLines;
	float _starRating;
	NSArray* _icons;
	NSString* _contentAdvisory;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * text;                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSArray * formattedTextItems;                   //@synthesize formattedTextItems=_formattedTextItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * formattedTextDelimiter;              //@synthesize formattedTextDelimiter=_formattedTextDelimiter - In the implementation block
@property (nonatomic,readonly) unsigned textMaxLines;                               //@synthesize textMaxLines=_textMaxLines - In the implementation block
@property (nonatomic,readonly) float starRating;                                    //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,readonly) NSArray * icons;                                     //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentAdvisory;                     //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
-(unsigned)textMaxLines;
-(NSString *)formattedTextDelimiter;
-(NSArray *)formattedTextItems;
-(id)initWithText:(id)arg1 rating:(float)arg2 ;
-(NSString *)contentAdvisory;
-(float)starRating;
-(NSString *)text;
-(NSArray *)icons;
-(id)initWithText:(id)arg1 ;
@end

