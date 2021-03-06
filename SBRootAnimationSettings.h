/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/_UISettings.h>

@class SBCenterZoomSettings, SBCenterAppZoomSettings, SBCrossfadeZoomSettings, SBFolderZoomSettings, SBReducedMotionFadeSettings;

__attribute__((visibility("hidden")))
@interface SBRootAnimationSettings : _UISettings {
	SBReducedMotionFadeSettings* _reducedMotionSettings;
	SBCenterZoomSettings* _unlockSettings;
	SBCenterAppZoomSettings* _centerLaunchSettings;
	SBCenterAppZoomSettings* _centerSuspendSettings;
	SBCrossfadeZoomSettings* _crossfadeLaunchSettings;
	SBCrossfadeZoomSettings* _crossfadeSuspendSettings;
	SBFolderZoomSettings* _folderOpenSettings;
	SBFolderZoomSettings* _folderCloseSettings;
}
@property(retain) SBFolderZoomSettings* folderCloseSettings;
@property(retain) SBFolderZoomSettings* folderOpenSettings;
@property(retain) SBCrossfadeZoomSettings* crossfadeSuspendSettings;
@property(retain) SBCrossfadeZoomSettings* crossfadeLaunchSettings;
@property(retain) SBCenterAppZoomSettings* centerSuspendSettings;
@property(retain) SBCenterAppZoomSettings* centerLaunchSettings;
@property(retain) SBCenterZoomSettings* unlockSettings;
@property(retain) SBReducedMotionFadeSettings* reducedMotionSettings;
+(id)settingsControllerModule;
-(void)setDefaultValues;
@end

