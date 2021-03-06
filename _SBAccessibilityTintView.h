/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWallpaperObserver.h"
#import <UIKit/UIView.h>
#import "_SBFakeBlur.h"

@protocol _SBFakeBlurObserver;

__attribute__((visibility("hidden")))
@interface _SBAccessibilityTintView : UIView <_SBFakeBlur, SBWallpaperObserver> {
	int _variant;
	id<_SBFakeBlurObserver> _observer;
}
@property(assign, nonatomic) id<_SBFakeBlurObserver> observer;
-(void)_updateBackgroundColor;
-(void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
-(void)wallpaperDidChangeForVariant:(int)wallpaper;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(int)effectiveStyle;
-(void)requestStyle:(int)style;
-(void)dealloc;
-(id)initWithVariant:(int)variant;
@end

