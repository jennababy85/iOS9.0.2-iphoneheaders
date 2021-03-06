/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol RUIWebContainerViewDelegate;
@class UIWebView, NSString;

@interface RUIWebContainerView : UIView <UIWebViewDelegate> {

	char _highlighted;
	char _reallyHighlighted;
	UIWebView* _webView;
	id<RUIWebContainerViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIWebView * webView;                                        //@synthesize webView=_webView - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (assign,nonatomic,__weak) id<RUIWebContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)heightForWidth:(float)arg1 ;
-(void)setDelegate:(id<RUIWebContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<RUIWebContainerViewDelegate>)delegate;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(UIWebView *)webView;
-(void)setUserStyleSheet:(id)arg1 ;
-(char)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)_setHighlightedNow;
-(id)initWithContent:(id)arg1 baseURL:(id)arg2 ;
@end

