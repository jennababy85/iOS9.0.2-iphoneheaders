/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <coreauthd/coreauthd-Structs.h>
@interface MechanismManager : NSObject {

	int _evaluatedPolicy;

}

@property (assign) int evaluatedPolicy;              //@synthesize evaluatedPolicy=_evaluatedPolicy - In the implementation block
+(id)sharedInstance;
-(void)mechanismForACMRequirement:(const ACMRequirementRef)arg1 policy:(int)arg2 internalInfo:(id)arg3 uiDelegate:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)_nonUiMechanismForACMRequirement:(const ACMRequirementRef)arg1 policy:(int)arg2 state:(unsigned*)arg3 error:(id*)arg4 ;
-(id)_restrictedNonUiMechanism:(id)arg1 availabilityEvents:(id*)arg2 policy:(int)arg3 ;
-(id)_buildUiForMechanism:(id)arg1 policy:(int)arg2 internalInfo:(id)arg3 uiDelegate:(id)arg4 error:(id*)arg5 ;
-(unsigned)_acmPurposeForPolicy:(int)arg1 ;
-(id)_nonUiSubmechanismsForACMRequirement:(const ACMRequirementRef)arg1 policy:(int)arg2 error:(id*)arg3 ;
-(int)evaluatedPolicy;
-(void)setEvaluatedPolicy:(int)arg1 ;
@end

