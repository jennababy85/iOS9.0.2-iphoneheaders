/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PHObject;

@interface PHObjectChangeDetails : NSObject {

	PHObject* _objectBeforeChanges;
	PHObject* _objectAfterChanges;
	char _assetContentChanged;

}

@property (readonly) PHObject * objectBeforeChanges; 
@property (readonly) PHObject * objectAfterChanges; 
@property (readonly) char assetContentChanged; 
@property (readonly) char objectWasDeleted; 
-(PHObject *)objectBeforeChanges;
-(id)initWithPHObject:(id)arg1 ;
-(char)assetContentChanged;
-(char)objectWasDeleted;
-(PHObject *)objectAfterChanges;
-(id)description;
-(void)_calculateDiffs;
@end
