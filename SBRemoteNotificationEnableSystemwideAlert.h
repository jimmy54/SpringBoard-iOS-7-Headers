/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

__attribute__((visibility("hidden")))
@interface SBRemoteNotificationEnableSystemwideAlert : SBAlertItem {
	SBApplication* _app;
}
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_showNotificationsPrefs;
-(void)dealloc;
-(id)initWithApplication:(id)application;
@end

