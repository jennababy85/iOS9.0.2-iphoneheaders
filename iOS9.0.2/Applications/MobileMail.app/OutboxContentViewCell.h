/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MailboxContentViewCell.h>

@class UIActivityIndicatorView, UIButton;

@interface OutboxContentViewCell : MailboxContentViewCell {

	UIActivityIndicatorView* _activityIndicator;
	UIButton* _errorButton;
	unsigned _inDelivery : 1;

}
-(void)updateFlagsFromMessage:(id)arg1 ;
-(void)layoutStatusIndicatorViews;
-(void)_errorButtonPressed:(id)arg1 ;
-(void)dealloc;
@end
