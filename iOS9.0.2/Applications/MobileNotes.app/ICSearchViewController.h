/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated.h>

@protocol ICSearchViewControllerDelegate, ICNoteVisibilityTesting;
@class UIViewController, ICSearchResultsTableView, UISearchController, ICSearchViewControllerScopeBar, NSString, NSArray, ICSearchCellHandler, ICSearchController, NotesTextureBackgroundView, ICSelectorDelayer, UISearchBar, ICSectionedSearchResults;

@interface ICSearchViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UIViewControllerPreviewingDelegate_Deprecated> {

	char _showSearchResults;
	char _searchBarWasFirstResponderOnSuspend;
	id<ICSearchViewControllerDelegate> _delegate;
	id<ICNoteVisibilityTesting> _noteVisibilityTesting;
	UIViewController* _contentsController;
	ICSearchResultsTableView* _tableView;
	UISearchController* _searchController;
	ICSearchViewControllerScopeBar* _scopeBar;
	NSString* _searchString;
	NSArray* _recentSearches;
	ICSearchCellHandler* _notesCellHandler;
	ICSearchController* _noteSearchController;
	NotesTextureBackgroundView* _backgroundView;
	ICSelectorDelayer* _updateSearchResultsFromSearchControllerDelayer;

}

@property (assign,nonatomic,__weak) id<ICSearchViewControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (assign,getter=isActive,nonatomic) char active; 
@property (nonatomic,retain) id<ICNoteVisibilityTesting> noteVisibilityTesting;                               //@synthesize noteVisibilityTesting=_noteVisibilityTesting - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * contentsController;                                    //@synthesize contentsController=_contentsController - In the implementation block
@property (nonatomic,retain) ICSearchResultsTableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                           //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) ICSearchViewControllerScopeBar * scopeBar;                                       //@synthesize scopeBar=_scopeBar - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                           //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,copy) NSArray * recentSearches;                                                          //@synthesize recentSearches=_recentSearches - In the implementation block
@property (nonatomic,retain) ICSearchCellHandler * notesCellHandler;                                          //@synthesize notesCellHandler=_notesCellHandler - In the implementation block
@property (nonatomic,retain) ICSearchController * noteSearchController;                                       //@synthesize noteSearchController=_noteSearchController - In the implementation block
@property (nonatomic,readonly) ICSectionedSearchResults * sectionedSearchResults; 
@property (assign,nonatomic) char showSearchResults;                                                          //@synthesize showSearchResults=_showSearchResults - In the implementation block
@property (nonatomic,retain) NotesTextureBackgroundView * backgroundView;                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) char searchBarWasFirstResponderOnSuspend;                                        //@synthesize searchBarWasFirstResponderOnSuspend=_searchBarWasFirstResponderOnSuspend - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * updateSearchResultsFromSearchControllerDelayer;              //@synthesize updateSearchResultsFromSearchControllerDelayer=_updateSearchResultsFromSearchControllerDelayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateForContentSizeCategoryChange;
-(void)setScopeBar:(ICSearchViewControllerScopeBar *)arg1 ;
-(ICSearchViewControllerScopeBar *)scopeBar;
-(void)searchScopeChanged:(id)arg1 ;
-(void)setContentsController:(UIViewController *)arg1 ;
-(id)recentSearchesFromDefaults;
-(void)setRecentSearches:(NSArray *)arg1 ;
-(void)addSearchResults:(id)arg1 removingFoundIdentifiers:(id)arg2 searchString:(id)arg3 isClearedForNewSearch:(char)arg4 ;
-(void)setNoteSearchController:(ICSearchController *)arg1 ;
-(void)updateSearchResultsFromSearchController;
-(void)setUpdateSearchResultsFromSearchControllerDelayer:(ICSelectorDelayer *)arg1 ;
-(void)searchResultsDidUpdate:(id)arg1 ;
-(ICSearchController *)noteSearchController;
-(ICSelectorDelayer *)updateSearchResultsFromSearchControllerDelayer;
-(void)updateViewHiddenState;
-(void)setNotesCellHandler:(ICSearchCellHandler *)arg1 ;
-(char)showSearchResults;
-(void)setShowSearchResults:(char)arg1 ;
-(void)updateScopeBarForSearch:(char)arg1 ;
-(void)setSearchBarWasFirstResponderOnSuspend:(char)arg1 ;
-(char)searchBarWasFirstResponderOnSuspend;
-(id)searchResultForIndexPath:(id)arg1 ;
-(ICSearchCellHandler *)notesCellHandler;
-(id)cellForRecentSearchAtIndexPath:(id)arg1 ;
-(void)saveCurrentSearchStringAsRecentSearch;
-(void)showSearchIndexableObjectForSelectSearchResult:(id)arg1 ;
-(void)saveRecentSearchString:(id)arg1 ;
-(id)viewForSearchResultsHeaderInSection:(unsigned)arg1 ;
-(id)viewForRecentSearchesHeader;
-(id)newHeaderViewWithPaperTexture;
-(UIFont*)headerViewCellLabelFont;
-(void)clearAllRecentSearches;
-(id)tableViewForSourceView:(id)arg1 ;
-(char)isHeaderFooterViewForPosition:(CGPoint)arg1 inTableView:(id)arg2 ;
-(id)currentVisibilityTesting;
-(id<ICNoteVisibilityTesting>)noteVisibilityTesting;
-(char)updateNavigationTitle;
-(void)resumeAfterSuspend;
-(id)cellForBrowseAttachments;
-(void)setNoteVisibilityTesting:(id<ICNoteVisibilityTesting>)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)recentSearchAtIndex:(int)arg1 ;
-(NSArray *)recentSearches;
-(void)setDelegate:(id<ICSearchViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<ICSearchViewControllerDelegate>)delegate;
-(char)isActive;
-(ICSearchResultsTableView *)tableView;
-(void)setTableView:(ICSearchResultsTableView *)arg1 ;
-(void)setBackgroundView:(NotesTextureBackgroundView *)arg1 ;
-(NotesTextureBackgroundView *)backgroundView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UISearchBar *)searchBar;
-(id)previewViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)commitPreviewViewController:(id)arg1 committedViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
-(void)setActive:(char)arg1 ;
-(NSString *)searchString;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(char)searchBarShouldEndEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(UISearchController *)searchController;
-(void)willPresentSearchController:(id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)prepareForSuspend;
-(char)hasSearchString;
-(ICSectionedSearchResults *)sectionedSearchResults;
-(void)configureTableView:(id)arg1 ;
-(id)initWithContentsController:(id)arg1 ;
-(UIViewController *)contentsController;
@end
