/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCancelable.h>

@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface CNDispatchSource : NSObject <CNCancelable> {

	NSObject*<OS_dispatch_source> _source;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSource:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)source;
-(void)finalize;
@end
