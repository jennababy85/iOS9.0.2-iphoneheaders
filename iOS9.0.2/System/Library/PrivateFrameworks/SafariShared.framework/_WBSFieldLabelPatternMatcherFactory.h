/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject {

	NSMutableDictionary* _trie;

}
+(WBSFieldLabelPatternMatcherArrayRef)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg1 allowingEndOfWordMatches:(char)arg2 ;
-(id)init;
-(void)_addWord:(id)arg1 allowingEndOfWordMatch:(char)arg2 ;
@end

