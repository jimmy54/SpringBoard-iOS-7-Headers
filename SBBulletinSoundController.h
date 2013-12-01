/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SBBulletinBusyClient.h"
#import "BBObserverDelegate.h"
#import "SpringBoard-Structs.h"

@class NSMutableArray, NSMutableDictionary, BBObserver;

__attribute__((visibility("hidden")))
@interface SBBulletinSoundController : NSObject <BBObserverDelegate, SBBulletinBusyClient> {
	BBObserver* _observer;
	NSMutableArray* _blockQueue;
	NSMutableDictionary* _playingSounds;
	BOOL _deviceIsLocked;
	BOOL _quietModeEnabled;
	unsigned _quietModeState;
}
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(void)bulletinWindowStoppedBeingBusy;
-(void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
-(void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
-(void)observer:(id)observer noteAlertBehaviorOverrideStateChanged:(unsigned)changed;
-(void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)_enqueueBlock:(id)block forBulletin:(id)bulletin;
-(BOOL)_shouldHonorPlaySoundRequestForBulletin:(id)bulletin;
-(void)_hardwareButtonPressed:(id)pressed;
-(unsigned)quietModeState;
-(BOOL)quietModeEnabled;
-(void)killSounds;
-(void)killSoundForBulletin:(id)bulletin;
-(BOOL)playSoundForBulletin:(id)bulletin;
-(void)dealloc;
-(id)init;
@end

