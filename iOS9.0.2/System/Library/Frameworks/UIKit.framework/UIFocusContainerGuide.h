/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIFocusGuide.h>

@class NSMapTable;

@interface UIFocusContainerGuide : UIFocusGuide {

	char _shouldPreferNearestSubview;
	char _automaticallyDisableWhenContainingFocus;
	NSMapTable* _preferredFocusedViewMapTable;

}

@property (assign,nonatomic) char shouldPreferNearestSubview;                           //@synthesize shouldPreferNearestSubview=_shouldPreferNearestSubview - In the implementation block
@property (assign,nonatomic) char automaticallyDisableWhenContainingFocus;              //@synthesize automaticallyDisableWhenContainingFocus=_automaticallyDisableWhenContainingFocus - In the implementation block
@property (nonatomic,retain) NSMapTable * preferredFocusedViewMapTable;                 //@synthesize preferredFocusedViewMapTable=_preferredFocusedViewMapTable - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)_focusRegionIsEligibleForFocus;
-(id)preferredFocusedViewForHeading:(unsigned)arg1 ;
-(char)shouldPreferNearestSubview;
-(NSMapTable *)preferredFocusedViewMapTable;
-(void)setPreferredFocusedView:(id)arg1 forHeading:(unsigned)arg2 ;
-(void)_didUpdateFocusToPreferredFocusedViewForHeading:(unsigned)arg1 ;
-(void)setShouldPreferNearestSubview:(char)arg1 ;
-(char)automaticallyDisableWhenContainingFocus;
-(void)setAutomaticallyDisableWhenContainingFocus:(char)arg1 ;
-(void)setPreferredFocusedViewMapTable:(NSMapTable *)arg1 ;
@end

