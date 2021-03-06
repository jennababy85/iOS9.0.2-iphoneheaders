/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MNLocationTrackerDelegate <NSObject>
@required
-(void)locationTrackerHasArrived:(id)arg1;
-(void)locationTracker:(id)arg1 didChangeState:(int)arg2;
-(void)locationTrackerHasReachedEndOfLeg:(id)arg1;
-(void)locationTracker:(id)arg1 ignoredLocation:(id)arg2;
-(void)locationTrackerDetectedNewTransportType:(id)arg1 newTransportType:(int)arg2;
-(void)locationTracker:(id)arg1 startingStepIndex:(unsigned)arg2;
-(void)locationTracker:(id)arg1 failedWithErrorCode:(int)arg2;
-(void)locationTrackerHideSecondaryStep:(id)arg1;
-(void)locationTracker:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned)arg2;
-(void)locationTracker:(id)arg1 didEnableGuidance:(char)arg2;
-(void)locationTracker:(id)arg1 displaySecondaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di17*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10;
-(void)locationTrackerWillResumeFromPause:(id)arg1;
-(void)locationTracker:(id)arg1 updatedMatchedLocation:(id)arg2;
-(void)locationTracker:(id)arg1 displayPrimaryStepManeuverType:(int)arg2 junctionType:(int)arg3 junctionElements:(SCD_Struct_Di17*)arg4 count:(unsigned long)arg5 instructions:(id)arg6 shorterAlternativeInstructions:(id)arg7 shieldType:(int)arg8 shieldText:(id)arg9 drivingSide:(int)arg10 maneuverStepIndex:(unsigned)arg11 isSynthetic:(char)arg12;
-(void)locationTracker:(id)arg1 currentStepIndex:(unsigned)arg2 distanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
-(void)locationTracker:(id)arg1 remainingTime:(double)arg2 remainingDistance:(double)arg3;
-(void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;
-(void)locationTrackerWillPause:(id)arg1;
-(void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)locationTracker:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 remainingTime:(double)arg4 remainingDistance:(double)arg5 closestStepIndex:(unsigned)arg6;
-(void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
-(void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned)arg2 legIndex:(unsigned)arg3;
-(void)locationTracker:(id)arg1 updatePointOfInterest:(SCD_Struct_RA7)arg2 focusStyle:(int)arg3;

@end

