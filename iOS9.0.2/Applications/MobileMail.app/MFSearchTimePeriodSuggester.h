/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MFSearchSuggester.h>

@interface MFSearchTimePeriodSuggester : MFSearchSuggester
+(unsigned)_minimumUsefulDatePhraseLength;
+(id)_humanTimePeriodsMatchingPhrase:(id)arg1 ;
+(id)_abstractDateComponentsMatchingPhrase:(id)arg1 ;
-(id)generateSuggestionsForPhrase:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_suggestionsForPhrase:(id)arg1 ;
-(id)_suggestionsForInteger:(int)arg1 ;
-(id)_reverseAndUniquify:(id)arg1 ;
-(id)categories;
@end

