/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class UIView, SBAlertManager, SBUIFullscreenAlertAdapter, SBLockScreenViewController;

__attribute__((visibility("hidden")))
@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController {
	SBLockScreenViewController* _lockScreenViewController;
	SBAlertManager* _alertManager;
	SBUIFullscreenAlertAdapter* _toAlert;
	UIView* _cameraSnapshotView;
	BOOL _animatingFromCamera;
	BOOL _alertViewIsAnimatingItself;
	BOOL _alertIsTransparent;
	BOOL _finishedPrimaryFadeAnimation;
	BOOL _needsLockScreenAlphaRestoredOnCompletion;
}
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)_alertViewFinishedAnimatingItself;
-(void)_fadeAnimationFinished;
-(void)_evaluateTotalAnimationCompletion;
-(void)_animationFinished;
-(double)animationDuration;
-(void)dealloc;
-(id)initWithLockScreenController:(id)lockScreenController toAlert:(id)alert alertManager:(id)manager;
@end

