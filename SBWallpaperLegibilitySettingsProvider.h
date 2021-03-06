/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWallpaperObserver.h"
#import <Foundation/NSObject.h>
#import "SBFLegibilitySettingsProvider.h"

@class _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

__attribute__((visibility("hidden")))
@interface SBWallpaperLegibilitySettingsProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider> {
	id<SBFLegibilitySettingsProviderDelegate> _delegate;
	int _variant;
}
@property(readonly, assign, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(assign, nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate;
-(void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
-(void)wallpaperDidChangeForVariant:(int)wallpaper;
-(void)dealloc;
-(id)initWithVariant:(int)variant;
@end

