/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AXCaptionStyleChooserController.h>

@interface AXCaptionTextFontController : AXCaptionStyleChooserController {

	CGFontRef selectedFont;

}

@property (nonatomic,retain) CGFontRef selectedFont; 
-(void)_editPressed:(id)arg1 ;
-(long)textCategory;
-(void)_donePressed;
-(void)_manageEditButton;
-(void)setSelectedFont:(CGFontRef)arg1 ;
-(id)_videoOverrideText;
-(void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2 ;
-(id)_videoOverridesStyle:(id)arg1 ;
-(id)specifiers;
-(CGFontRef)selectedFont;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
@end
