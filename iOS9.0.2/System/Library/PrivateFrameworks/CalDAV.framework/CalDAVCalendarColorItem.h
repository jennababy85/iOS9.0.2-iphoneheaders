/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem {

	NSString* _symbolicColorName;

}

@property (nonatomic,retain) NSString * symbolicColorName;              //@synthesize symbolicColorName=_symbolicColorName - In the implementation block
@property (nonatomic,retain) NSString * colorString; 
-(NSString *)symbolicColorName;
-(void)setColorString:(NSString *)arg1 ;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(id)init;
-(void)parserFoundAttributes:(id)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)colorString;
@end

