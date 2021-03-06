/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <backupd/backupd-Structs.h>
@interface MBKeyBagFile : NSObject {

	mkbbackuprefRef _handle;

}
+(id)keybagFileWithPath:(id)arg1 error:(id*)arg2 ;
+(char)decryptFileWithPath:(id)arg1 keybag:(id)arg2 encryptionKey:(id)arg3 size:(unsigned long long)arg4 error:(id*)arg5 ;
+(const char*)keyBagUUIDForEncryptionKey:(id)arg1 ;
+(char)validateWrappedKey:(id)arg1 withKeyBag:(id)arg2 forPath:(id)arg3 error:(id*)arg4 ;
-(char)validateEncryptionKey:(id)arg1 error:(id*)arg2 ;
-(id)encryptionKeyWithError:(id*)arg1 ;
-(long)readWithBytes:(void*)arg1 count:(unsigned long)arg2 offset:(unsigned long long)arg3 error:(id*)arg4 ;
-(unsigned long long)size;
-(void)dealloc;
-(id)initWithHandle:(mkbbackuprefRef)arg1 ;
-(char)closeWithError:(id*)arg1 ;
@end

