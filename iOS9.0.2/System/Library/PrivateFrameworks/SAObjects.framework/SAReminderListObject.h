/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SAReminderRecurrence, SAReminderTrigger, NSArray, NSNumber;

@interface SAReminderListObject : SADomainObject

@property (nonatomic,copy) NSString * accountName; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAReminderRecurrence * recurrence; 
@property (nonatomic,retain) SAReminderTrigger * reminderTrigger; 
@property (nonatomic,copy) NSArray * reminders; 
@property (nonatomic,copy) NSArray * remindersToCreate; 
@property (nonatomic,copy) NSNumber * totalNumOfReminders; 
+(id)listObject;
+(id)listObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAReminderRecurrence *)recurrence;
-(void)setRecurrence:(SAReminderRecurrence *)arg1 ;
-(NSArray *)reminders;
-(void)setReminders:(NSArray *)arg1 ;
-(SAReminderTrigger *)reminderTrigger;
-(void)setReminderTrigger:(SAReminderTrigger *)arg1 ;
-(NSArray *)remindersToCreate;
-(void)setRemindersToCreate:(NSArray *)arg1 ;
-(NSNumber *)totalNumOfReminders;
-(void)setTotalNumOfReminders:(NSNumber *)arg1 ;
-(NSString *)accountName;
-(void)setAccountName:(NSString *)arg1 ;
@end

