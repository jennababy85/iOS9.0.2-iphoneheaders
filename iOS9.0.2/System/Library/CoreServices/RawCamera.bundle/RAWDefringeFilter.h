/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RAWDefringeFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputWidth;
	NSNumber* inputAxialWidth;
	id inputColorSpace;

}
-(CGRect)expandByOneROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandByTwoROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandByThreeROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandByFourROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandByFiveROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandSelect:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandSelectN:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)kernelSourceWithBuffer:(const char*)arg1 inflatedSize:(unsigned long)arg2 deflatedSize:(unsigned long)arg3 ;
-(id)deFringeKernelSource;
-(id)fringeDirectionsKernelSource;
-(id)fringeEdgesKernelSource;
-(id)outputImage;
@end

