/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationPhoneToLockScreenBase.h"

@class SBDisableUnlockAssertion;

__attribute__((visibility("hidden")))
@interface SBUIAnimationFadePhoneToLockScreen : SBUIAnimationPhoneToLockScreenBase {
	SBDisableUnlockAssertion* _disableUnlockAssertion;
	int _launchingOrientation;
}
-(void)_showLockStatusBar:(id)bar;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)dealloc;
@end

