/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBScaleZoomSettings.h"

@class SBFAnimationSettings;

__attribute__((visibility("hidden")))
@interface SBFolderZoomSettings : SBScaleZoomSettings {
	SBFAnimationSettings* _innerFolderFadeSettings;
}
@property(retain) SBFAnimationSettings* innerFolderFadeSettings;
+(id)settingsControllerModule;
-(void)setDefaultValues;
@end

