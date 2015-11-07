/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSetChanges.h>

@class NSSet, NSMutableArray;

@interface NSConcreteSetChanges : NSSetChanges {

	NSSet* _backing;
	NSMutableArray* _changes;
	char _backingIsMutable;

}
-(void)enumerateChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateChanges:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addChange:(id)arg1 ;
-(void)filterObjectsWithTest:(/*^block*/id)arg1 ;
-(void)transformObjectsWithBlock:(/*^block*/id)arg1 ;
-(void)_fault;
-(void)setSet:(id)arg1 ;
-(void)_willChange;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(void)unionSet:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(unsigned)changeCount;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned)arg2 ;
-(id)member:(id)arg1 ;
-(id)initWithSet:(id)arg1 ;
@end
