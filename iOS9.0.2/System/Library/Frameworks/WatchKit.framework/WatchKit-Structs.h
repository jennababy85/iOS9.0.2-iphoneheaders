/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned ndouble : 1;
	unsigned nint64 : 1;
	unsigned nuint64 : 1;
	unsigned nfloat : 1;
	unsigned nint32 : 1;
	unsigned nuint32 : 1;
	unsigned subtype : 1;
	unsigned nbool : 1;
} SCD_Struct_SP1;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned duration : 1;
} SCD_Struct_SP5;

typedef struct {
	unsigned errorCode : 1;
	unsigned status : 1;
} SCD_Struct_SP6;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_WK7;

typedef struct {
	SCD_Struct_WK7 field1;
	SCD_Struct_WK7 field2;
} SCD_Struct_WK8;
