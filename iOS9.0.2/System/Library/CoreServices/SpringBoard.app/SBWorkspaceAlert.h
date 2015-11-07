/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>

@class SBAlert;

@interface SBWorkspaceAlert : SBWorkspaceEntity {

	SBAlert* _alert;

}

@property (nonatomic,retain) SBAlert * alert;                        //@synthesize alert=_alert - In the implementation block
@property (nonatomic,retain,readonly) Class alertClass; 
+(id)entityForAlert:(id)arg1 ;
-(char)representsAlertOfClass:(Class)arg1 ;
-(id)representedDisplay;
-(Class)alertClass;
-(/*^block*/id)_generator;
-(char)isAlertEntity;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBAlert *)alert;
-(void)setAlert:(SBAlert *)arg1 ;
-(id)initWithAlert:(id)arg1 ;
@end
