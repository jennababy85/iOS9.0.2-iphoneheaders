/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerURLContainerModel.h>

@class NSString;

@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerURLContainerModel {

	NSString* _queryString;

}

@property (nonatomic,copy) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned)arg3 ;
-(id)scopes;
-(char)shouldShowTopLevelContainers;
-(id)displayTitle;
-(void)startMonitoringChanges;
-(void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3 ;
-(id)initWithPickableTypes:(id)arg1 mode:(unsigned)arg2 ;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(void)_updateObserverForQuery;
@end
