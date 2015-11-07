/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {

	NSMutableArray* _array;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _index;
	unsigned _dequeued;

}

@property (nonatomic,readonly) unsigned count; 
-(unsigned)countByEnumeratingWithState:(SCD_Struct_BR12*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(void)_filterIndex:(id)arg1 ;
-(void)addNotification:(id)arg1 asDead:(char)arg2 ;
-(void)addDequeueCallback:(/*^block*/id)arg1 ;
-(void)processDequeueCallbacks;
-(void)dequeue:(unsigned)arg1 block:(/*^block*/id)arg2 ;
@end
