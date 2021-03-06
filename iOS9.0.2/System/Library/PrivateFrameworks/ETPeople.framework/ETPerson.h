/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ETPeople.framework/ETPeople
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ETPeople/ETPeople-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSSet;

@interface ETPerson : NSObject <NSCopying> {

	NSString* _primaryDestination;
	NSString* _initials;
	NSNumber* _phoneNumberCount;
	NSNumber* _emailAddressCount;
	int _abRecordID;
	NSString* _abRecordGUID;
	NSString* _abDatabaseUID;
	NSString* _name;
	NSSet* _allValues;
	char _hasUnreadMessages;
	char _needsSave;
	NSString* _preferredReplyAs;

}

@property (nonatomic,readonly) char hasUnreadMessages;                 //@synthesize hasUnreadMessages=_hasUnreadMessages - In the implementation block
@property (nonatomic,retain) NSString * preferredReplyAs;              //@synthesize preferredReplyAs=_preferredReplyAs - In the implementation block
@property (assign,nonatomic) char needsSave;                           //@synthesize needsSave=_needsSave - In the implementation block
+(id)_allPhoneValuesInSet:(id)arg1 ;
+(id)_allEmailValuesInSet:(id)arg1 ;
+(id)preferredNameForPerson:(void*)arg1 ;
+(id)allValuesForPerson:(void*)arg1 ;
+(id)_allEmailValuesForRecord:(void*)arg1 ;
+(id)_allPhoneValuesForRecord:(void*)arg1 ;
+(int)addValue:(void*)arg1 withLabel:(CFStringRef)arg2 toPerson:(void*)arg3 property:(int)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(char)needsSave;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)allValues;
-(id)dictionaryRepresentation;
-(id)displayName;
-(void)setNeedsSave:(char)arg1 ;
-(char)hasUnreadMessages;
-(char)updateFromDictionaryRepresentation:(id)arg1 ;
-(void)_reconcile:(void*)arg1 canPostChangeNotification:(char)arg2 ;
-(void)_setABRecordGUID:(id)arg1 ;
-(id)primaryDestination;
-(id)abRecordGUID;
-(id)_recordMatchDictionaryFromCFArray:(CFArrayRef)arg1 followLinks:(char)arg2 addressBook:(void*)arg3 ;
-(void*)_bestRecordMatchFromDictionary:(id)arg1 addressBook:(void*)arg2 ;
-(float)_allValuesMatchScore:(id)arg1 ;
-(id)initWithDestinations:(id)arg1 addressBook:(void*)arg2 ;
-(id)initWithABRecordGUID:(id)arg1 addressBook:(void*)arg2 ;
-(id)initWithFavorite:(id)arg1 addressBook:(void*)arg2 ;
-(void)refreshWithAddressBook:(void*)arg1 ;
-(id)displayNameWithUnreadCount:(unsigned)arg1 ;
-(void)setPreferredReplyAs:(NSString *)arg1 ;
-(void*)copyABPersonWithAddressBook:(void*)arg1 ;
-(id)abDatabaseUID;
-(char)isEqualToDictionaryRepresentation:(id)arg1 ;
-(char)isLikePerson:(id)arg1 ;
-(NSString *)preferredReplyAs;
-(char)hasName;
-(id)initials;
-(void)_postChangeNotification;
@end

