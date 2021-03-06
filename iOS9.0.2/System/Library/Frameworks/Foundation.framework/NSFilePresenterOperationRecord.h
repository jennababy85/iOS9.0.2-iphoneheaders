/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {

	NSString* operationDescription;
	int state;
	id reactor;

}

@property (readonly) NSString * operationDescription; 
@property (readonly) int state; 
@property (assign) id reactor; 
+(id)operationRecordWithDescription:(id)arg1 ;
-(void)setReactor:(id)arg1 ;
-(void)didBegin;
-(void)willEnd;
-(id)reactor;
-(NSString *)operationDescription;
-(void)dealloc;
-(id)description;
-(int)state;
-(void)didEnd;
@end

