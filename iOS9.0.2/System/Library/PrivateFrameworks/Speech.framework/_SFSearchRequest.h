/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface _SFSearchRequest : NSObject {

	int _searchTypes;
	NSDictionary* _headerFields;
	NSDictionary* _queryParameters;

}

@property (assign,nonatomic) int searchTypes;                           //@synthesize searchTypes=_searchTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;                 //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
-(void)setSearchTypes:(int)arg1 ;
-(NSDictionary *)queryParameters;
-(int)searchTypes;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(NSDictionary *)headerFields;
@end

