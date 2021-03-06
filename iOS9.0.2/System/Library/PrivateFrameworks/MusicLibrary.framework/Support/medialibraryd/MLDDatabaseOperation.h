/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MLDMediaLibraryWriter, MLDActiveTransaction, ML3MusicLibrary, MLDClient, NSDictionary, NSError;

@interface MLDDatabaseOperation : NSOperation {

	MLDMediaLibraryWriter* _writer;
	MLDActiveTransaction* _transaction;
	char _beganNewTransaction;
	char _success;
	unsigned _type;
	ML3MusicLibrary* _library;
	MLDClient* _originatingClient;
	NSDictionary* _options;
	NSDictionary* _attributes;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) MLDClient * originatingClient;                     //@synthesize originatingClient=_originatingClient - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                           //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) MLDActiveTransaction * transaction; 
@property (nonatomic,readonly) char success;                                    //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)databaseOperationForType:(unsigned)arg1 withLibrary:(id)arg2 writer:(id)arg3 ;
-(char)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(id)initWithLibrary:(id)arg1 writer:(id)arg2 ;
-(id)_operationTypeDescription;
-(MLDClient *)originatingClient;
-(void)setOriginatingClient:(MLDClient *)arg1 ;
-(ML3MusicLibrary *)library;
-(MLDActiveTransaction *)transaction;
-(NSError *)error;
-(void)dealloc;
-(id)description;
-(unsigned)type;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(char)success;
-(void)setSuccess:(char)arg1 ;
@end

