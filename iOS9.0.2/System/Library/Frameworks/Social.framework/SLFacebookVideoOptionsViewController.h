/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SLFacebookVideoOptionsDelegate;
@class NSArray, NSURL, SLVideoQualityOption;

@interface SLFacebookVideoOptionsViewController : UITableViewController {

	NSArray* _qualityOptions;
	NSURL* _videoAssetURL;
	SLVideoQualityOption* _selectedOption;
	id<SLFacebookVideoOptionsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLFacebookVideoOptionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_generateQualityOptionsWithAssetURL:(id)arg1 ;
-(id)initWithVideoAssetURL:(id)arg1 ;
-(void)setSelectedQualityOption:(id)arg1 ;
-(void)setDelegate:(id<SLFacebookVideoOptionsDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<SLFacebookVideoOptionsDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
@end

