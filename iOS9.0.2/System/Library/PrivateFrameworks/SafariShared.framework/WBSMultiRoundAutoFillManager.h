/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSTimer, NSMutableSet;

@interface WBSMultiRoundAutoFillManager : NSObject {

	unsigned _autoFillAttemptTrigger;
	NSDictionary* _formMetadataFromPreviousAutoFillAttempt;
	char _userDidInteractWithForm;
	unsigned _numberOfFollowUpAutoFillAttempts;
	NSTimer* _timerForFollowUpAutoFill;
	NSMutableSet* _controlUniqueIDToBeIgnoredByFollowUpAutoFill;

}
-(void)dealloc;
-(id)init;
-(unsigned)currentAutoFillAttemptTrigger;
-(char)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(/*^block*/id)arg2 ;
-(void)didEditFormText;
-(char)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned)arg2 ;
@end

