/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsStandingColumnView.h>

@class ACSportsLoadingImageView, SiriUIContentLabel, SASportsTeam;

@interface ACSportsTeamStandingView : ACSportsStandingColumnView {

	ACSportsLoadingImageView* _teamLogoView;
	SiriUIContentLabel* _teamNameLabel;
	SiriUIContentLabel* _clinchedLabel;
	char _needTwoLineForTeamName;
	int _cardinalPosition;

}

@property (nonatomic,retain) SASportsTeam * entity; 
@property (assign,nonatomic) int cardinalPosition;               //@synthesize cardinalPosition=_cardinalPosition - In the implementation block
-(int)cardinalPosition;
-(void)statLabelMinXDidChange;
-(id)textForSnippetColumn:(id)arg1 ;
-(void)setCardinalPosition:(int)arg1 ;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(char)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(float)contentHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

