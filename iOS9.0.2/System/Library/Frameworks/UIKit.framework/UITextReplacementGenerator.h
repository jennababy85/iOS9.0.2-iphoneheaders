/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UITextRange, NSString;

@interface UITextReplacementGenerator : NSObject {

	UITextRange* _replacementRange;
	NSString* _stringToReplace;

}

@property (nonatomic,retain) UITextRange * replacementRange;              //@synthesize replacementRange=_replacementRange - In the implementation block
@property (nonatomic,copy) NSString * stringToReplace;                    //@synthesize stringToReplace=_stringToReplace - In the implementation block
-(void)setReplacementRange:(UITextRange *)arg1 ;
-(UITextRange *)replacementRange;
-(void)setStringToReplace:(NSString *)arg1 ;
-(NSString *)stringToReplace;
-(id)replacements;
-(char)shouldAllowString:(id)arg1 intoReplacements:(id)arg2 ;
-(id)replacementWithText:(id)arg1 ;
-(void)addPlaceholderForEmptyReplacements:(id)arg1 ;
@end
