/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIApplication.h>
#import "SBPowerDownControllerDelegate.h"
#import "SpringBoard-Structs.h"
#import "MCProfileConnectionObserver.h"
#import "UIApplicationDelegate.h"

@class NSObject, NSTimer, NSMutableSet, NSMutableArray, SBUIController, NSSet, UIWindow, NSNumberFormatter, NSDate, SBCardItemsController, BBDataProviderConnection, SBApplication, NSHashTable;
@protocol OS_dispatch_source, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SpringBoard : UIApplication <SBPowerDownControllerDelegate, MCProfileConnectionObserver, UIApplicationDelegate> {
	SBUIController* _uiController;
	NSTimer* _menuButtonTimer;
	NSTimer* _lockButtonTimer;
	double _headsetButtonDownTime;
	IOHIDEventRef _headsetDownEvent;
	int _headsetClickCount;
	int _ringerSwitchState;
	unsigned _headsetButtonClickCount : 8;
	unsigned _menuButtonClickCount : 8;
	unsigned _screenWasDimOnMenuDown : 1;
	unsigned _waitingForMenuDoubleTapAfterActingOnSingleTap : 1;
	unsigned _screenshotWasTaken : 1;
	unsigned _dontLockOnNextLockUp : 1;
	unsigned _poweringDown : 1;
	unsigned _headsetDownDelayedActionPerformed : 1;
	unsigned _isSeekingInMedia : 1;
	int _statusBarOrientationOverride;
	int _mediaSeekDirection;
	unsigned _springBoardRequestsAccelerometerEvents;
	int _activeInterfaceOrientation;
	NSMutableSet* _activeInterfaceOrientationObservers;
	NSMutableArray* _activeInterfaceOrientationOverrideStack;
	BOOL _wantsOrientationEvents;
	int _notifyDontAnimateREOToken;
	int _notifyDontAllowMediaHUDToken;
	BOOL _expectsFaceContact;
	BOOL _expectsFaceContactInLandscape;
	BOOL _proximityEventsEnabled;
	BOOL _smartCoverClosed;
	BOOL _keybagRefetchTransactionIsActive;
	BOOL _menuButtonDown;
	NSSet* _restrictionDisabledApplications;
	SBApplication* _nowPlayingApp;
	SBApplication* _menuButtonInterceptApp;
	BOOL _menuButtonInterceptAppEnabledForever;
	NSMutableArray* _disableNowPlayingHUDAssertionBundleIds;
	NSMutableArray* _appsRegisteredForVolumeEvents;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _percentFormatter;
	NSTimer* _midnightTimer;
	NSDate* _midnightFireDate;
	opaque_pthread_t* _backgroundMIGServerThread;
	opaque_pthread_t* _iconGenerationMIGServerThread;
	NSObject<OS_dispatch_source>* _memoryPressureSource;
	unsigned _memoryPressureStatus;
	NSMutableArray* _blocksAwaitingAvailableMemory;
	BBDataProviderConnection* _bulletinBoardConnection;
	NSObject<OS_dispatch_queue>* _bulletinBoardQueue;
	SBCardItemsController* _cardItemsController;
	CFBooleanRef _hasCameraCapability;
	CFBooleanRef _hasCameraRestriction;
	CFBooleanRef _shouldDelaySleepForHeadsetClick;
	NSHashTable* _volumePressBandits;
	unsigned long long _menuButtonHoldStartTime;
	double _menuButtonHoldAbsoluteStartTime;
	NSMutableArray* _menuButtonUpBlocks;
	BOOL _didPlayLockSound;
	NSHashTable* _disableActiveOrientationChangeAssertions;
	BOOL _typingActive;
}
@property(retain, nonatomic) UIWindow* window;
@property(assign, nonatomic, getter=isTypingActive) BOOL typingActive;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* bulletinBoardQueue;
@property(readonly, assign, nonatomic) BBDataProviderConnection* bulletinBoardConnection;
+(void)migrateSystemLocalNotifications;
+(BOOL)rendersLocally;
+(BOOL)registerAsSystemApp;
-(void)performWhenMenuButtonIsUpUsingBlock:(id)block;
-(void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)assertion;
-(void)addDisableActiveInterfaceOrientationChangeAssertion:(id)assertion;
-(void)_sendBanditsVolumeDecreased;
-(void)_sendBanditsVolumeIncreased;
-(void)removeVolumePressBandit:(id)bandit;
-(void)addVolumePressBandit:(id)bandit;
-(BOOL)_hasVolumeBandits;
-(BOOL)shouldHostWidgetsRemotely;
-(void)noteKeybagRefetchTransactionIsActive:(BOOL)active;
-(BOOL)underMemoryPressure;
-(void)_setStatusBarShowsProgress:(BOOL)progress;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(double)_accessibilityDeactivationAnimationStartDelay;
-(void)_accessibilityActivationAnimationWillBegin;
-(double)_accessibilityActivationAnimationStartDelay;
-(void)_accessibilitySetSystemGesturesDisabledByAccessibility:(BOOL)accessibility;
-(BOOL)_accessibilitySystemGesturesDisabledByAccessibility;
-(BOOL)_accessibilityShouldAllowIconLaunch;
-(BOOL)_accessibilityShouldAllowAppLaunch;
-(id)_accessibilityRunningApplications;
-(id)_accessibilityTopDisplay;
-(id)_accessibilityFrontMostApplication;
-(id)formattedPercentStringForNumber:(id)number;
-(id)formattedDecimalStringForNumber:(id)number;
-(BOOL)isCameraApp;
-(void)setSuspensionAnimationDelay:(double)delay;
-(void)setIdleTimerDisabled:(BOOL)disabled;
-(void)setNowPlayingInfo:(id)info forApplication:(id)application;
-(BOOL)isNowPlayingAppPlaying;
-(id)nowPlayingApp;
-(BOOL)isMusicPlayerInNowPlayingView;
-(void)_nowPlayingAppDidChangeNotification:(id)_nowPlayingApp;
-(void)tearDown;
-(void)_tearDownNow;
-(BOOL)launchApplicationWithIdentifier:(id)identifier suspended:(BOOL)suspended;
-(void)_launchMusicPlayerSuspendedAndStartMusic;
-(void)launchMusicPlayerSuspended;
-(int)alertInterfaceOrientation;
-(BOOL)isLocked;
-(BOOL)canShowAlerts;
-(void)setHasMiniAlerts:(BOOL)alerts;
-(void)willDismissMiniAlert;
-(void)willDisplayMiniAlert;
-(void)didDismissMiniAlert;
-(void)didDismissActionSheet;
-(void)applicationDidOrderOutContext:(id)application screen:(id)screen;
-(void)applicationWillOrderInContext:(id)application windowLevel:(float)level screen:(id)screen;
-(void)frontDisplayDidChange:(id)frontDisplay;
-(void)_setAmbiguousControlCenterActivationMargin:(float)margin;
-(void)updateOrientationAndAccelerometerSettings;
-(void)updateProximitySettings;
-(void)setExpectsFaceContact:(BOOL)contact;
-(void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
-(BOOL)expectsFaceContactInLandscape;
-(BOOL)expectsFaceContact;
-(void)setProximityEventsEnabled:(BOOL)enabled;
-(BOOL)proximityEventsEnabled;
-(void)setSystemVolumeHUDEnabled:(BOOL)enabled forAudioCategory:(id)audioCategory;
-(double)windowRotationDuration;
-(BOOL)_alertWindowShouldRotate;
-(id)displayIDForURLScheme:(id)urlscheme isPublic:(BOOL)aPublic;
-(void)_removeDefaultInterfaceOrientatationOverride;
-(void)_overrideDefaultInterfaceOrientationWithOrientation:(int)orientation;
-(int)statusBarOrientation;
-(void)reportStatusBarOrientationAs:(int)as;
-(int)interfaceOrientationForCurrentDeviceOrientation;
-(int)_currentNonFlatDeviceOrientation;
-(void)updateNativeOrientationAndMirroredDisplays:(BOOL)displays;
-(void)updateNativeOrientation;
-(void)setWantsOrientationEvents:(BOOL)events;
-(BOOL)_statusBarOrientationFollowsWindow:(id)window;
-(int)_frontMostAppOrientation;
-(void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)reason;
-(void)popTransientActiveInterfaceOrientationForReason:(id)reason;
-(void)pushTransientActiveInterfaceOrientation:(int)orientation forReason:(id)reason;
-(int)activeInterfaceOrientationWithoutConsideringAlerts;
-(int)activeInterfaceOrientation;
-(void)removeActiveOrientationObserver:(id)observer;
-(void)addActiveOrientationObserver:(id)observer;
-(void)noteAlertView:(id)view willChangeInterfaceOrientation:(int)orientation duration:(double)duration;
-(void)noteInterfaceOrientationChanged:(int)changed duration:(float)duration updateMirroredDisplays:(BOOL)displays force:(BOOL)force;
-(void)noteInterfaceOrientationChanged:(int)changed duration:(float)duration updateMirroredDisplays:(BOOL)displays;
-(void)noteInterfaceOrientationChanged:(int)changed duration:(float)duration;
-(void)noteInterfaceOrientationChanged:(int)changed force:(BOOL)force;
-(void)noteInterfaceOrientationChanged:(int)changed;
-(void)updateMirroredDisplayOrientation;
-(void)noteSubstantialTransitionOccured;
-(void)didReceiveMemoryWarning;
-(void)lockDevice:(GSEventRef)device;
-(void)updateRejectedInputSettingsTriggeredByRouteChangeToReceiverNotification:(BOOL)receiverNotification;
-(void)updateRejectedInputSettings;
-(void)updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing;
-(void)_updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing triggeredbyRouteWillChangeToReceiverNotification:(BOOL)triggeredbyRoute;
-(void)_caseLatchWantsToAttemptLock;
-(void)noteCaseHardwarePresent;
-(void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)attemptUnlock;
-(BOOL)allowCaseLatchLockAndUnlock;
-(BOOL)caseIsEnabledAndLatched;
-(BOOL)smartCoverIsClosed;
-(void)_enqueueWorkspaceEvent:(id)event withName:(id)name ifSatisfiesCondition:(id)condition cancelingEventsWithNames:(id)names;
-(void)_smartCoverDidClose:(IOHIDEventRef)_smartCover;
-(void)_smartCoverDidOpen:(IOHIDEventRef)_smartCover;
-(void)_proximityChanged:(id)changed;
-(void)resetIdleTimerAndUndim;
-(void)lockAfterCall;
-(void)noteBacklightFadeFinished;
-(void)noteBacklightLevelChanged;
-(void)noteBacklightControllerUndimming:(id)undimming;
-(void)_adjustMidnightTimerAfterSleep;
-(void)_midnightPassed;
-(void)setupMidnightTimer;
-(BOOL)_handlePhysicalButtonEvent:(id)event;
-(void)volumeChanged:(GSEventRef)changed;
-(BOOL)_volumeChanged:(IOHIDEventRef)changed;
-(id)appsRegisteredForVolumeEvents;
-(void)setAppRegisteredForVolumeEvents:(id)volumeEvents isActive:(BOOL)active;
-(void)setWantsVolumeButtonEvents:(BOOL)events;
-(BOOL)menuButtonInterceptAppEnabledForever;
-(id)menuButtonInterceptApp;
-(void)setMenuButtonInterceptApp:(id)app forever:(BOOL)forever;
-(BOOL)openURL:(id)url;
-(BOOL)canOpenURL:(id)url;
-(void)_openURLCore:(id)core display:(id)display animating:(BOOL)animating sender:(id)sender additionalActivationFlags:(id)flags activationHandler:(id)handler;
-(void)_applicationOpenURL:(id)url withApplication:(id)application sender:(id)sender publicURLsOnly:(BOOL)only animating:(BOOL)animating additionalActivationFlags:(id)flags activationHandler:(id)handler;
-(void)applicationOpenURL:(id)url withApplication:(id)application sender:(id)sender publicURLsOnly:(BOOL)only animating:(BOOL)animating needsPermission:(BOOL)permission additionalActivationFlags:(id)flags activationHandler:(id)handler;
-(void)applicationOpenURL:(id)url publicURLsOnly:(BOOL)only;
-(void)applicationOpenURL:(id)url;
-(BOOL)applicationCanOpenURL:(id)url publicURLsOnly:(BOOL)only;
-(BOOL)_URLIsHandledBySpringBoard:(id)board;
-(void)_applicationOpenURL:(id)url event:(GSEventRef)event;
-(void)handleOpenURL:(id)url fromApplication:(id)application;
-(BOOL)_requestPermissionToOpenURL:(id)openURL withApplication:(id)application sender:(id)sender;
-(void)showAlertForUnhandledURL:(id)unhandledURL error:(int)error;
-(int)currentHomescreenStatusBarStyle;
-(void)showSpringBoardStatusBar;
-(void)hideSpringBoardStatusBar;
-(BOOL)isSpringBoardStatusBarHidden;
-(int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
-(BOOL)handleDoubleHeightStatusBarTap:(int)tap;
-(void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;
-(void)applicationSuspended:(GSEventRef)suspended;
-(void)applicationSuspend:(GSEventRef)suspend;
-(void)anotherApplicationFinishedLaunching:(GSEventRef)launching;
-(void)applicationExited:(GSEventRef)exited;
-(void)quitTopApplication:(GSEventRef)application;
-(void)accessoryKeyStateChanged:(GSEventRef)changed;
-(void)_updateRingerState:(int)state withVisuals:(BOOL)visuals updatePreferenceRegister:(BOOL)aRegister;
-(void)ringerChanged:(int)changed;
-(void)_ringerChanged:(IOHIDEventRef)changed;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)pinPolicyChanged;
-(void)localeChanged;
-(void)_localeChanged;
-(void)_widgetHostingDefaultsDidChange;
-(void)debuggingAndDemoPrefsWereChanged;
-(void)loadDebuggingAndDemoPrefs;
-(BOOL)isDisplayIdentifierRestrictionDisabled:(id)disabled;
-(void)headsetAvailabilityChanged:(GSEventRef)changed;
-(void)headsetButtonUp:(GSEventRef)up;
-(void)_headsetButtonUp:(IOHIDEventRef)up;
-(void)headsetButtonDown:(GSEventRef)down;
-(void)_headsetButtonDown:(IOHIDEventRef)down;
-(void)_setDeferredHeadsetButtonDownEvent:(IOHIDEventRef)event;
-(void)_imagesMounted;
-(void)_iapExtendedModeReset;
-(void)_iapServerConnectionDiedNotification:(id)notification;
-(id)simpleRemoteDestinationApp;
-(void)_performDelayedHeadsetClickTimeout;
-(void)lockButtonUp:(GSEventRef)up;
-(void)_lockButtonUpFromSource:(int)source;
-(void)_clearPreheatedLockAudio;
-(void)_relaunchSpringBoardNow;
-(void)relaunchSpringBoard;
-(BOOL)relaunchingForSetupLanguageChange;
-(void)powerDownCanceled:(id)canceled;
-(void)_powerDownCancel:(id)cancel withCompletion:(id)completion;
-(void)powerDownRequested:(id)requested;
-(BOOL)isPoweringDown;
-(void)powerDown;
-(void)reboot;
-(void)_rebootNow;
-(void)_powerDownNow;
-(void)extendButtonTimersForWake;
-(void)lockButtonWasHeld;
-(void)lockButtonDown:(GSEventRef)down;
-(void)_lockButtonDownFromSource:(int)source;
-(void)_handleMenuButtonEvent;
-(void)mediaKeyUp:(GSEventRef)up;
-(void)mediaKeyDown:(GSEventRef)down;
-(void)_startSeekWithDirection:(id)direction;
-(void)_keyboardAvailabilityChanged;
-(void)_giveUpOnMenuDoubleTap;
-(void)menuButtonUp:(GSEventRef)up;
-(void)_menuButtonUp:(IOHIDEventRef)up;
-(void)_logMenuButtonHoldTime;
-(BOOL)_isDim;
-(void)menuButtonDown:(GSEventRef)down;
-(void)_menuButtonDown:(IOHIDEventRef)down;
-(id)_keyWindowForScreen:(id)screen;
-(void)_handleHIDEvent:(IOHIDEventRef)event;
-(void)_logReliabilityInfoForEvent:(IOHIDEventRef)event;
-(BOOL)__handleHIDEvent:(IOHIDEventRef)event;
-(double)_menuHoldTime;
-(void)_menuButtonWasHeld;
-(void)clearMenuButtonTimer;
-(void)cancelMenuButtonRequests;
-(void)_setLockButtonTimer:(id)timer;
-(void)_setMenuButtonTimer:(id)timer;
-(void)handleMenuDoubleTap;
-(BOOL)isMenuDoubleTapAllowed;
-(void)setAppDisabledNowPlayingHUD:(BOOL)hud bundleIdentifier:(id)identifier;
-(BOOL)canShowLockScreenCameraGrabber;
-(BOOL)lockScreenCameraSupported;
-(BOOL)canShowLockScreenHUDControls;
-(BOOL)iapIsInExtendedMode;
-(BOOL)shouldRunFieldTestScript;
-(void)batteryStatusDidChange:(id)batteryStatus;
-(void)significantTimeChange;
-(void)_significantTimeChange;
-(void)runFieldTestScript;
-(void)_testPhoneAlerts;
-(void)_lockdownActivationChanged:(id)changed;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)_reloadDemoAndDebuggingDefaultsAndCapabilities;
-(void)_effectiveSettingsDidChange;
-(void)showEDGEActivationFailureAlert:(id)alert reason:(id)reason forMMS:(BOOL)mms;
-(void)wipeDeviceNow;
-(void)_rotateView:(id)view toOrientation:(int)orientation;
-(void)requestDeviceUnlock;
-(void)languageChanged;
-(BOOL)restartedForLanguageChangeWhileUnlocked;
-(id)_settingLanguageStringForNewLanguage;
-(void)clearLaunchedAfterLanguageRestart;
-(BOOL)launchedAfterLanguageRestart;
-(void)appleIconViewRemoved;
-(void)_revealSpotlight;
-(void)applicationDidFinishLaunching:(id)application;
-(void)_performDeferredLaunchWork;
-(void)_startBulletinBoardServer;
-(void)updateStackshotSettings;
-(void)monitorForPurpleServerTermination;
-(void)handleKeyHIDEvent:(IOHIDEventRef)event;
-(BOOL)_shouldSwallowGSEvent:(GSEventRef)event;
-(BOOL)_shouldSwallowHIDEvent:(IOHIDEventRef)event;
-(void)handleSignal:(int)signal;
-(id)init;
-(void)setNextAssistantRecognitionStrings:(id)strings;
-(id)setNextVoiceRecognitionAudioInputPaths:(id)paths;
-(void)_runControlCenterBringupTest;
-(void)_runControlCenterDismissTest;
-(void)_runScrollNotificationCenterTest:(id)test;
-(void)_runNotificationCenterBringupTest;
-(void)_runNotificationCenterDismissTest;
-(void)_runAppSliderBringupTest;
-(void)_runAppSliderDismissTest;
-(void)_runScrollAppSliderTest:(id)test;
-(void)_runDisplayAlertTest:(id)test;
-(void)_runScrollIconListTest;
-(void)finishedTest:(id)test extraResults:(id)results;
-(void)runRotationTest:(int)test;
-(void)endLaunchTest;
-(void)startResumeTestNamed:(id)named options:(id)options;
-(void)startLaunchTestNamed:(id)named options:(id)options;
-(void)_retryLaunchTestWithOptions:(id)options;
-(void)_cameraPreviewStarted;
-(void)_workspaceTransactionCompleted:(id)completed;
-(void)_unscatterWillBegin:(id)_unscatter;
-(void)_runUnlockTest;
-(BOOL)runTest:(id)test options:(id)options;
-(void)_alertSheetStackChanged;
@end

