/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/SnapshotResponderProtocol.h>

@class MNRoute, MKMapSnapshot, MKMapSnapshotter, UIColor, GEOComposedRouteStep, UIImage, NSString;

@interface RouteStepCell : NSObject <SnapshotResponderProtocol> {

	MNRoute* _route;
	unsigned _stepIndex;
	CGRect _frame;
	int _page;
	char _hasSnapshot;
	MKMapSnapshot* _snapshot;
	MKMapSnapshotter* _snapshotter;
	UIColor* _routeCenterPrintColor;
	UIColor* _routeOutlinePrintColor;
	UIColor* _blueTextColor;
	unsigned _mapType;

}

@property (nonatomic,retain) MNRoute * route;                                 //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * routeStep; 
@property (assign,nonatomic) unsigned stepIndex;                              //@synthesize stepIndex=_stepIndex - In the implementation block
@property (assign,nonatomic) CGRect frame;                                    //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) int page;                                        //@synthesize page=_page - In the implementation block
@property (assign,nonatomic) float y; 
@property (nonatomic,readonly) UIImage * snapshotImage; 
@property (assign,nonatomic) unsigned mapType;                                //@synthesize mapType=_mapType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasSnapshot;                              //@synthesize hasSnapshot=_hasSnapshot - In the implementation block
+(id)cellWithRoute:(id)arg1 stepIndex:(unsigned)arg2 mapType:(unsigned)arg3 ;
-(void)releaseSnapshotCreator;
-(char)hasSnapshot;
-(/*^block*/id)snapshotBlock;
-(id)initWithRoute:(id)arg1 stepIndex:(unsigned)arg2 mapType:(unsigned)arg3 ;
-(CGPoint)_cgPointApplyAffineTransform:(CGPoint)arg1 :(CGAffineTransform)arg2 :(CGAffineTransform)arg3 :(CGAffineTransform)arg4 ;
-(id)instructionStringsArray;
-(SCD_Struct_RA7)_intersectLineWithPoint1:(SCD_Struct_RA7)arg1 point2:(SCD_Struct_RA7)arg2 withRect:(SCD_Struct_RA13)arg3 ;
-(float)_textLayoutHeightForLines:(id)arg1 ;
-(void)drawPinInRect:(CGRect)arg1 zoomLevel:(float)arg2 ;
-(GEOComposedRouteStep *)routeStep;
-(char)_lineSegmentsIntersectLineAPoint1:(SCD_Struct_RA7)arg1 lineAPoint2:(SCD_Struct_RA7)arg2 lineBPoint1:(SCD_Struct_RA7)arg3 lineBPoint2:(SCD_Struct_RA7)arg4 outIntersectionPoint:(SCD_Struct_RA7*)arg5 ;
-(void)drawRouteLineInRect:(CGRect)arg1 zoomLevel:(float)arg2 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)drawInRect:(CGRect)arg1 ;
-(float)y;
-(void)setY:(float)arg1 ;
-(int)page;
-(void)setPage:(int)arg1 ;
-(MNRoute *)route;
-(void)setRoute:(MNRoute *)arg1 ;
-(unsigned)mapType;
-(void)setMapType:(unsigned)arg1 ;
-(unsigned)stepIndex;
-(void)setStepIndex:(unsigned)arg1 ;
-(unsigned)numberOfSteps;
-(UIImage *)snapshotImage;
@end
