/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBLockOverlayStylePropertiesFactory : NSObject {
	NSMutableDictionary* _deviceQualityToProperties;
	unsigned _style;
}
@property(readonly, assign, nonatomic) unsigned style;
+(id)overlayPropertiesFactoryWithStyle:(unsigned)style;
-(id)_fetchAndCachePropsForDeviceQuality:(int)deviceQuality;
-(id)propertiesWithGraphicsQuality:(int)graphicsQuality;
-(id)propertiesWithDeviceDefaultGraphicsQuality;
-(void)dealloc;
-(id)initWithStyle:(unsigned)style;
@end

