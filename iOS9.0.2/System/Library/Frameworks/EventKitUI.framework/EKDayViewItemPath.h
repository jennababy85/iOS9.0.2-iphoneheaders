/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EKDayViewItemPath : NSObject <NSCopying> {

	int _section;
	unsigned _index;

}

@property (nonatomic,readonly) int section;                 //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) unsigned index;              //@synthesize index=_index - In the implementation block
+(id)itemPathWithIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(id)initWithIndex:(unsigned)arg1 inSection:(int)arg2 ;
-(char)isEqual:(id)arg1 ;
-(int)section;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)index;
@end

