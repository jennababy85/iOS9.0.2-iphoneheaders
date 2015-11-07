/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitRoutingIncidentMessage.h>

@class NSString, NSArray;

@interface MergedTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage> {

	NSString* _routingMessage;
	NSArray* _transitIncidents;

}

@property (nonatomic,readonly) NSString * routingMessage;               //@synthesize routingMessage=_routingMessage - In the implementation block
@property (nonatomic,readonly) NSArray * transitIncidents;              //@synthesize transitIncidents=_transitIncidents - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_mergeTransitRoutingIncidentMessages:(id)arg1 ;
-(id)initWithGEOTransitIncidentMessage:(id)arg1 ;
-(id)initWithGEOTransitIncidentMessages:(id)arg1 ;
-(NSString *)routingMessage;
-(NSArray *)transitIncidents;
@end
