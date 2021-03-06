/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/RAPAuxiliaryControlsRecording.h>

@class NSArray, NSString;

@interface RAPAuxiliaryControlsRecording : NSObject <RAPAuxiliaryControlsRecording> {

	char _hasOriginatingAuxiliaryControlIndex;
	NSArray* _auxiliaryControls;
	unsigned long long _originatingAuxiliaryControlIndex;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * auxiliaryControls;                                      //@synthesize auxiliaryControls=_auxiliaryControls - In the implementation block
@property (nonatomic,readonly) char hasOriginatingAuxiliaryControlIndex;                         //@synthesize hasOriginatingAuxiliaryControlIndex=_hasOriginatingAuxiliaryControlIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long originatingAuxiliaryControlIndex;              //@synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex - In the implementation block
-(id)initWithControlsGeo:(id)arg1 originatingIndex:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)auxiliaryControls;
-(unsigned long long)originatingAuxiliaryControlIndex;
-(char)hasOriginatingAuxiliaryControlIndex;
@end

