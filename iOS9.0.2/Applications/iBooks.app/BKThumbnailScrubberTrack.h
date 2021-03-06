/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKScrubberTrack.h>

@class UIColor;

@interface BKThumbnailScrubberTrack : BKScrubberTrack {

	int _segmentCount;
	Class _cellClass;
	CGSize _segmentSize;
	UIColor* _segmentStrokeColor;

}

@property (assign,nonatomic) int segmentCount;                          //@synthesize segmentCount=_segmentCount - In the implementation block
@property (assign,nonatomic) Class cellClass;                           //@synthesize cellClass=_cellClass - In the implementation block
@property (assign,nonatomic) CGSize segmentSize;                        //@synthesize segmentSize=_segmentSize - In the implementation block
@property (nonatomic,retain) UIColor * segmentStrokeColor;              //@synthesize segmentStrokeColor=_segmentStrokeColor - In the implementation block
-(CGSize)segmentSize;
-(UIColor *)segmentStrokeColor;
-(void)setSegmentSize:(CGSize)arg1 ;
-(void)setSegmentStrokeColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(Class)cellClass;
-(void)setCellClass:(Class)arg1 ;
-(void)setSegmentCount:(int)arg1 ;
-(id)cellAtIndex:(unsigned)arg1 ;
-(int)segmentCount;
@end

