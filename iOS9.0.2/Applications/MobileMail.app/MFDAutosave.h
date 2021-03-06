/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailServices/MSAutosave.h>
#import <libobjc.A.dylib/MSDAutosaveProtocol.h>

@class NSString;

@interface MFDAutosave : MSAutosave <MSDAutosaveProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)endpointInfo;
-(void)_autosavedMessageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)autosaveMessageData:(id)arg1 withIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)hasAutosavedMessageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)autosavedMessageDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

