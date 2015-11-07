/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class OFUIWindowDraggingSession, OFUIWindowDraggingGestureRecognizer, OFUIWindowDraggingAutoscroll, NSMutableDictionary, NSString;

@interface OFUIWindow : UIWindow <UIGestureRecognizerDelegate> {

	OFUIWindowDraggingSession* _draggingSession;
	OFUIWindowDraggingGestureRecognizer* _draggingGestureRecognizer;
	OFUIWindowDraggingAutoscroll* _draggingAutoscroll;
	NSMutableDictionary* _eventsTracking;
	char _showTouches;

}

@property (nonatomic,retain) OFUIWindowDraggingSession * draggingSession;                                  //@synthesize draggingSession=_draggingSession - In the implementation block
@property (assign,nonatomic) char showTouches;                                                             //@synthesize showTouches=_showTouches - In the implementation block
@property (nonatomic,retain) OFUIWindowDraggingGestureRecognizer * draggingGestureRecognizer;              //@synthesize draggingGestureRecognizer=_draggingGestureRecognizer - In the implementation block
@property (nonatomic,retain) OFUIWindowDraggingAutoscroll * draggingAutoscroll;                            //@synthesize draggingAutoscroll=_draggingAutoscroll - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isDragging;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)sendEvent:(id)arg1 ;
-(void)commonInit;
-(void)handleDragging:(id)arg1 ;
-(void)cancelDragging;
-(void)setDraggingSession:(OFUIWindowDraggingSession *)arg1 ;
-(id)beginDraggingItems:(id)arg1 position:(CGPoint)arg2 source:(id)arg3 ;
-(OFUIWindowDraggingSession *)draggingSession;
-(OFUIWindowDraggingGestureRecognizer *)draggingGestureRecognizer;
-(void)setDraggingGestureRecognizer:(OFUIWindowDraggingGestureRecognizer *)arg1 ;
-(OFUIWindowDraggingAutoscroll *)draggingAutoscroll;
-(void)setDraggingAutoscroll:(OFUIWindowDraggingAutoscroll *)arg1 ;
-(char)showTouches;
-(void)setShowTouches:(char)arg1 ;
@end
