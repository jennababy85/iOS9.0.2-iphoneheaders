/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PHStarkGenericViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, _UIFilteredDataSource, PHStarkNoContentBannerView, AVExternalDevice, NSString;

@interface PHStarkGenericTableViewController : PHStarkGenericViewController <UITableViewDataSource, UITableViewDelegate> {

	char _tableViewReloadIsRequiredOnViewWillAppear;
	UITableView* _mainTableView;
	_UIFilteredDataSource* _mainTableViewDataSource;
	PHStarkNoContentBannerView* _noContentBannerView;
	AVExternalDevice* _carPlayExternalDevice;

}

@property (retain) UITableView * mainTableView;                                   //@synthesize mainTableView=_mainTableView - In the implementation block
@property (retain) _UIFilteredDataSource * mainTableViewDataSource;               //@synthesize mainTableViewDataSource=_mainTableViewDataSource - In the implementation block
@property (assign) char tableViewReloadIsRequiredOnViewWillAppear;                //@synthesize tableViewReloadIsRequiredOnViewWillAppear=_tableViewReloadIsRequiredOnViewWillAppear - In the implementation block
@property (readonly) NSString * badgeString; 
@property (retain) PHStarkNoContentBannerView * noContentBannerView;              //@synthesize noContentBannerView=_noContentBannerView - In the implementation block
@property (retain) AVExternalDevice * carPlayExternalDevice;                      //@synthesize carPlayExternalDevice=_carPlayExternalDevice - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHStarkNoContentBannerView *)noContentBannerView;
-(void)setNoContentBannerView:(PHStarkNoContentBannerView *)arg1 ;
-(AVExternalDevice *)carPlayExternalDevice;
-(void)setCarPlayExternalDevice:(AVExternalDevice *)arg1 ;
-(void)setTableViewReloadIsRequiredOnViewWillAppear:(char)arg1 ;
-(void)setNoContentBannerShown:(char)arg1 ;
-(void)programmaticallySelectRowAtIndexPath:(id)arg1 ;
-(id)titleForNoContentBanner;
-(id)subtitleForNoContentBanner;
-(void)applicationBadgeChangedNotification:(id)arg1 ;
-(void)limitedUIChanged:(id)arg1 ;
-(void)updateBadgeString;
-(_UIFilteredDataSource *)mainTableViewDataSource;
-(char)tableViewReloadIsRequiredOnViewWillAppear;
-(void)starkInCallViewControllerAppearedNotification:(id)arg1 ;
-(void)setMainTableViewDataSource:(_UIFilteredDataSource *)arg1 ;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)preferredFocusedItem;
-(void)viewWillAppear:(char)arg1 ;
-(char)_viewControllerWasSelected;
-(int)filterType;
-(UITableView *)mainTableView;
-(void)setMainTableView:(UITableView *)arg1 ;
-(NSString *)badgeString;
-(float)defaultRowHeight;
-(void)hardwareControlEventNotification:(id)arg1 ;
@end

