/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDismissOnlyAlertItem.h"

@class UIView, NSString, UITextView;

__attribute__((visibility("hidden")))
@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem {
	UIView* _accessoryView;
	UITextView* _textView;
	NSString* _meid;
	NSString* _imei;
	NSString* _iccid;
	float _alertHeight;
}
+(id)activeItem;
-(id)_formattedIMEI;
-(id)_formattedICCID;
-(BOOL)allowInSetup;
-(BOOL)forcesModalAlertAppearance;
-(void)didDeactivateForReason:(int)reason;
-(void)willActivate;
-(void)_simStatusChanged:(id)changed;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)_updateTextView;
-(void)dealloc;
-(id)init;
@end

