/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class NSString;

@interface _MFQuoteLevelPopoverViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate> {

	/*^block*/id _decisionBlock;

}

@property (nonatomic,copy) id decisionBlock;                        //@synthesize decisionBlock=_decisionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDecisionBlock:(id)arg1 ;
-(id)_optionsStrings;
-(id)decisionBlock;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(CGSize)preferredContentSize;
@end

