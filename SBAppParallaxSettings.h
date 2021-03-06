/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/_UISettings.h>

@class SBFLockScreenWallpaperParallaxSettings, SBFHomeScreenWallpaperParallaxSettings, SBFParallaxSettings;

__attribute__((visibility("hidden")))
@interface SBAppParallaxSettings : _UISettings {
	SBFLockScreenWallpaperParallaxSettings* _lockscreenWallpaperSettings;
	SBFHomeScreenWallpaperParallaxSettings* _homescreenWallpaperSettings;
	SBFParallaxSettings* _iconSettings;
	SBFParallaxSettings* _iconBadgeSettings;
}
@property(retain) SBFParallaxSettings* iconBadgeSettings;
@property(retain) SBFParallaxSettings* iconSettings;
@property(retain) SBFHomeScreenWallpaperParallaxSettings* homescreenWallpaperSettings;
@property(retain) SBFLockScreenWallpaperParallaxSettings* lockscreenWallpaperSettings;
+(id)settingsControllerModule;
-(void)setDefaultValues;
@end

