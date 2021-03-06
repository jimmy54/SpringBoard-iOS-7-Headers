/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/_UISettings.h>

@class SBFAnimationSettings, SBLockScreenPasscodeSettings, SBSlideToUnlockFailureRecognizerSettings, SBBounceSettings;

__attribute__((visibility("hidden")))
@interface SBLockScreenSettings : _UISettings {
	BOOL _alwaysPutPluginsBelowScrollView;
	SBBounceSettings* _verticalBounceSettings;
	SBBounceSettings* _horizontalBounceSettings;
	SBLockScreenPasscodeSettings* _passcodeSettings;
	SBSlideToUnlockFailureRecognizerSettings* _slideToUnlockFailureRecognizerSettings;
	SBFAnimationSettings* _unlockToPhoneWallpaperOutSettings;
	SBFAnimationSettings* _unlockToPhoneWallpaperInSettings;
	SBFAnimationSettings* _unlockWallpaperOutSettings;
	SBFAnimationSettings* _unlockWallpaperInSettings;
	float _lockToUnlockSlideCompletionPercentage;
	float _lockToUnlockSlideCompletionPercentageIPad;
	float _unlockSlideForIdleTimerDisabledPercentage;
	float _unlockSlideForIdleTimerDisabledPercentageIPad;
	float _notificationScrollForIdleTimerDisabledOffset;
	float _notificationScrollForIdleTimerDisabledOffsetIPad;
	float _unlockSwipeWallpaperAlpha;
}
@property(assign) BOOL alwaysPutPluginsBelowScrollView;
@property(assign) float unlockSwipeWallpaperAlpha;
@property(assign) float notificationScrollForIdleTimerDisabledOffsetIPad;
@property(assign) float notificationScrollForIdleTimerDisabledOffset;
@property(assign) float unlockSlideForIdleTimerDisabledPercentageIPad;
@property(assign) float unlockSlideForIdleTimerDisabledPercentage;
@property(assign) float lockToUnlockSlideCompletionPercentageIPad;
@property(assign) float lockToUnlockSlideCompletionPercentage;
@property(retain) SBFAnimationSettings* unlockWallpaperInSettings;
@property(retain) SBFAnimationSettings* unlockWallpaperOutSettings;
@property(retain) SBFAnimationSettings* unlockToPhoneWallpaperInSettings;
@property(retain) SBFAnimationSettings* unlockToPhoneWallpaperOutSettings;
@property(retain) SBSlideToUnlockFailureRecognizerSettings* slideToUnlockFailureRecognizerSettings;
@property(retain) SBLockScreenPasscodeSettings* passcodeSettings;
@property(retain) SBBounceSettings* horizontalBounceSettings;
@property(retain) SBBounceSettings* verticalBounceSettings;
+(id)settingsControllerModule;
-(void)setDefaultValues;
@end

