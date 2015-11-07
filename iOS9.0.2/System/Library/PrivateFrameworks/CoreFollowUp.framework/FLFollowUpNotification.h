/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, FLFollowUpAction, NSDate;

@interface FLFollowUpNotification : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _informativeText;
	FLFollowUpAction* _activateAction;
	FLFollowUpAction* _dismissAction;
	FLFollowUpAction* _clearAction;
	NSString* _unlockActionLabel;
	NSDate* _relevanceDate;
	unsigned _sqlID;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * informativeText;                       //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,retain) FLFollowUpAction * activateAction;              //@synthesize activateAction=_activateAction - In the implementation block
@property (nonatomic,retain) FLFollowUpAction * dismissAction;               //@synthesize dismissAction=_dismissAction - In the implementation block
@property (nonatomic,retain) FLFollowUpAction * clearAction;                 //@synthesize clearAction=_clearAction - In the implementation block
@property (nonatomic,copy) NSString * unlockActionLabel;                     //@synthesize unlockActionLabel=_unlockActionLabel - In the implementation block
@property (nonatomic,copy) NSDate * relevanceDate;                           //@synthesize relevanceDate=_relevanceDate - In the implementation block
@property (assign,nonatomic) unsigned sqlID;                                 //@synthesize sqlID=_sqlID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(FLFollowUpAction *)dismissAction;
-(void)setDismissAction:(FLFollowUpAction *)arg1 ;
-(void)setUnlockActionLabel:(NSString *)arg1 ;
-(NSString *)unlockActionLabel;
-(NSString *)informativeText;
-(FLFollowUpAction *)activateAction;
-(FLFollowUpAction *)clearAction;
-(void)setClearAction:(FLFollowUpAction *)arg1 ;
-(NSDate *)relevanceDate;
-(void)setRelevanceDate:(NSDate *)arg1 ;
-(void)setInformativeText:(NSString *)arg1 ;
-(void)setActivateAction:(FLFollowUpAction *)arg1 ;
-(unsigned)sqlID;
-(void)setSqlID:(unsigned)arg1 ;
@end
