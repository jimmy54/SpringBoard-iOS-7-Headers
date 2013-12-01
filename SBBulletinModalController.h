/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SBBulletinAlertHandler.h"
#import "SBBulletinBusyClient.h"
#import "BBObserverDelegate.h"
#import "SpringBoard-Structs.h"

@class NSMapTable, NSMutableArray, NSMutableDictionary, BBObserver;

__attribute__((visibility("hidden")))
@interface SBBulletinModalController : NSObject <BBObserverDelegate, SBBulletinAlertHandler, SBBulletinBusyClient> {
	BBObserver* _observer;
	BOOL _deviceIsLocked;
	NSMutableArray* _incomingBulletinEventQueue;
	NSMutableDictionary* _handlersBySectionID;
	NSMapTable* _handlersByBulletinID;
	NSMapTable* _alertsByBulletinID;
	BOOL _quietModeEnabled;
}
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(void)_syncDismissalForBulletin:(id)bulletin;
-(void)handleEvent:(int)event withBulletin:(id)bulletin forRegistry:(id)registry;
-(BOOL)bindBulletin:(id)bulletin forRegistry:(id)registry;
-(void)bulletinWindowStoppedBeingBusy;
-(void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
-(void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
-(id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
-(id)observer:(id)observer thumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
-(void)observer:(id)observer noteServerReceivedResponseForBulletin:(id)bulletin;
-(void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
-(void)observer:(id)observer purgeReferencesToBulletinID:(id)bulletinID;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer modifyBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)_executeOrPendEventBlock:(id)block forBulletin:(id)bulletin;
-(void)_dequeuePendedEventsIfPossible;
-(id)attachmentImageForBulletin:(id)bulletin;
-(id)init;
-(void)destroyingAlert:(id)alert withBulletin:(id)bulletin;
@end
