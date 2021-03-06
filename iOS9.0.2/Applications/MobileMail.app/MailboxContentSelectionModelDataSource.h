/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MailboxContentSelectionModelDataSource <NSObject>
@optional
-(id)selectionModel:(id)arg1 sourcesForMessageInfos:(id)arg2;

@required
-(id)selectionModel:(id)arg1 indexPathForMessageInfo:(id)arg2;
-(id)sourcesForSelectionModel:(id)arg1;
-(id)selectionModel:(id)arg1 sourceForMessageInfo:(id)arg2;
-(id)selectionModel:(id)arg1 messagesForMessageInfos:(id)arg2;
-(id)selectionModel:(id)arg1 messageInfosAtTableIndexPath:(id)arg2;
-(char)selectionModel:(id)arg1 deleteMovesToTrashForTableIndexPath:(id)arg2;
-(char)selectionModel:(id)arg1 supportsArchivingForTableIndexPath:(id)arg2;
-(char)selectionModel:(id)arg1 shouldArchiveByDefaultForTableIndexPath:(id)arg2;
-(void)selectionModel:(id)arg1 getConversationStateAtTableIndexPath:(id)arg2 hasUnread:(char*)arg3 hasUnflagged:(char*)arg4;
-(void)selectionModel:(id)arg1 getSourceStateHasUnread:(char*)arg2 hasUnflagged:(char*)arg3;

@end

