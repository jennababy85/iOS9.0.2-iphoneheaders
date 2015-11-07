/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMStyleSheet, NSURL;

@interface DOMHTMLLinkElement : DOMHTMLElement

@property (assign) char disabled; 
@property (copy) NSString * charset; 
@property (copy) NSString * href; 
@property (copy) NSString * hreflang; 
@property (copy) NSString * media; 
@property (copy) NSString * rel; 
@property (copy) NSString * rev; 
@property (copy) NSString * target; 
@property (copy) NSString * type; 
@property (readonly) DOMStyleSheet * sheet; 
@property (copy,readonly) NSURL * absoluteLinkURL; 
-(void)setTarget:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)target;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(NSURL *)absoluteLinkURL;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)rel;
-(void)setRel:(NSString *)arg1 ;
-(char)_mediaQueryMatchesForOrientation:(int)arg1 ;
-(NSString *)media;
-(void)setMedia:(NSString *)arg1 ;
-(DOMStyleSheet *)sheet;
-(char)_mediaQueryMatches;
-(NSString *)charset;
-(void)setCharset:(NSString *)arg1 ;
-(NSString *)hreflang;
-(void)setHreflang:(NSString *)arg1 ;
-(NSString *)rev;
-(void)setRev:(NSString *)arg1 ;
-(id)relList;
@end
