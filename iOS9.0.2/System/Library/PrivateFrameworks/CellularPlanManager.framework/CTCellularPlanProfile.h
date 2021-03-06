/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface CTCellularPlanProfile : NSObject <NSCopying, NSSecureCoding> {

	char _isSelected;
	char _isBootstrap;
	NSData* _profileId;
	NSString* _iccid;

}

@property (assign,nonatomic) char isSelected;               //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) char isBootstrap;              //@synthesize isBootstrap=_isBootstrap - In the implementation block
@property (nonatomic,copy) NSData * profileId;              //@synthesize profileId=_profileId - In the implementation block
@property (nonatomic,copy) NSString * iccid;                //@synthesize iccid=_iccid - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isSelected;
-(void)setIsSelected:(char)arg1 ;
-(void)setProfileId:(NSData *)arg1 ;
-(NSData *)profileId;
-(void)setIccid:(NSString *)arg1 ;
-(void)setIsBootstrap:(char)arg1 ;
-(id)initWithProfileId:(id)arg1 iccid:(id)arg2 selected:(char)arg3 bootstrap:(char)arg4 ;
-(char)isBootstrap;
-(NSString *)iccid;
@end

