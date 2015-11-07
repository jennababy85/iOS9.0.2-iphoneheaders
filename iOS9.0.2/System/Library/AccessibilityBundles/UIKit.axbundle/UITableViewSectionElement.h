/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {

	char _isHeader;
	int _section;
	NSMutableArray* _children;

}

@property (assign,nonatomic) int section;                //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) char isHeader;              //@synthesize isHeader=_isHeader - In the implementation block
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)_accessibilityIsNotFirstElement;
-(void)_accessibilityClearChildren;
-(id)accessibilityContainerElements;
-(void)setIsHeader:(char)arg1 ;
-(char)accessibilityScrollToVisible;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(void)updateMockView:(id)arg1 ;
-(id)accessibilityChildren;
-(void)_appendTextChildWithTitle:(id)arg1 ;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)section;
-(id)accessibilityIdentifier;
-(CGRect)accessibilityFrame;
-(char)isAccessibilityElement;
-(void)setSection:(int)arg1 ;
-(char)isHeader;
@end
