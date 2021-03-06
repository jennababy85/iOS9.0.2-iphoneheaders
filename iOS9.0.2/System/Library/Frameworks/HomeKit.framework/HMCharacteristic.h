/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, NSArray, HMService, HMCharacteristicMetadata, NSNumber, NSObject, HMDelegateCaller;

@interface HMCharacteristic : NSObject <NSSecureCoding, HMObjectMerge> {

	char _notificationEnabled;
	NSUUID* _uniqueIdentifier;
	NSString* _characteristicType;
	NSArray* _properties;
	id _value;
	HMService* _service;
	HMCharacteristicMetadata* _metadata;
	NSNumber* _instanceID;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;

}

@property (nonatomic,copy) NSString * characteristicType;                                        //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (assign,nonatomic,__weak) HMService * service;                                         //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSArray * properties;                                                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) HMCharacteristicMetadata * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) id value;                                                             //@synthesize value=_value - In the implementation block
@property (assign,getter=isNotificationEnabled,nonatomic) char notificationEnabled;              //@synthesize notificationEnabled=_notificationEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * instanceID;                                            //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                           //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                         //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                                  //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_characteristicTypeAsString:(id)arg1 ;
+(char)supportsSecureCoding;
-(HMDelegateCaller *)delegateCaller;
-(id)mapCuapProperties:(int)arg1 ;
-(void)setNotificationEnabled:(char)arg1 ;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_writeValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_readValueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enableNotification:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateAuthorizationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)mapToCuapProperties:(id)arg1 ;
-(void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 ;
-(void)_updateValue:(id)arg1 ;
-(void)writeValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readValueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableNotification:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAuthorizationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_characteristicTypeDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)localizedDescription;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSArray *)properties;
-(void)setProperties:(NSArray *)arg1 ;
-(HMService *)service;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSNumber *)instanceID;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(char)isNotificationEnabled;
-(NSString *)characteristicType;
-(void)setCharacteristicType:(NSString *)arg1 ;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(HMCharacteristicMetadata *)metadata;
-(void)setService:(HMService *)arg1 ;
@end

