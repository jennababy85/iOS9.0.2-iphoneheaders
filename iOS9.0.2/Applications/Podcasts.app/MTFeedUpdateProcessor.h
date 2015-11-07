/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTBaseProcessor.h>

@interface MTFeedUpdateProcessor : MTBaseProcessor
-(void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2 ;
-(double)updatePredicateDuration;
-(void)_reCheck;
-(void)_lpmDidChange;
-(char)_isLPMEnabled;
-(void)checkAutoDownloadsForUuids:(id)arg1 ;
-(void)dealloc;
-(void)start;
-(id)predicate;
-(id)entityName;
@end
