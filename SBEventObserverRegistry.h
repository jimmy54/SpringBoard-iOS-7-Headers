/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <SpringBoardUI/SBAwayViewPluginController.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBEventObserverRegistry : SBAwayViewPluginController {
	void* _provider;
	NSMutableDictionary* _observers;
}
+(id)sharedInstance;
-(void)setValue:(BOOL)value forState:(CFStringRef)state;
-(void)postEventToInterestedObservers:(CFStringRef)interestedObservers;
-(void)removeObserverWithToken:(unsigned long long)token forEvent:(id)event;
-(void)addObserverWithToken:(unsigned long long)token forEvent:(id)event;
-(id)init;
-(void)handleEvent:(id)event token:(unsigned long long)token action:(void*)action;
@end

