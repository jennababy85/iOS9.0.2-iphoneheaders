/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSMutableArray, SKUIHeaderViewElement, NSArray;

@interface SKUITracklistViewElement : SKUIViewElement {

	NSMutableArray* _sections;
	NSMutableArray* _tracks;

}

@property (nonatomic,readonly) SKUIHeaderViewElement * header; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * tracks; 
-(NSArray *)sections;
-(SKUIHeaderViewElement *)header;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)pageComponentType;
-(void)enumerateTracksUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)tracks;
@end
