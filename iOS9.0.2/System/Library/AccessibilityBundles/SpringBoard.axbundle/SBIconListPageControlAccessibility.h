/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/__SBIconListPageControlAccessibility_super.h>

@interface SBIconListPageControlAccessibility : __SBIconListPageControlAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_setNewPage:(int)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)_accessibilitySupportsActivateAction;
-(char)_accessibilityServesAsContainingParentForOrdering;
-(id)_accessibilityScrollAncestor;
-(void)_accessibilityCurrentPageDidChange;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(char)accessibilityActivate;
@end
