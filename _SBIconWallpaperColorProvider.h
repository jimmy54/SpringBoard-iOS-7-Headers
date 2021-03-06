/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWallpaperObserver.h"
#import "_UISettingsKeyObserver.h"
#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class SBIconColorSettings, NSHashTable;

__attribute__((visibility("hidden")))
@interface _SBIconWallpaperColorProvider : NSObject <_UISettingsKeyObserver, SBWallpaperObserver> {
	SBIconColorSettings* _colorSettings;
	NSHashTable* _clients;
	CGColorRef _blurColor;
	CGColorRef _solidColor;
}
+(BOOL)_supportsPhasedPatterns;
+(id)sharedInstance;
-(void)_updateColors;
-(void)_updateBlurForClient:(id)client;
-(void)_updateClient:(id)client;
-(void)_updateAllClients;
-(void)wallpaperGeometryDidChangeForVariant:(int)wallpaperGeometry;
-(void)wallpaperLegibilitySettingsDidChange:(id)wallpaperLegibilitySettings forVariant:(int)variant;
-(void)wallpaperDidChangeForVariant:(int)wallpaper;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)updateColorForClientBoundsChange:(id)clientBoundsChange;
-(void)removeClient:(id)client;
-(void)addClient:(id)client;
-(void)dealloc;
-(id)init;
@end

