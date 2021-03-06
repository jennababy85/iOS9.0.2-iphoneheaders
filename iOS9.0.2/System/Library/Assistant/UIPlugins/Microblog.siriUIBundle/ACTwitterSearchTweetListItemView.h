/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <UIKit/UIView.h>

@class SAMicroblogMicroblogSearchResultPost, UILabel, UIImageView, ACTwitterRetweetsView;

@interface ACTwitterSearchTweetListItemView : UIView {

	SAMicroblogMicroblogSearchResultPost* _twitterPost;
	UILabel* _fullNameLabel;
	UILabel* _screenNameLabel;
	UIImageView* _profileImageView;
	UILabel* _tweetLabel;
	UILabel* _dateLabel;
	ACTwitterRetweetsView* _retweetsView;

}
+(id)_absoluteCreationDateFormatter;
-(id)initWithTwitterPost:(id)arg1 ;
-(id)_tweetLabelEmphasisedAttributes;
-(float)_topLineBaseline;
-(id)_tweetLabelAttributes;
-(id)_dateLabelAttributes;
-(CGSize)_calculateSizeForWidth:(float)arg1 setFrames:(char)arg2 ;
-(id)_fullNameLabelAttributes;
-(id)_screenNameLabelAttributes;
-(id)_tweetLabelHyperlinkAttributes;
-(id)_contentTextForPost:(id)arg1 ;
-(void)_enumerateMatchingRangesForString:(id)arg1 inString:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)_bottomPadding;
@end

