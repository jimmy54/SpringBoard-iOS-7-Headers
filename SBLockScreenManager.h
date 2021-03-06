/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class NSMutableSet, SBPasscodeEntryAlertViewController, SBLockScreenViewControllerBase, SBPasscodeLockDisableAssertion, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBLockScreenManager : NSObject {
	SBLockScreenViewControllerBase* _lockScreenViewController;
	BOOL _isUILocked;
	BOOL _isWaitingToLockUI;
	BOOL _appRequestedPasscodeEntry;
	BOOL _uiHasBeenLockedOnce;
	SBPasscodeEntryAlertViewController* _passcodeEntryController;
	SBPasscodeLockDisableAssertion* _disablePasscodeLockWhileUIUnlockedAssertion;
	NSMutableSet* _disableLockScreenIfPossibleAssertions;
	NSHashTable* _disableUnlockAssertions;
	BOOL _isInLostMode;
	BOOL _biometricEventStartedWithScreenOff;
	unsigned long long _biometricEventStartTime;
	unsigned _failedMesaUnlockAttempts;
	BOOL _bioAuthenticatedWhileMenuButtonDown;
}
@property(readonly, assign) BOOL bioAuthenticatedWhileMenuButtonDown;
@property(readonly, assign) BOOL isWaitingToLockUI;
@property(readonly, assign) BOOL isUILocked;
@property(readonly, assign, nonatomic) SBLockScreenViewControllerBase* lockScreenViewController;
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNeeded:(BOOL)needed;
-(void)_frontmostDisplayChanged:(id)changed;
-(void)_lockScreenDimmed:(id)dimmed;
-(void)_bioAuthenticated:(id)authenticated;
-(BOOL)biometricEventMonitorShouldRelockAfterBioUnlock:(id)biometricEventMonitor;
-(void)biometricEventMonitor:(id)monitor handleBiometricEvent:(unsigned)event;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleKeyHIDEvent:(IOHIDEventRef)event;
-(void)activationChanged:(id)changed;
-(void)enableLostModePlugin;
-(BOOL)isInLostMode;
-(void)exitLostModeIfNecessaryFromRemoteRequest:(BOOL)remoteRequest;
-(void)activateLostModeForRemoteLock:(BOOL)remoteLock;
-(void)_lockFeaturesForRemoteLock:(BOOL)remoteLock;
-(void)remoteLock:(BOOL)lock;
-(void)_resetOrRestoreStateChanged:(id)changed;
-(void)_deviceBlockedChanged:(id)changed;
-(void)_deviceLockedChanged:(id)changed;
-(BOOL)attemptUnlockWithPasscode:(id)passcode;
-(void)startUIUnlockFromSource:(int)source withOptions:(id)options;
-(void)_postLockCompletedNotification:(BOOL)notification;
-(void)_removeDisableUnlockAssertion:(id)assertion;
-(void)_addDisableUnlockAssertion:(id)assertion;
-(void)updateSpringBoardStatusBarForLockScreenTeardown;
-(void)cancelApplicationRequestedDeviceLockEntry;
-(void)applicationRequestedDeviceUnlock;
-(void)removeLockScreenDisableAssertion:(id)assertion;
-(void)addLockScreenDisableAssertion:(id)assertion;
-(void)_handleExternalUIUnlock:(id)unlock;
-(void)_finishUIUnlockFromSource:(int)source withOptions:(id)options;
-(void)unlockUIFromSource:(int)source withOptions:(id)options;
-(BOOL)_shouldAutoUnlockFromUnlockSource:(int)unlockSource;
-(void)_sendUILockStateChangedNotification;
-(void)_lockUI;
-(void)_setUILocked:(BOOL)locked;
-(void)_relockUIForButtonPress:(BOOL)buttonPress afterCall:(BOOL)call;
-(void)_activateLockScreenAnimated:(BOOL)animated automatically:(BOOL)automatically inScreenOffMode:(BOOL)screenOffMode dimInAnimation:(BOOL)animation dismissNotificationCenter:(BOOL)center;
-(void)lockUIFromSource:(int)source withOptions:(id)options;
-(BOOL)shouldLockUIAfterEndingCall;
-(BOOL)_shouldLockAfterFaceTimeCall;
-(BOOL)_shouldLockAfterTelephonyCall;
-(BOOL)hasUIEverBeenLocked;
-(id)_newLockScreenController;
-(id)init;
@end

