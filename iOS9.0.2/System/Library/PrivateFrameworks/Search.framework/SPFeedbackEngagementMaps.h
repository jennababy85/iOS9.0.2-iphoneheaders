/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPFeedbackEngagement.h>

@interface SPFeedbackEngagementMaps : SPFeedbackEngagement {

	int _feedbackType;

}

@property (assign,nonatomic) int feedbackType;              //@synthesize feedbackType=_feedbackType - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFeedbackType:(int)arg1 ;
-(int)feedbackType;
-(id)parsecFeedbackFromSession:(id)arg1 ;
@end
