/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/CalLogFormatter.h>

@class NSDateFormatter, NSString;

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter> {

	char _includeFunction;
	char _includeLevel;
	char _includeLogName;
	char _includeMessage;
	char _includeProcessID;
	char _includeProcessName;
	char _includeMachPort;
	char _includeTimestamp;
	char _includeEnvelopePartNames;
	char _useTinyEnvelopePartNames;
	char _useCompactForm;
	char _usePrettyTimestamp;
	NSDateFormatter* _dateFormatter;

}

@property (assign,nonatomic) char includeFunction;                         //@synthesize includeFunction=_includeFunction - In the implementation block
@property (assign,nonatomic) char includeLevel;                            //@synthesize includeLevel=_includeLevel - In the implementation block
@property (assign,nonatomic) char includeLogName;                          //@synthesize includeLogName=_includeLogName - In the implementation block
@property (assign,nonatomic) char includeMessage;                          //@synthesize includeMessage=_includeMessage - In the implementation block
@property (assign,nonatomic) char includeProcessID;                        //@synthesize includeProcessID=_includeProcessID - In the implementation block
@property (assign,nonatomic) char includeProcessName;                      //@synthesize includeProcessName=_includeProcessName - In the implementation block
@property (assign,nonatomic) char includeMachPort;                         //@synthesize includeMachPort=_includeMachPort - In the implementation block
@property (assign,nonatomic) char includeTimestamp;                        //@synthesize includeTimestamp=_includeTimestamp - In the implementation block
@property (assign,nonatomic) char includeEnvelopePartNames;                //@synthesize includeEnvelopePartNames=_includeEnvelopePartNames - In the implementation block
@property (assign,nonatomic) char useTinyEnvelopePartNames;                //@synthesize useTinyEnvelopePartNames=_useTinyEnvelopePartNames - In the implementation block
@property (assign,nonatomic) char useCompactForm;                          //@synthesize useCompactForm=_useCompactForm - In the implementation block
@property (assign,nonatomic) char usePrettyTimestamp;                      //@synthesize usePrettyTimestamp=_usePrettyTimestamp - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(id)init;
-(id)newFormattedString:(id)arg1 ;
-(char)includeEnvelopePartNames;
-(char)useTinyEnvelopePartNames;
-(char)useCompactForm;
-(char)includeTimestamp;
-(char)usePrettyTimestamp;
-(char)includeLogName;
-(char)includeLevel;
-(char)includeProcessName;
-(char)includeProcessID;
-(char)includeMachPort;
-(char)includeFunction;
-(char)includeMessage;
-(void)setIncludeFunction:(char)arg1 ;
-(void)setIncludeLevel:(char)arg1 ;
-(void)setIncludeLogName:(char)arg1 ;
-(void)setIncludeMessage:(char)arg1 ;
-(void)setIncludeProcessID:(char)arg1 ;
-(void)setIncludeProcessName:(char)arg1 ;
-(void)setIncludeMachPort:(char)arg1 ;
-(void)setIncludeTimestamp:(char)arg1 ;
-(void)setIncludeEnvelopePartNames:(char)arg1 ;
-(void)setUseTinyEnvelopePartNames:(char)arg1 ;
-(void)setUseCompactForm:(char)arg1 ;
-(void)setUsePrettyTimestamp:(char)arg1 ;
@end
