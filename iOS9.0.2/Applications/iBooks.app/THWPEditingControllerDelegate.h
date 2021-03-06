/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THWPEditingControllerDelegate <TSWPEditingControllerDelegate>
@property (nonatomic,readonly) char allowCopy; 
@property (nonatomic,readonly) char allowSearchBook; 
@property (nonatomic,readonly) char allowSelectAll; 
@property (nonatomic,readonly) char allowHighlighting; 
@property (nonatomic,readonly) char allowGlossary; 
@optional
-(char)allowCopy;
-(id)activityItemProviderWithCachedAnnotation:(id)arg1;
-(id)titleOfCurrentNavigationUnit;
-(void)presentSearchResultsForString:(id)arg1;
-(void)didRemoveNoteForAnnotation:(id)arg1;
-(char)allowSelectionPopover;
-(char)allowGlossary;
-(char)addNoteForAnnotation:(id)arg1 forPage:(id)arg2;
-(char)allowSearchBook;
-(char)allowHighlighting;
-(char)allowSelectAll;

@end

