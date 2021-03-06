/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SBUIPasscodeLockViewDelegate.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate> {
	BOOL _attemptingUnlock;
}
-(void)passcodeLockViewCancelButtonPressed:(id)pressed;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
-(void)passcodeLockViewPasscodeEntered:(id)entered;
-(void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
-(void)deactivate;
-(BOOL)hasTranslucentBackground;
-(id)alertDisplayViewWithSize:(CGSize)size;
@end

