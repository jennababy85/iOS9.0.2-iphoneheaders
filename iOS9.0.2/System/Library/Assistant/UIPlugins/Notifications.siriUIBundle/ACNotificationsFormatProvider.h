/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Notifications.siriUIBundle/Notifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSpeakableNamespaceProvider.h>
#import <AcousticId/SiriUISnippetPlugin.h>

@class SANotificationObject, NSString, AFBulletin;

@interface ACNotificationsFormatProvider : NSObject <AFSpeakableNamespaceProvider, SiriUISnippetPlugin> {

	SANotificationObject* _notification;
	NSString* _notificationIdentifier;
	AFBulletin* _assistantBulletin;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)identifier;
-(id)stringForExpression:(id)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(void)setAssistantBulletin:(id)arg1 ;
-(id)speakableNamespaceProviderForAceObject:(id)arg1 ;
@end

