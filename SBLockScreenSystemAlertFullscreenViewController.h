/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockOverlayViewController.h"
#import "SBLockOverlayViewDelegate.h"

@class NSString, SBSystemLocalNotificationAlert, SBLockOverlayView;

__attribute__((visibility("hidden")))
@interface SBLockScreenSystemAlertFullscreenViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {
	SBSystemLocalNotificationAlert* _alertItem;
	SBLockOverlayView* _fullscreenAlertView;
	NSString* _title;
	NSString* _actionText;
}
@property(readonly, assign, nonatomic) SBSystemLocalNotificationAlert* alertItem;
-(void)snoozeAlertItemWithReason:(int)reason;
-(void)lockButtonPressed:(id)pressed;
-(void)handleTapGestureFromView:(id)view;
-(void)deactivateAlertItem;
-(void)performUnlockAction;
-(void)loadView;
-(void)dealloc;
-(id)initWithSystemNotification:(id)systemNotification title:(id)title subtitle:(id)subtitle;
@end

