/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSArray, SKUIStorePageSectionContext;

@interface SKUIStorePageSplit : NSObject <NSCopying> {

	UIColor* _dividerColor;
	int _numberOfPageSections;
	NSArray* _pageComponents;
	SKUIStorePageSectionContext* _sectionContext;
	float _widthFraction;

}

@property (nonatomic,copy) UIColor * dividerColor;                                      //@synthesize dividerColor=_dividerColor - In the implementation block
@property (assign,nonatomic) int numberOfPageSections;                                  //@synthesize numberOfPageSections=_numberOfPageSections - In the implementation block
@property (nonatomic,copy) NSArray * pageComponents;                                    //@synthesize pageComponents=_pageComponents - In the implementation block
@property (nonatomic,retain) SKUIStorePageSectionContext * sectionContext;              //@synthesize sectionContext=_sectionContext - In the implementation block
@property (assign,nonatomic) float widthFraction;                                       //@synthesize widthFraction=_widthFraction - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)dividerColor;
-(void)setDividerColor:(UIColor *)arg1 ;
-(void)setPageComponents:(NSArray *)arg1 ;
-(NSArray *)pageComponents;
-(SKUIStorePageSectionContext *)sectionContext;
-(void)setSectionContext:(SKUIStorePageSectionContext *)arg1 ;
-(void)setNumberOfPageSections:(int)arg1 ;
-(int)numberOfPageSections;
-(void)setWidthFraction:(float)arg1 ;
-(float)widthFraction;
@end
