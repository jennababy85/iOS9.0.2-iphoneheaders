/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableDictionary, IMTimer;

@interface IDSOTRKeyStorage : NSObject {

	NSRecursiveLock* _lock;
	NSMutableDictionary* _sessionKeyStorage;
	IMTimer* _purgeTimer;
	IMTimer* _saveTimer;
	/*^block*/id _saveCancelBlock;
	/*^block*/id _saveEnqueueBlock;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;
	char _isClassDStoreAvailable;
	char _isClassCStoreAvailable;
	char _isClassAStoreAvailable;

}
+(id)sharedInstance;
-(char)_isUnderFirstDataProtectionLock;
-(void)removeSessionKeyForToken:(id)arg1 ;
-(void)removeSessionKeyForAllTokenFromMainQueue;
-(void)_setSaveTimer;
-(void)_loadIfNeeded;
-(char)isSessionStoreAvailableForDataProtectionClass:(unsigned)arg1 ;
-(char)isUnderLock;
-(id)sessionKeyForToken:(id)arg1 ;
-(void)storeSessionKey:(id)arg1 token:(id)arg2 ;
-(void)loadStoreForDataProtectionClass:(unsigned)arg1 ;
-(void)__saveStoreForDataProtectionClass:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)_save;
-(void)_purgeMap;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)systemDidEnterDataProtectionLock;
-(void)_setPurgeTimer;
-(void)_removeObjectForKey:(id)arg1 ;
-(void)_daemonWillShutdown:(id)arg1 ;
-(void)_saveNow;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)_objectForKey:(id)arg1 ;
@end
