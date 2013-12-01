/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockScreenViewControllerBase.h"
#import "SBLockScreenViewDelegate.h"
#import "SBLockScreenTimerViewControllerDelegate.h"
#import "SBLockScreenNotificationListDelegate.h"
#import "SBUIPasscodeLockViewDelegate_Internal.h"
#import "SBLockScreenBatteryChargingViewControllerDelegate.h"
#import "SBLockScreenInfoOverlayDelegate.h"
#import "SBLockScreenCameraControllerDelegate.h"
#import "SBLockScreenPluginControllerDelegate.h"
#import "SBWallpaperObserver.h"
#import "SpringBoard-Structs.h"

@class SBLockScreenNowPlayingPluginController, SBLockScreenDeviceBlockViewController, SBLockScreenEmergencyCallViewController, SBLockScreenLegalViewController, SBLockScreenPluginController, SBLockScreenResetRestoreViewController, MPUSystemMediaControlsViewController, SBLockScreenInfoOverlayViewController, SBLockScreenCameraController, SBLockScreenNotificationListController, SBLockScreenTemperatureWarningViewController, SBLockScreenModalAlertViewController, SBLockScreenBatteryChargingViewController, NSMutableArray, SBLockScreenDateViewController, SBLockScreenBuddyViewController, SBLockScreenFullscreenBulletinViewController, SBLockScreenSystemAlertFullscreenViewController, SBLockScreenTimerViewController, SBLockOverlayContext;

__attribute__((visibility("hidden")))
@interface SBLockScreenViewController : SBLockScreenViewControllerBase <SBLockScreenViewDelegate, SBLockScreenTimerViewControllerDelegate, SBLockScreenNotificationListDelegate, SBUIPasscodeLockViewDelegate_Internal, SBLockScreenBatteryChargingViewControllerDelegate, SBLockScreenInfoOverlayDelegate, SBWallpaperObserver, SBLockScreenCameraControllerDelegate, SBLockScreenPluginControllerDelegate> {
	BOOL _isInScreenOffMode;
	SBLockScreenDeviceBlockViewController* _blockedController;
	SBLockScreenDateViewController* _dateViewController;
	SBLockScreenLegalViewController* _legalViewController;
	SBLockScreenTimerViewController* _timerViewController;
	SBLockScreenNotificationListController* _notificationController;
	SBLockScreenCameraController* _cameraController;
	MPUSystemMediaControlsViewController* _mediaControlsViewController;
	BOOL _ignoreFirstMediaToggle;
	SBLockScreenModalAlertViewController* _modalAlertController;
	SBLockScreenSystemAlertFullscreenViewController* _fullscreenSystemAlertController;
	NSMutableArray* _pendingFullscreenSystemAlerts;
	SBLockScreenBatteryChargingViewController* _chargingViewController;
	BOOL _attemptingPasscodeUnlock;
	BOOL _chargingViewControllerVisible;
	BOOL _wasAutoUnlocked;
	BOOL _forcePasscodeWhileInCall;
	BOOL _isHidingPasscodeWhileInCall;
	SBLockScreenPluginController* _pluginController;
	SBLockScreenNowPlayingPluginController* _nowPlayingController;
	SBLockScreenBuddyViewController* _buddyController;
	SBLockOverlayContext* _buddyOverlayContext;
	NSMutableArray* _prioritizedOverlays;
	SBLockOverlayContext* _fullScreenOverlayContext;
	SBLockOverlayContext* _blockedOverlayContext;
	SBLockScreenFullscreenBulletinViewController* _fullscreenBulletinController;
	SBLockOverlayContext* _fullScreenBulletinOverlayContext;
	SBLockScreenInfoOverlayViewController* _infoOverlayController;
	SBLockOverlayContext* _infoOverlayContext;
	SBLockScreenTemperatureWarningViewController* _thermalWarningController;
	SBLockOverlayContext* _thermalWarningContext;
	SBLockScreenResetRestoreViewController* _resetRestoreViewController;
	SBLockOverlayContext* _resetRestoreOverlayContext;
	SBLockScreenEmergencyCallViewController* _emergencyCallController;
	BOOL _suppressWallpaperAlphaChangeOnScroll;
}
@property(readonly, assign, nonatomic) SBLockScreenPluginController* pluginController;
-(id)_wallpaperLegibilitySettings;
-(id)_pluginLegibilitySettings;
-(id)_overlayLegibilitySettings;
-(id)_notificationListLegibilitySettings;
-(id)_effectiveLegibilitySettings;
-(void)_updateLegibility;
-(id)legibilitySettings;
-(void)_cameraControllerDidHide:(id)_cameraController;
-(void)_cameraControllerDidShow:(id)_cameraController;
-(id)cameraParentViewController;
-(void)wallpaperDidChangeForVariant:(int)wallpaper;
-(void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
-(void)_buddyDidFinish:(id)_buddy;
-(void)_removeBuddyBackground;
-(void)_addOrRemoveBuddyBackgroundIfNecessary;
-(void)biometricEventMonitorDidAuthenticate:(id)biometricEventMonitor;
-(void)_updateGrabbersForIdentityManagerAuthentication;
-(void)_updateMediaControlsForScreenMode;
-(void)_mediaControlsDidHideOrShow:(id)_mediaControls;
-(void)setShowingMediaControls:(BOOL)controls;
-(BOOL)isShowingMediaControls;
-(void)_setMediaControlsVisible:(BOOL)visible;
-(void)_toggleMediaControls;
-(id)_notificationController;
-(void)pluginController:(id)controller activePluginDidChange:(id)activePlugin;
-(void)_setNowPlayingControllerEnabled:(BOOL)enabled;
-(void)_removeActivePluginView;
-(void)_resetActivePlugin;
-(CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
-(void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
-(void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
-(id)activeLockScreenPluginController;
-(BOOL)isLockScreenPluginViewVisible;
-(void)deactivateCardItem:(id)item;
-(void)updateCardItem:(id)item;
-(void)activateCardItem:(id)item animated:(BOOL)animated;
-(id)allPendingAlertItems;
-(BOOL)hasSuperModalAlertItems;
-(id)dequeueAllPendingSuperModalAlertItems;
-(id)currentAlertItem;
-(void)cleanupAlertItemsForDeactivation;
-(void)deactivateAlertItem:(id)item;
-(BOOL)activateAlertItem:(id)item;
-(void)pendOrDeactivateFullscreenSystemAlert:(id)alert;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(BOOL)canHandleAlerts;
-(BOOL)shouldPendAlertItemsWhileActive;
-(void)chargingViewControllerFadedOutContent:(id)content;
-(void)_cleanupBatteryChargingViewWithAnimationDuration:(double)animationDuration;
-(void)_fadeViewsForChargingViewVisible:(BOOL)chargingViewVisible;
-(void)_acStatusChanged:(id)changed;
-(void)_updateBatteryChargingViewAnimated:(BOOL)animated;
-(void)dismissFullscreenBulletinAlertWithItem:(id)item;
-(void)modifyFullscreenBulletinAlertWithItem:(id)item;
-(void)presentFullscreenBulletinAlertWithItem:(id)item;
-(void)_removeFullscreenBulletinViewAnimated:(BOOL)animated;
-(void)_addFullscreenBulletinViewWithItem:(id)item;
-(id)lockScreenScrollView;
-(void)notificationListBecomingVisible:(BOOL)visible;
-(void)attemptToUnlockUIFromNotification;
-(void)_dismissNotificationCenterToRevealPasscode;
-(void)bannerEnablementChanged;
-(void)timerControllerDidStopTimer:(id)timerController;
-(void)timerControllerDidStartTimer:(id)timerController;
-(void)_updateDateTimerStatusBarAndLockSlider;
-(BOOL)_shouldShowDate;
-(float)_effectiveVisibleStatusBarAlpha;
-(id)_effectiveCustomSlideToUnlockText;
-(float)_effectiveOpacityForVisibleDateView;
-(BOOL)isMakingEmergencyCall;
-(void)emergencyDialerExitedWithError:(id)error;
-(void)exitEmergencyDialerAnimated:(BOOL)animated;
-(void)_destroyEmergencyDialerAnimated:(BOOL)animated;
-(void)launchEmergencyDialer;
-(void)_adjustIdleTimerForEmergencyDialerActive:(BOOL)emergencyDialerActive;
-(void)passcodeLockViewKeypadKeyUp:(id)up;
-(void)passcodeLockViewKeypadKeyDown:(id)down;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)pressed;
-(void)passcodeLockViewCancelButtonPressed:(id)pressed;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
-(void)passcodeLockViewPasscodeEntered:(id)entered;
-(void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
-(void)_endTimedPasscodeHysteresis;
-(void)_beginTimedPasscodeHysteresis;
-(void)_togglePasscodeEmergencyCallButtonIfNecessary;
-(BOOL)__shouldHidePasscodeForActiveCall;
-(void)_evaluateLockUIForActiveCalls;
-(BOOL)isHidingPasscodeViewDuringCall;
-(void)_passcodeStateChanged;
-(BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
-(BOOL)isPasscodeLockVisible;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated withUnlockSource:(int)unlockSource andOptions:(id)options;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated completion:(id)completion;
-(void)_callCountChanged:(id)changed;
-(void)_callInfoChanged:(id)changed;
-(void)_handlePasscodePolicyChanged;
-(void)_handlePasscodeLockStateChanged;
-(void)_handleBacklightLevelChanged:(id)changed;
-(void)_handleBacklightFadeEnded;
-(void)_handleDisplayTurnedOn;
-(void)_handleDisplayWillUndim;
-(void)_handleDisplayTurnedOff;
-(void)noteResetRestoreStateUpdated;
-(void)noteDeviceBlockedStatusUpdated;
-(void)_unsupportedChargingAccessoryStateChanged:(id)changed;
-(void)infoOverlayWantsDismissal;
-(void)_removeInfoOverlayViewAnimated:(BOOL)animated;
-(void)_addInfoOverlayViewWithTitle:(id)title;
-(void)overlay:(id)overlay wantsStyleChange:(unsigned)change;
-(void)removeOverlay:(id)overlay animated:(BOOL)animated completion:(id)completion;
-(void)addOverlay:(id)overlay animated:(BOOL)animated completion:(id)completion;
-(void)__transitionOverlayAnimated:(BOOL)animated from:(id)from to:(id)to completion:(id)completion;
-(void)_removeAllOverlays;
-(BOOL)_shouldDismissSwitcherOnActivation;
-(BOOL)hasTranslucentBackground;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesBanners;
-(BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleLockButtonPressed;
-(BOOL)handleMenuButtonHeld;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)showsSpringBoardStatusBar;
-(BOOL)allowsStackingOfAlert:(id)alert;
-(int)statusBarStyleOverridesToCancel;
-(int)statusBarStyle;
-(void)alertDisplayWillBecomeVisible;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)_notificationCenterDidPresent:(id)_notificationCenter;
-(void)_notificationCenterWillPresent:(id)_notificationCenter;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)displayDidDisappear;
-(void)deactivate;
-(void)activate;
-(BOOL)allowSystemGestureAtLocation:(CGPoint)location;
-(void)shakeSlideToUnlockTextWithCustomText:(id)customText;
-(void)prepareForMesaUnlockWithCompletion:(id)completion;
-(BOOL)lockScreenBulletinControllerIsActive;
-(BOOL)lockScreenIsShowingBulletins;
-(BOOL)wantsToShowStatusBarTime;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)_isFadeInAnimationInProgress;
-(void)_startFadeInAnimationForBatteryView:(BOOL)batteryView;
-(void)startLockScreenFadeInAnimationForSource:(int)source;
-(void)noteExitingLostMode;
-(void)prepareToEnterLostMode;
-(BOOL)isShowingOverheatUI;
-(void)prepareToReturnToCameraFromCall;
-(void)cancelReturnToCameraAfterCall;
-(BOOL)shouldReturnToCameraAfterCall;
-(void)handlePhoneAppExitedIfNecessary;
-(void)noteStartingPhoneCallWhileUILocked;
-(void)dismissCameraImmediately;
-(void)activateCameraAnimated:(BOOL)animated;
-(BOOL)cameraIsVisible;
-(BOOL)cameraIsActive;
-(void)finishUIUnlockFromSource:(int)source;
-(void)prepareForUIUnlock;
-(void)prepareForExternalUIUnlock;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)source;
-(BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)source withOptions:(id)options;
-(id)_effectiveUnlockActionContext;
-(id)currentUnlockActionContext;
-(void)setForcesPasscodeViewDuringCall:(BOOL)call;
-(void)setInScreenOffMode:(BOOL)screenOffMode;
-(void)_updateGrabbersForScreenOffMode;
-(BOOL)isInScreenOffMode;
-(BOOL)isLockScreenVisible;
-(id)effectiveCustomSlideToUnlockText;
-(BOOL)lockScreenViewPhonePluginIsActive;
-(void)lockScreenView:(id)view didEndScrollingOnPage:(int)page;
-(void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)lockScreenView percentScrolledVelocity:(float)velocity targetScrollPercentage:(float)percentage;
-(void)lockScreenViewDidScrollWithNewScrollPercentage:(float)lockScreenView tracking:(BOOL)tracking;
-(void)lockScreenViewDidBeginScrolling:(id)lockScreenView;
-(void)lockScreenView:(id)view didScrollToPage:(int)page;
-(BOOL)_disableIdleTimer:(BOOL)timer;
-(BOOL)wasAutoUnlocked;
-(void)_removeMediaControls;
-(void)_addMediaControls;
-(id)_cameraView;
-(id)viewToAnimateForAlertTransition;
-(void)_removeBatteryChargingView;
-(void)_addBatteryChargingView;
-(void)_removeFullscreenSystemAlertViewAnimated:(BOOL)animated;
-(void)_addFullscreenSystemAlertViewForSystemNotification:(id)systemNotification withTitle:(id)title andSubtitle:(id)subtitle;
-(void)_removeNotificationView;
-(void)_addNotificationView;
-(void)_removeModalAlertView;
-(void)_addModalAlertView;
-(void)_removeTimerView;
-(void)_addTimerView;
-(void)_addTimerViewIfNecessary;
-(void)_removeLegalView;
-(void)_addLegalView;
-(void)_removeDateView;
-(void)_addDateView;
-(void)_addRemoveOrChangePasscodeViewIfNecessary;
-(void)_removeRestoreView:(BOOL)view;
-(void)_addOrRemoveResetRestoreViewIfNecessary:(BOOL)necessary;
-(id)_currentTextForResetOrRestoreState;
-(void)_removeThermalTrapView:(BOOL)view;
-(void)_addOrRemoveThermalTrapViewIfNecessary:(BOOL)necessary;
-(void)_removeBlockedView:(BOOL)view;
-(void)_addOrRemoveBlockedViewIfNecessary:(BOOL)necessary;
-(void)_addCameraGrabberIfNecessary;
-(id)_lockScreenViewCreatingIfNecessary;
-(id)lockScreenView;
-(void)_releaseLockScreenView;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

