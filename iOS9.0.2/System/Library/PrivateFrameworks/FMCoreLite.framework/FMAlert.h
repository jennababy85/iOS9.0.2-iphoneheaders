/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDictionary;

@interface FMAlert : NSObject <NSSecureCoding> {

	char _showMsgInLockScreen;
	char _dismissMsgOnUnlock;
	char _dismissMsgOnLock;
	NSUUID* _alertId;
	unsigned _category;
	NSString* _msgTitle;
	NSString* _msgText;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	NSDictionary* _additionalSettings;
	/*^block*/id _defaultButtonAction;
	/*^block*/id _alternateButtonAction;
	double _timeout;

}

@property (nonatomic,retain) NSUUID * alertId;                               //@synthesize alertId=_alertId - In the implementation block
@property (assign,nonatomic) unsigned category;                              //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * msgTitle;                            //@synthesize msgTitle=_msgTitle - In the implementation block
@property (nonatomic,retain) NSString * msgText;                             //@synthesize msgText=_msgText - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonTitle;                  //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * alternateButtonTitle;                //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (assign,nonatomic) double timeout;                                 //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) char showMsgInLockScreen;                       //@synthesize showMsgInLockScreen=_showMsgInLockScreen - In the implementation block
@property (assign,nonatomic) char dismissMsgOnUnlock;                        //@synthesize dismissMsgOnUnlock=_dismissMsgOnUnlock - In the implementation block
@property (assign,nonatomic) char dismissMsgOnLock;                          //@synthesize dismissMsgOnLock=_dismissMsgOnLock - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalSettings;              //@synthesize additionalSettings=_additionalSettings - In the implementation block
@property (nonatomic,copy) id defaultButtonAction;                           //@synthesize defaultButtonAction=_defaultButtonAction - In the implementation block
@property (nonatomic,copy) id alternateButtonAction;                         //@synthesize alternateButtonAction=_alternateButtonAction - In the implementation block
+(char)supportsSecureCoding;
-(double)timeout;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setCategory:(unsigned)arg1 ;
-(unsigned)category;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)defaultButtonTitle;
-(NSString *)msgText;
-(NSString *)msgTitle;
-(char)showMsgInLockScreen;
-(char)dismissMsgOnUnlock;
-(char)dismissMsgOnLock;
-(NSDictionary *)additionalSettings;
-(id)defaultButtonAction;
-(id)alternateButtonAction;
-(void)setAlertId:(NSUUID *)arg1 ;
-(void)setMsgTitle:(NSString *)arg1 ;
-(void)setMsgText:(NSString *)arg1 ;
-(void)setShowMsgInLockScreen:(char)arg1 ;
-(void)setDismissMsgOnUnlock:(char)arg1 ;
-(void)setDismissMsgOnLock:(char)arg1 ;
-(NSUUID *)alertId;
-(void)setAdditionalSettings:(NSDictionary *)arg1 ;
-(void)setDefaultButtonAction:(id)arg1 ;
-(void)setAlternateButtonAction:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
@end

