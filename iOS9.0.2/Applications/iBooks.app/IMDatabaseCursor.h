/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBooks/iBooks-Structs.h>
@class NSMutableArray;

@interface IMDatabaseCursor : NSObject {

	char _closed;
	NSMutableArray* _results;
	int _numColumns;
	sqlite3_stmtRef _statement;
	NSMutableArray* _columnNames;
	NSMutableArray* _columnTypes;

}

@property (nonatomic,retain) NSMutableArray * results;                  //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) int numColumns;                            //@synthesize numColumns=_numColumns - In the implementation block
@property (assign,nonatomic) sqlite3_stmtRef statement;                 //@synthesize statement=_statement - In the implementation block
@property (nonatomic,retain) NSMutableArray * columnNames;              //@synthesize columnNames=_columnNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * columnTypes;              //@synthesize columnTypes=_columnTypes - In the implementation block
@property (assign,nonatomic) char closed;                               //@synthesize closed=_closed - In the implementation block
-(id)nextRowAsArray;
-(id)nextRowAsDictionary;
-(id)_undeclaredTypeForColumnIndex:(int)arg1 ;
-(id)initWithQuery:(id)arg1 databaseHandle:(id)arg2 ;
-(int)numColumns;
-(void)setNumColumns:(int)arg1 ;
-(void)setColumnNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)columnTypes;
-(void)setColumnTypes:(NSMutableArray *)arg1 ;
-(void)setStatement:(sqlite3_stmtRef)arg1 ;
-(id)columnTypeAtIndex:(int)arg1 ;
-(id)columnNameAtIndex:(int)arg1 ;
-(void)dealloc;
-(char)reset;
-(char)close;
-(int)columnCount;
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
-(void)setClosed:(char)arg1 ;
-(char)closed;
-(NSMutableArray *)columnNames;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
-(int)rowCount;
-(sqlite3_stmtRef)statement;
@end

