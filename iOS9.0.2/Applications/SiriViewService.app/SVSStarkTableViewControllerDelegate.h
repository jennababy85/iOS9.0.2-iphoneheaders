/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SVSStarkTableViewControllerDelegate
@required
-(id)tableCellIdentifiersAndClasses;
-(Class)showMoreCellClass;
-(id)newShowMoreCellWithIdentifier:(id)arg1;
-(id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned)arg2;
-(id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned)arg3;
-(void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned)arg3;
-(id)backgroundColorForTableViewCells;
-(void)didPressShowMore;
-(void)didPressItem:(id)arg1 atIndex:(unsigned)arg2;

@end

