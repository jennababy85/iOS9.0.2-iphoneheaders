/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/MKInstructionContents.h>

@interface MNInstructionContents : MKInstructionContents {

	SCD_Struct_MN26 _options;
	char _isSecondary;

}

@property (assign,nonatomic) int context; 
@property (nonatomic,readonly) int numSignsWanted; 
+(id)contentsWithSubstep:(id)arg1 transportType:(int)arg2 context:(int)arg3 ;
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 context:(int)arg3 isSecondary:(char)arg4 ;
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 options:(SCD_Struct_MN26*)arg3 isSecondary:(char)arg4 ;
+(id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2 context:(int)arg3 ;
-(id)instructionWithShorterAlternatives:(id*)arg1 ;
-(id)_spokenInstructionForBranch;
-(id)_spokenInstructionForRoundabout;
-(id)_spokenWalkingInstructionForStart;
-(id)_spokenWalkingInstructionForContinue;
-(int)numSignsWanted;
-(id)_spokenWalkingInstructionForRoundabout;
-(id)_spokenInstructionForUTurn;
-(id)_spokenWalkingInstructionForTurn;
-(id)_spokenInstructionForContinue;
-(id)_spokenInstructionForExit;
-(id)_spokenInstructionFromSignposts;
-(id)_spokenInstructionForChangeHighways;
-(id)_spokenInstructionForFerry;
-(id)_spokenInstructionForStart;
-(id)_spokenInstructionForTurn;
-(id)_spokenWalkingInstructionForUTurn;
-(id)_spokenInstructionForArrival;
-(id)textForSetting:(int)arg1 ;
-(id)_exitNumberFromNameInfo:(id)arg1 ;
-(char)useDestinationName;
-(char)useRoadName;
-(id)_stringFromNameInfo:(id)arg1 ;
-(char)useIntersectionName;
-(char)useTowardNames;
-(id)instruction;
-(id)init;
-(id)description;
-(int)context;
-(void)setContext:(int)arg1 ;
@end
