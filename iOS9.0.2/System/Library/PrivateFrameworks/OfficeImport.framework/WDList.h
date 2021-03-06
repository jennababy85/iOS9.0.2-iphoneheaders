/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDDocument, NSMutableArray;

@interface WDList : NSObject {

	WDDocument* mDocument;
	long mListId;
	long mListDefinitionId;
	NSMutableArray* mLevelOverrides;

}

@property (nonatomic,readonly) long listId; 
@property (nonatomic,readonly) long listDefinitionId; 
-(void)dealloc;
-(id)description;
-(long)listDefinitionId;
-(long)listId;
-(id)levelOverrideForLevel:(unsigned char)arg1 ;
-(unsigned)levelOverrideCount;
-(id)levelOverrideAt:(unsigned)arg1 ;
-(id)levelOverrides;
-(char)isAnyListLevelOverridden;
-(id)initWithDocument:(id)arg1 listId:(long)arg2 listDefinitionId:(long)arg3 ;
-(id)addLevelOverrideWithLevel:(unsigned char)arg1 ;
@end

