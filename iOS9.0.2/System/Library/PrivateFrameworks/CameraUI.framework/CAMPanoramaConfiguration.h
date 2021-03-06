/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CAMPanoramaConfiguration : NSObject <NSCoding> {

	int _sampleBufferWidth;
	int _sampleBufferHeight;
	int _ringBufferSize;
	SCD_Struct_CA2 _minimumFramerate;
	SCD_Struct_CA2 _maximumFramerate;

}

@property (nonatomic,readonly) int sampleBufferWidth;                        //@synthesize sampleBufferWidth=_sampleBufferWidth - In the implementation block
@property (nonatomic,readonly) int sampleBufferHeight;                       //@synthesize sampleBufferHeight=_sampleBufferHeight - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 minimumFramerate;              //@synthesize minimumFramerate=_minimumFramerate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 maximumFramerate;              //@synthesize maximumFramerate=_maximumFramerate - In the implementation block
@property (nonatomic,readonly) int ringBufferSize;                           //@synthesize ringBufferSize=_ringBufferSize - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithACTConfiguration:(id)arg1 ;
-(int)sampleBufferWidth;
-(int)sampleBufferHeight;
-(SCD_Struct_CA2)minimumFramerate;
-(SCD_Struct_CA2)maximumFramerate;
-(int)ringBufferSize;
@end

