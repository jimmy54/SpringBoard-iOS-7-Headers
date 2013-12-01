/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface SBUnlockActionContextFactory : NSObject {
}
+(id)sharedInstance;
-(id)unlockActionContextForWidgetRequest:(id)widgetRequest;
-(id)unlockActionContextForSnoozedAlarmItem:(id)snoozedAlarmItem;
-(id)unlockActionContextForCardItem:(id)cardItem;
-(id)unlockActionContextForAlertItem:(id)alertItem;
-(id)unlockActionContextForBulletin:(id)bulletin withOrigin:(int)origin pluginActionsAllowed:(BOOL)allowed;
@end
