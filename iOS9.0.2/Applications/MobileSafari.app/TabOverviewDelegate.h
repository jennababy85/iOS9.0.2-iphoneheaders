/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TabOverviewDelegate <NSObject>
@required
-(void)tabOverview:(id)arg1 closeItem:(id)arg2;
-(char)tabOverview:(id)arg1 canCloseItem:(id)arg2;
-(void)tabOverviewAddTab:(id)arg1;
-(void)tabOverviewWillPresent:(id)arg1;
-(void)tabOverviewDidDismiss:(id)arg1;
-(void)tabOverviewDidBeginDismissal:(id)arg1;
-(void)tabOverviewDidCancelDismissal:(id)arg1;
-(id)currentItemForTabOverview:(id)arg1;
-(void)tabOverview:(id)arg1 didSelectItem:(id)arg2;
-(void)tabOverview:(id)arg1 didMoveItem:(id)arg2 overItem:(id)arg3;
-(void)tabOverviewDidUpdateItemVisibilityOrder:(id)arg1;
-(float)tabOverview:(id)arg1 headerHeightForItem:(id)arg2;
-(id)tabOverview:(id)arg1 borrowContentViewForItem:(id)arg2 topBackdropHeight:(float)arg3;
-(void)tabOverview:(id)arg1 relinquishContentView:(id)arg2 forItem:(id)arg3;
-(id)blankSnapshotForTabOverview:(id)arg1 topBackdropHeight:(float)arg2;
-(char)tabOverview:(id)arg1 item:(id)arg2 matchesSearchText:(id)arg3;
-(void)tabOverview:(id)arg1 didSelectNavigationDestination:(id)arg2;
-(void)tabOverview:(id)arg1 closeCloudTab:(id)arg2 onDevice:(id)arg3;
-(void)tabOverviewDidPressDoneButton:(id)arg1;

@end
