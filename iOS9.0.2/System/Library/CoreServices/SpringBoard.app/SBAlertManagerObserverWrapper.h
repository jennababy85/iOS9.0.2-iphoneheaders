/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBAlertManagerObserver;
#import <SpringBoard/SpringBoard-Structs.h>
@interface SBAlertManagerObserverWrapper : NSObject {

	id<SBAlertManagerObserver> _observer;
	struct {
		unsigned willActivate : 1;
		unsigned didActivate : 1;
		unsigned willDeactivate : 1;
		unsigned didDeactivate : 1;
		unsigned didChangeTop : 1;
		unsigned topBgStyleChange : 1;
		unsigned topStatusBarVisibile : 1;
		unsigned topOrientationEnable : 1;
		unsigned didCreateWindow : 1;
		unsigned willTearDownWindow : 1;
		unsigned didTearDownWindow : 1;
		unsigned didRemoveFromWindow : 1;
	}  _flags;

}
-(id)initWithObserver:(id)arg1 flags:(SCD_Struct_SB38)arg2 ;
@end
