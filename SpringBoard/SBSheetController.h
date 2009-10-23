/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIWindow, NSMutableDictionary;

@interface SBSheetController : NSObject {
	NSMutableDictionary* _appToSheetMap;
	UIWindow* _presentationWindow;
}
+(id)sharedInstance;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)animateSheetUp:(id)up;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)animateSheetDown:(id)down;
-(BOOL)presentRemoteViewIdentifier:(id)identifier asSheetForApplication:(id)application;
-(void)dismissRemoteViewIdentifier:(id)identifier forApplication:(id)application;
-(BOOL)isShowingSheets;
-(void)dismissAllSheets;
-(void)dismissSheetsForApplication:(id)application;
-(BOOL)sheetWantsProgress;
@end

