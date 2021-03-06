/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/NSFetchedResultsControllerDelegate.h>

@class NSFetchedResultsController, NSString, NSMutableDictionary;

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate> {

	NSFetchedResultsController* _frc;
	char _isObserving;
	NSString* _identifier;
	NSMutableDictionary* _handlers;

}

@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char isObserving;                            //@synthesize isObserving=_isObserving - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 ;
-(id)addResultsChangedHandler:(id)arg1 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)results:(/*^block*/id)arg1 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnObjectsAsFaults:(char)arg4 ;
-(void)removeResultsChangedHandler:(id)arg1 ;
-(void)startObserving;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)handlers;
-(id)uuids;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPredicate:(id)arg1 ;
-(void)cleanup;
-(char)isObserving;
-(void)setIsObserving:(char)arg1 ;
-(id)initWithFetchRequest:(id)arg1 ;
@end

