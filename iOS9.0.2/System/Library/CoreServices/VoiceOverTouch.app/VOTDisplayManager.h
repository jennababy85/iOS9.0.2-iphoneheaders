/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>

@class NSLock, AXUIClient, NSString;

@interface VOTDisplayManager : NSObject <AXUIClientDelegate> {

	NSLock* _lock;
	char _displayShutdown;
	char _shouldHideCursor;
	unsigned _currentCursorContextID;
	CGPathRef _currentCursorPath;
	AXUIClient* _uiClient;
	CGRect _currentCursorFrame;

}

@property (assign,nonatomic) char shouldHideCursor;                        //@synthesize shouldHideCursor=_shouldHideCursor - In the implementation block
@property (assign,nonatomic) CGRect currentCursorFrame;                    //@synthesize currentCursorFrame=_currentCursorFrame - In the implementation block
@property (assign,nonatomic) CGPathRef currentCursorPath;                  //@synthesize currentCursorPath=_currentCursorPath - In the implementation block
@property (assign,nonatomic) unsigned currentCursorContextID;              //@synthesize currentCursorContextID=_currentCursorContextID - In the implementation block
@property (nonatomic,retain) AXUIClient * uiClient;                        //@synthesize uiClient=_uiClient - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)displayManager;
-(void)setVoiceOverCaptionText:(id)arg1 withRange:(NSRange)arg2 language:(id)arg3 ;
-(CGRect)currentCursorFrame;
-(CGPathRef)currentCursorPath;
-(unsigned)currentCursorContextID;
-(void)setCursorFrame:(CGRect)arg1 withPath:(CGPathRef)arg2 withContextId:(unsigned)arg3 element:(id)arg4 forceRefresh:(char)arg5 ;
-(void)setUiClient:(AXUIClient *)arg1 ;
-(void)_handleRotorDidChange:(id)arg1 ;
-(AXUIClient *)uiClient;
-(void)clearCursorFrame;
-(void)setCursorFrameForElement:(id)arg1 animated:(char)arg2 ;
-(void)setCursorFrame:(CGRect)arg1 withPath:(CGPathRef)arg2 withContextId:(unsigned)arg3 element:(id)arg4 forceRefresh:(char)arg5 animated:(char)arg6 ;
-(CGRect)_adjustFrameToFitScreen:(CGRect)arg1 ;
-(void)setCurrentCursorFrame:(CGRect)arg1 ;
-(void)setCurrentCursorContextID:(unsigned)arg1 ;
-(void)setCurrentCursorPath:(CGPathRef)arg1 ;
-(char)shouldHideCursor;
-(void)_updateZoom:(CGRect)arg1 element:(id)arg2 ;
-(void)setShouldHideCursor:(char)arg1 ;
-(void)setCursorFrameForElement:(id)arg1 ;
-(void)showBrailleUIWithOrientation:(int)arg1 dotPositions:(id)arg2 typingMode:(int)arg3 ;
-(void)hideBrailleUI;
-(void)updateBrailleUIWithOrientation:(int)arg1 dotPositions:(id)arg2 typingMode:(int)arg3 ;
-(void)flashBrailleInsertedText:(id)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 ;
-(void)updateVisualRotor:(id)arg1 ;
-(void)setSwipeFrames:(id)arg1 ;
-(void)highlightBrailleDots:(id)arg1 ;
-(void)setScreenCurtainEnabled:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)shutdown;
@end

