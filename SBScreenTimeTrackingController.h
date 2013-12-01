/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SBControlCenterObserver.h"
#import "SBAlertManagerObserver.h"

@class SBAlertManager;

__attribute__((visibility("hidden")))
@interface SBScreenTimeTrackingController : NSObject <SBControlCenterObserver, SBAlertManagerObserver> {
	unsigned long long _thisCategoryStartTime;
	double _lastCategoryChangeTime;
	int _activeCategory;
	int _previousCategory;
	SBAlertManager* _alertManager;
}
-(void)_setActiveCategory:(int)category;
-(void)_noteSignificantTimeChanged:(id)changed;
-(void)_noteLockScreenCameraDidDisappear;
-(void)_noteLockScreenCameraDidAppear;
-(void)_noteNotificationCenterTodayWillAppear;
-(void)_noteNotificationCenterNotificationsWillAppear;
-(void)_noteNotificationCenterWillDismiss;
-(void)_noteControlCenterControlDidDeactivate:(id)_noteControlCenterControl;
-(void)_noteControlCenterControlDidActivate:(id)_noteControlCenterControl;
-(void)_noteSearchVisibilityDidChange:(id)_noteSearchVisibility;
-(void)_noteAppSliderDidAppear;
-(void)_noteSiriVisibilityChanged;
-(void)_noteAppBecameFrontmost:(id)frontmost;
-(void)_noteMediaControlsDidDisappear;
-(void)_noteMediaControlsDidAppear;
-(void)_noteBacklightDidTurnOn:(id)_noteBacklight;
-(BOOL)_isLockScreenNavigationActive;
-(void)_noteLockScreenUndimmed;
-(void)_noteLocked;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(void)alertManager:(id)manager didActivateAlert:(id)alert overAlerts:(id)alerts;
-(void)_resetCategoryForContext:(int)context;
-(id)_nameForCurrentContext;
-(int)_activeContext;
-(void)dealloc;
-(id)initWithAlertManager:(id)alertManager;
@end

