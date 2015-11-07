/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, NSString, NSDate, NSArray;

@interface FMFABRecord : NSObject {

	void* recordRef;
	UIImage* image;
	UIImage* _smallImage;
	void* _recordRefWithImage;
	double lastUpdatedTime;

}

@property (assign,nonatomic) void* recordRef; 
@property (nonatomic,readonly) NSString * compositeName; 
@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSString * middleName; 
@property (nonatomic,readonly) NSString * companyName; 
@property (nonatomic,readonly) NSString * prefix; 
@property (nonatomic,readonly) NSString * suffix; 
@property (nonatomic,readonly) NSString * nickname; 
@property (nonatomic,readonly) NSString * firstNamePhonetic; 
@property (nonatomic,readonly) NSString * lastNamePhonetic; 
@property (nonatomic,readonly) NSString * middleNamePhonetic; 
@property (nonatomic,readonly) NSString * organization; 
@property (nonatomic,readonly) NSString * jobTitle; 
@property (nonatomic,readonly) NSString * department; 
@property (nonatomic,readonly) NSDate * birthday; 
@property (nonatomic,readonly) NSString * note; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * modificationDate; 
@property (assign,nonatomic) double lastUpdatedTime; 
@property (nonatomic,readonly) NSArray * emails; 
@property (nonatomic,readonly) NSArray * phones; 
@property (nonatomic,readonly) NSArray * addresses; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * smallImage;                         //@synthesize smallImage=_smallImage - In the implementation block
@property (assign,nonatomic) void* recordRefWithImage;                     //@synthesize recordRefWithImage=_recordRefWithImage - In the implementation block
+(id)valueForList:(void*)arg1 forIdentifier:(int)arg2 ;
+(id)addressStringForAddress:(id)arg1 ;
+(id)prettyAddressForDict:(id)arg1 ;
-(void*)recordRef;
-(void)setLastUpdatedTime:(double)arg1 ;
-(double)lastUpdatedTime;
-(void)imageRemoved;
-(void)setRecordRef:(void*)arg1 ;
-(void)addressBookDidUpdate:(id)arg1 ;
-(id)_multiValueDictionaryArrayForProperty:(int)arg1 ;
-(void)setRecordRefWithImage:(void*)arg1 ;
-(void*)recordRefWithImage;
-(void)setSmallImage:(UIImage *)arg1 ;
-(NSString *)middleNamePhonetic;
-(UIImage *)smallImage;
-(NSString *)jobTitle;
-(NSDate *)birthday;
-(NSString *)middleName;
-(id)shortName;
-(NSDate *)creationDate;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSArray *)addresses;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(UIImage *)image;
-(NSDate *)modificationDate;
-(NSString *)compositeName;
-(NSString *)department;
-(id)initWithABRecord:(void*)arg1 ;
-(NSString *)organization;
-(NSString *)note;
-(NSString *)suffix;
-(NSArray *)emails;
-(NSArray *)phones;
-(NSString *)companyName;
-(NSString *)firstNamePhonetic;
-(NSString *)lastNamePhonetic;
-(NSString *)prefix;
-(NSString *)nickname;
@end
