/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Reminders/RemindersCheckboxViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol RemindersCheckboxCellDelegate, UITextViewDelegate;
@class NSAttributedString, UILabel, NSString, RemindersCheckboxView, UIView, UIButton, NSMutableArray, UIColor, NSLayoutConstraint, EKExpandingTextView, NSURL, NSUserActivity, NSDictionary;

@interface RemindersCheckboxCell : UITableViewCell <RemindersCheckboxViewDelegate, UIGestureRecognizerDelegate, UITextViewDelegate> {

	NSAttributedString* _titleAttrString;
	NSAttributedString* _deadlineAttrString;
	NSAttributedString* _locationAttrString;
	NSAttributedString* _notesAttrString;
	NSAttributedString* _calendarAttrString;
	UILabel* _emptyTitlePositioningLabel;
	UILabel* _deadlineLabel;
	UILabel* _locationLabel;
	UILabel* _notesLabel;
	UILabel* _calendarLabel;
	NSString* _matchingSearchTerm;
	RemindersCheckboxView* _checkboxView;
	UIView* _imageView;
	UIView* _highlightView;
	UIButton* _actionButton;
	NSMutableArray* _textViewTrailingConstraints;
	int _appearance;
	unsigned _contentMask;
	unsigned _positionOfDeadline;
	UIColor* _overdueTextColor;
	NSLayoutConstraint* _textViewBaslineConstraint;
	NSLayoutConstraint* _deadlineBaselineConstraint;
	NSLayoutConstraint* _locationBaselineConstraint;
	NSLayoutConstraint* _notesBaselineConstraint;
	NSLayoutConstraint* _calendarBaselineConstraint;
	NSLayoutConstraint* _bottomPaddingConstraint;
	NSLayoutConstraint* _checkboxWidthConstraint;
	float _checkboxWidthOverride;
	float _checkboxRightMarginOverride;
	char _completed;
	char _overdue;
	UIColor* _calendarColor;
	int _priorityLevel;
	id<RemindersCheckboxCellDelegate> _delegate;
	id<UITextViewDelegate> _textViewDelegate;
	EKExpandingTextView* _textView;
	NSURL* _actionURL;
	NSUserActivity* _userActivity;
	NSDictionary* _titleAttributes;

}

@property (nonatomic,copy) UIColor * calendarColor;                                          //@synthesize calendarColor=_calendarColor - In the implementation block
@property (assign,nonatomic) int priorityLevel;                                              //@synthesize priorityLevel=_priorityLevel - In the implementation block
@property (assign,nonatomic) char completed;                                                 //@synthesize completed=_completed - In the implementation block
@property (assign,nonatomic) char overdue;                                                   //@synthesize overdue=_overdue - In the implementation block
@property (assign,nonatomic,__weak) id<RemindersCheckboxCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UITextViewDelegate> textViewDelegate;                 //@synthesize textViewDelegate=_textViewDelegate - In the implementation block
@property (nonatomic,readonly) EKExpandingTextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (getter=isChecked,nonatomic,readonly) char checked; 
@property (assign,nonatomic) char checkboxHidden; 
@property (nonatomic,copy) NSURL * actionURL;                                                //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy) NSUserActivity * userActivity;                                    //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,retain) NSDictionary * titleAttributes;                                 //@synthesize titleAttributes=_titleAttributes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)marginWidthWithCheckboxWidth:(float)arg1 rightMargin:(float)arg2 ;
+(char)usesCalendarLabel:(int)arg1 ;
+(id)whiteColorForTitleWithAppearance:(int)arg1 completed:(char)arg2 ;
+(id)whiteColorForDetailsWithAppearance:(int)arg1 completed:(char)arg2 ;
+(id)uncoloredPriorityImageForLevel:(int)arg1 ;
+(float)marginWidth;
-(void)fontSizeChanged;
-(void)setOverdue:(char)arg1 ;
-(void)setCheckboxHidden:(char)arg1 ;
-(void)setActionURL:(NSURL *)arg1 ;
-(void)setDeadline:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 contentMask:(unsigned)arg4 deadlinePosition:(unsigned)arg5 width:(float)arg6 ;
-(void)setTextViewDelegate:(id<UITextViewDelegate>)arg1 ;
-(void)updateTitleConstraintsIfNeeded;
-(void)resetTextViewAttributes;
-(id)deadlineAttributedString;
-(id)locationAttributedString;
-(id)notesAttributedString;
-(void)setCheckboxEnabled:(char)arg1 ;
-(id)plainTextTitle;
-(void)setMatchingSearchTerm:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 contentMask:(unsigned)arg4 deadlinePosition:(unsigned)arg5 width:(float)arg6 checkboxWidth:(float)arg7 ;
-(void)addTextView;
-(char)hasDeadline;
-(void)updateMaxLayoutWidth;
-(void)updateBottomPaddingConstraint;
-(float)checkboxWidthNeeded;
-(void)addTextViewConstraints:(char)arg1 ;
-(void)updateTitleAttributes;
-(void)updateDeadlineAttributes;
-(id)detailAttributes;
-(void)updateTextAttributes;
-(char)checkboxHidden;
-(id)titleFont:(char)arg1 ;
-(id)priorityImageForLevel:(int)arg1 ;
-(void)updateTitleString;
-(id)titleAttributedString:(id)arg1 ;
-(id)detailsFont;
-(id)overdueDetailAttributes;
-(void)setOverdue:(char)arg1 color:(id)arg2 ;
-(void)_tap;
-(void)setActionURL:(id)arg1 buttonColor:(id)arg2 ;
-(id)actionButtonWithImage:(id)arg1 ;
-(void)addActionButton:(id)arg1 ;
-(void)_launchUserActivity;
-(void)checkboxTapped;
-(void)vibrantize;
-(void)setVibrantHightlight:(char)arg1 ;
-(id)calendarAttributedString;
-(char)overdue;
-(id<UITextViewDelegate>)textViewDelegate;
-(NSURL *)actionURL;
-(void)setTitleAttributes:(NSDictionary *)arg1 ;
-(void)setCalendarName:(id)arg1 ;
-(char)hasNotes;
-(void)setNotes:(id)arg1 ;
-(char)completed;
-(void)setDelegate:(id<RemindersCheckboxCellDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<RemindersCheckboxCellDelegate>)delegate;
-(void)layoutMarginsDidChange;
-(void)setCompleted:(char)arg1 ;
-(char)_shouldMaskToBoundsWhileAnimating;
-(void)prepareForReuse;
-(void)_setShouldHaveFullLengthBottomSeparator:(char)arg1 ;
-(void)setAccessoryType:(int)arg1 ;
-(void)willTransitionToState:(unsigned)arg1 ;
-(void)didTransitionToState:(unsigned)arg1 ;
-(void)beginEditing;
-(void)endEditing;
-(id)titleAttributedString;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(char)_shouldHaveFullLengthBottomSeparator;
-(char)hasTitle;
-(EKExpandingTextView *)textView;
-(void)setLocation:(id)arg1 ;
-(char)isChecked;
-(UIColor *)calendarColor;
-(void)setCalendarColor:(UIColor *)arg1 ;
-(void)setupConstraints;
-(void)updateMarginConstraints;
-(char)hasLocation;
-(void)setPriorityLevel:(int)arg1 ;
-(int)priorityLevel;
-(NSDictionary *)titleAttributes;
@end
