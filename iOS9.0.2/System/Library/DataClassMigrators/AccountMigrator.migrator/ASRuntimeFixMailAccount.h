/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/AccountMigrator.migrator/AccountMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountMigrator/ASRuntimeFixProtocol.h>

@class NSSet, NSString;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol> {

	char _shouldNotifyMobileMail;
	NSSet* _supportedMailClasses;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2 ;
-(void)accountsHaveBeenSaved:(char)arg1 ;
-(id)supportedAccountTypes;
-(char)_cleanupAccountClass:(id)arg1 ;
@end

