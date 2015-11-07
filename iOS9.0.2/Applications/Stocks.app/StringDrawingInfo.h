/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Stocks/Stocks-Structs.h>
@class NSString, UIColor, UIFont;

@interface StringDrawingInfo : NSObject {

	NSString* _string;
	UIColor* _color;
	UIFont* _font;
	CGSize _size;

}

@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIColor * color;                //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIFont * font;                  //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGSize size;                    //@synthesize size=_size - In the implementation block
+(id)stringDrawingInfoWithString:(id)arg1 color:(id)arg2 font:(id)arg3 size:(CGSize)arg4 ;
-(CGSize)size;
-(NSString *)string;
-(void)setFont:(UIFont *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(UIFont *)font;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setString:(NSString *)arg1 ;
@end
