/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class PLPhotoCommentEntryView;

@interface PLPhotoPostCommentTextEntryCell : UITableViewCell {

	PLPhotoCommentEntryView* _textEntryView;

}

@property (nonatomic,retain) PLPhotoCommentEntryView * textEntryView;              //@synthesize textEntryView=_textEntryView - In the implementation block
+(float)heightForWidth:(float)arg1 ;
-(PLPhotoCommentEntryView *)textEntryView;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTextEntryView:(PLPhotoCommentEntryView *)arg1 ;
@end
