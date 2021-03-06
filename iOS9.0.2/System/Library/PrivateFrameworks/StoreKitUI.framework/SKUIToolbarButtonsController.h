/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, SKUIToolbarViewElement;

@interface SKUIToolbarButtonsController : NSObject {

	NSMapTable* _buttonItemElements;
	SKUIToolbarViewElement* _toolbarElement;

}
-(void)_buttonAction:(id)arg1 ;
-(void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2 ;
-(id)initWithToolbarViewElement:(id)arg1 ;
-(id)addButtonItemWithButtonViewElement:(id)arg1 ;
-(void)disconnectAllButtons;
@end

