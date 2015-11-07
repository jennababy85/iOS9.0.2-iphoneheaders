/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMAccessory, NSString, NSNumber, HMThreadSafeMutableArrayCollection, NSObject, HMMessageDispatcher, HMDelegateCaller, NSArray;

@interface HMService : NSObject <NSSecureCoding, HMObjectMerge> {

	char _userInteractive;
	NSUUID* _uniqueIdentifier;
	HMAccessory* _accessory;
	NSString* _serviceType;
	NSString* _name;
	NSString* _associatedServiceType;
	NSNumber* _instanceID;
	HMThreadSafeMutableArrayCollection* _currentCharacteristics;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;

}

@property (assign,nonatomic,__weak) HMAccessory * accessory;                                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                                                   //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * associatedServiceType;                                         //@synthesize associatedServiceType=_associatedServiceType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * characteristics; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isUserInteractive,nonatomic,readonly) char userInteractive;                        //@synthesize userInteractive=_userInteractive - In the implementation block
@property (nonatomic,readonly) NSNumber * instanceID;                                                //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,copy) HMThreadSafeMutableArrayCollection * currentCharacteristics;              //@synthesize currentCharacteristics=_currentCharacteristics - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                                    //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                               //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                             //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                                      //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_serviceTypeAsString:(id)arg1 ;
+(char)supportsSecureCoding;
-(HMDelegateCaller *)delegateCaller;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_findCharacteristic:(id)arg1 ;
-(void)_addCharacteristic:(id)arg1 ;
-(void)_handleUpdateName:(id)arg1 ;
-(HMThreadSafeMutableArrayCollection *)currentCharacteristics;
-(void)_updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)_hasCharacteristicOfType:(id)arg1 ;
-(void)setAssociatedServiceType:(NSString *)arg1 ;
-(char)_hasCharacteristic:(id)arg1 ;
-(void)updateAssociatedServiceType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_serviceTypeDescription;
-(char)isUserInteractive;
-(void)setCurrentCharacteristics:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)localizedDescription;
-(NSUUID *)uniqueIdentifier;
-(NSArray *)characteristics;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMAccessory *)accessory;
-(NSNumber *)instanceID;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSString *)associatedServiceType;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(void)_removeCharacteristic:(id)arg1 ;
-(void)_handleUpdateAssociatedServiceType:(id)arg1 ;
-(char)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end
