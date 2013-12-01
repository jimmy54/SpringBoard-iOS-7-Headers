/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SBEdgeActivationAlertItem : SBAlertItem {
	int _error;
	NSString* _reason;
	BOOL _suggestWiFi;
	int _settingsButtonIndex;
}
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_showNetworkPrefs;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)dealloc;
-(id)initWithErrorCode:(int)errorCode reason:(id)reason suggestWiFi:(BOOL)fi;
@end
