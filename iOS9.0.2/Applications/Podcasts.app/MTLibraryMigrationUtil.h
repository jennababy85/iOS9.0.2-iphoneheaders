/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MTLibraryMigrationUtil : NSObject
+(char)isNewInstall;
+(char)hasCorruptDB;
+(char)needsCoreDataMigration;
+(char)needsDataMigration;
+(char)isMomCompatible:(id)arg1 ;
+(char)createPersistentStoreForModel:(id)arg1 attemptMigration:(char)arg2 ;
+(void)setDataVersion:(int)arg1 ;
+(int)dataVersion;
@end

