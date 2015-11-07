/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/EKUIEventStatusButtonsViewDelegate.h>

@protocol CalendarMessageCellDelegate;
@class NSArray, MessageCellColorBarView, UIView, EKUIEventStatusButtonsView, UITextField, NSLayoutConstraint, NSMutableArray, EKCalendarNotification, NSIndexSet, NSString;

@interface CalendarMessageCell : UITableViewCell <EKUIEventStatusButtonsViewDelegate> {

	NSArray* _titleLabels;
	NSArray* _bodyLabels;
	MessageCellColorBarView* _colorBar;
	UIView* _disclosureIndicatorView;
	EKUIEventStatusButtonsView* _responseButtons;
	UITextField* _commentPrompt;
	char _showsCommentPrompt;
	char _didSetupColorBarConstraints;
	char _didSetupLabelConstraints;
	char _didSetupDisclosureConstraints;
	NSLayoutConstraint* _firstTitleLabelToContentViewTopConstraint;
	NSLayoutConstraint* _lastTitleLabelToFirstBodyLabelConstraint;
	NSLayoutConstraint* _lastBodyLabelToResponseButtonsConstraint;
	NSLayoutConstraint* _responseButtonsToCommentLabelConstraint;
	NSLayoutConstraint* _bottomMostViewToContentViewBottomConstraint;
	NSMutableArray* _titleLabelConstraints;
	NSMutableArray* _bodyLabelConstraints;
	char _hasDisclosure;
	EKCalendarNotification* _notification;
	id<CalendarMessageCellDelegate> _delegate;
	NSIndexSet* _indexSetOfTruncatedTitleStrings;
	NSIndexSet* _indexSetOfTruncatedBodyStrings;
	NSArray* _labelRelatedConstraints;
	NSArray* _colorBarConstraints;
	NSArray* _disclosureConstraints;
	NSArray* _commentPromptRelatedConstraints;

}

@property (nonatomic,retain) EKCalendarNotification * notification;                        //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic,__weak) id<CalendarMessageCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int accessoryType; 
@property (assign,nonatomic) char hasDisclosure;                                           //@synthesize hasDisclosure=_hasDisclosure - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSetOfTruncatedTitleStrings;               //@synthesize indexSetOfTruncatedTitleStrings=_indexSetOfTruncatedTitleStrings - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexSetOfTruncatedBodyStrings;                //@synthesize indexSetOfTruncatedBodyStrings=_indexSetOfTruncatedBodyStrings - In the implementation block
@property (nonatomic,retain) NSArray * labelRelatedConstraints;                            //@synthesize labelRelatedConstraints=_labelRelatedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * colorBarConstraints;                                //@synthesize colorBarConstraints=_colorBarConstraints - In the implementation block
@property (nonatomic,retain) NSArray * disclosureConstraints;                              //@synthesize disclosureConstraints=_disclosureConstraints - In the implementation block
@property (nonatomic,retain) NSArray * commentPromptRelatedConstraints;                    //@synthesize commentPromptRelatedConstraints=_commentPromptRelatedConstraints - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)numberOfLinesForTitleLabels;
+(int)numberOfLinesForBodyLabels;
+(Class)cellClassForNotification:(id)arg1 ;
+(float)defaultRowHeight;
+(id)layoutMetrics;
-(char)showAsCancelledOrDeclined;
-(void)setHasDisclosure:(char)arg1 ;
-(NSIndexSet *)indexSetOfTruncatedTitleStrings;
-(id)titleStrings;
-(id)bodyStrings;
-(void)_removeColorBarConstraintsIfNeeded;
-(void)setColorBarConstraints:(NSArray *)arg1 ;
-(NSArray *)colorBarConstraints;
-(void)_removeLabelRelatedConstraintsIfNeeded;
-(id)_responseButtons;
-(void)setLabelRelatedConstraints:(NSArray *)arg1 ;
-(NSArray *)labelRelatedConstraints;
-(void)_removeDisclosureConstraintsIfNeeded;
-(void)setDisclosureConstraints:(NSArray *)arg1 ;
-(NSArray *)disclosureConstraints;
-(void)_removeCommentPromptRelatedConstraintsIfNeeded;
-(void)setCommentPromptRelatedConstraints:(NSArray *)arg1 ;
-(NSArray *)commentPromptRelatedConstraints;
-(void)_commentPromptDone:(id)arg1 ;
-(void)updateSelectedResponseButton;
-(void)setupCommentPromptConstraintsIfNeeded;
-(void)setupLabelConstraintsIfNeeded;
-(void)setupColorBarConstraintsIfNeeded;
-(int)selectedResponseButton;
-(void)_updateResponseButtons;
-(void)_updateColorBar;
-(void)setupDisclosureConstraintsIfNeeded;
-(void)setShowsCommentPrompt:(char)arg1 animated:(char)arg2 initialValue:(id)arg3 ;
-(char)hasDisclosure;
-(NSIndexSet *)indexSetOfTruncatedBodyStrings;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(int)arg2 ;
-(float)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(float)arg2 ;
-(void)setDelegate:(id<CalendarMessageCellDelegate>)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<CalendarMessageCellDelegate>)delegate;
-(id)actions;
-(EKCalendarNotification *)notification;
-(void)prepareForReuse;
-(id)color;
-(void)_updateLabels;
-(void)setNotification:(EKCalendarNotification *)arg1 ;
-(id)comment;
@end
