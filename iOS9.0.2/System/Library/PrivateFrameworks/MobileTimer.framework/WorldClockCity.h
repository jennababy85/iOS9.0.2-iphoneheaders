/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ALCity, City, NSString, NSDictionary, NSNumber, NSURL;

@interface WorldClockCity : NSObject {

	ALCity* _alCity;
	City* _weatherCity;
	NSString* _timeZone;
	NSString* _name;
	NSString* _countryName;
	NSString* _countryCode;
	NSString* _unlocalizedName;
	NSString* _unlocalizedCountryName;

}

@property (nonatomic,readonly) NSDictionary * properties; 
@property (nonatomic,readonly) ALCity * alCity;                                //@synthesize alCity=_alCity - In the implementation block
@property (nonatomic,readonly) NSNumber * alCityId; 
@property (nonatomic,retain) City * weatherCity;                               //@synthesize weatherCity=_weatherCity - In the implementation block
@property (nonatomic,readonly) NSString * timeZone; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * countryName; 
@property (nonatomic,readonly) NSString * unlocalizedCityName; 
@property (nonatomic,readonly) NSString * unlocalizedCountryName; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSURL * idUrl; 
+(char)isWorldClockCityProperties:(id)arg1 ;
+(char)isCachedLanguageStaleForProperties:(id)arg1 ;
+(char)isCachedLanguageStaleForProperties:(id)arg1 systemLanguage:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(NSString *)timeZone;
-(id)initWithProperties:(id)arg1 ;
-(NSDictionary *)properties;
-(NSString *)countryCode;
-(id)initWithALCity:(id)arg1 ;
-(NSURL *)idUrl;
-(ALCity *)alCity;
-(void)setWeatherCity:(City *)arg1 ;
-(City *)weatherCity;
-(id)initWithALCityIdentifier:(int)arg1 ;
-(id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6 ;
-(NSNumber *)alCityId;
-(NSString *)unlocalizedCityName;
-(NSString *)unlocalizedCountryName;
-(NSString *)countryName;
@end

