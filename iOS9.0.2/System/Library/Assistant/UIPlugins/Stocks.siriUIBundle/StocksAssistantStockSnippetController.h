/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Stocks.siriUIBundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <AcousticId/SiriUISnippetPlugin.h>

@class UITableView, UIButton, NSArray, StocksAssistantStockDetailCell, SiriUIReusableFooterView, NSString;

@interface StocksAssistantStockSnippetController : SiriUISnippetViewController <UITableViewDelegate, UITableViewDataSource, SiriUISnippetPlugin> {

	UITableView* _tableView;
	UIButton* _attributionButton;
	NSArray* _stocks;
	NSArray* _requestTypes;
	StocksAssistantStockDetailCell* _singleStockCell;
	char _isCompare;
	SiriUIReusableFooterView* _footerView;
	unsigned _requestType;

}

@property (assign,nonatomic) unsigned requestType;                  //@synthesize requestType=_requestType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)infoTypeFromRequestType:(id)arg1 ;
-(void)openStockWebsite:(id)arg1 ;
-(void)openStock:(id)arg1 ;
-(unsigned)requestType;
-(void)dealloc;
-(float)rowHeight;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)initWithAceObject:(id)arg1 ;
-(float)desiredHeight;
-(void)setRequestType:(unsigned)arg1 ;
-(float)desiredHeightForFooterView;
-(void)configureReusableFooterView:(id)arg1 ;
@end
