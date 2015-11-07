/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSTimeZone, NSCalendar, CLRegion, NSString, NSDictionary;

@interface UILocalNotification : NSObject <NSCopying, NSCoding>

@property (nonatomic,copy) NSDate * fireDate; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) unsigned repeatInterval; 
@property (nonatomic,copy) NSCalendar * repeatCalendar; 
@property (nonatomic,copy) CLRegion * region; 
@property (assign,nonatomic) char regionTriggersOnce; 
@property (nonatomic,copy) NSString * alertBody; 
@property (assign,nonatomic) char hasAction; 
@property (nonatomic,copy) NSString * alertAction; 
@property (nonatomic,copy) NSString * alertLaunchImage; 
@property (nonatomic,copy) NSString * alertTitle; 
@property (nonatomic,copy) NSString * soundName; 
@property (assign,nonatomic) int applicationIconBadgeNumber; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSString * category; 
@property (assign,nonatomic) int totalRepeatCount; 
@property (assign,nonatomic) int remainingRepeatCount; 
@property (assign,nonatomic) char hideAlertTitle; 
@property (assign,nonatomic) char allowSnooze; 
@property (assign,nonatomic) int soundType; 
@property (assign,nonatomic) char interruptAudioAndLockDevice; 
@property (assign,nonatomic) char resumeApplicationInBackground; 
@property (assign,nonatomic) char fireNotificationsWhenAppRunning; 
@property (assign,nonatomic) char showAlarmStatusBarItem; 
@property (nonatomic,copy) NSString * customLockSliderLabel; 
@property (nonatomic,copy) NSString * firedNotificationName; 
@property (nonatomic,copy) NSString * snoozedNotificationName; 
@property (assign,nonatomic) char isTransient; 
@property (nonatomic,copy) NSString * vibrationName; 
@property (assign,getter=isFromSnooze,nonatomic) char fromSnooze; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(char)isTriggeredByDate;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(int)compareFireDates:(id)arg1 ;
-(void)clearNonSystemProperties;
-(void)validate;
-(char)isTriggeredByRegion;
@end
