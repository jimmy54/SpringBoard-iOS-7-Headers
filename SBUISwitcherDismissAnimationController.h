/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class UIView, SBAppSwitcherPageView, SBAppSliderController;

__attribute__((visibility("hidden")))
@interface SBUISwitcherDismissAnimationController : SBUIMainScreenAnimationController {
	SBAppSliderController* _sliderController;
	UIView* _appContextHostView;
	SBAppSwitcherPageView* _animatingPageView;
	BOOL _finishedSwitcherAnimation;
	BOOL _finishedCrossfadingToHostView;
}
-(void)_reportAnimationFinishedIfNecessary;
-(void)_noteCrossfadeDidFinish;
-(void)_noteSwitcherAnimationFinished;
-(void)_crossfadeApp;
-(void)_applicationDependencyStateChanged;
-(id)_animationProgressDependency;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
@end

