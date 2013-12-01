/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>
#import "SpringBoard-Structs.h"
#import "UIStatusBarStyleDelegate.h"
#import "SBStarkAutoHideControlBarDelegate.h"

@class SBStarkScreenFocusController, NSMutableSet, UIStatusBar, SBStarkFakeIconOperationController;
@protocol SBStarkLauncher, SBStarkControlBarDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkControlBarViewController : UIViewController <UIStatusBarStyleDelegate, SBStarkAutoHideControlBarDelegate> {
	id<SBStarkControlBarDelegate> _delegate;
	double _autoHideDelay;
	NSMutableSet* _launcherHideReasons;
	UIViewController<SBStarkLauncher>* _launcherViewController;
	UIStatusBar* _statusBarView;
	id<UIStatusBarStyleDelegate> _statusBarStyleDelegate;
	NSMutableSet* _statusBarHideReasons;
	int _requestedStyle;
	SBStarkScreenFocusController* _focusController;
	SBStarkFakeIconOperationController* _fakeIconOperationController;
}
@property(retain, nonatomic) SBStarkFakeIconOperationController* fakeIconOperationController;
@property(retain, nonatomic) SBStarkScreenFocusController* focusController;
@property(assign, nonatomic) id<UIStatusBarStyleDelegate> statusBarStyleDelegate;
@property(assign, nonatomic) double autoHideDelay;
@property(readonly, assign, nonatomic) CGPoint highestVisiblePoint;
@property(assign, nonatomic) id<SBStarkControlBarDelegate> delegate;
-(void)resetStarkControlBarAutoHideTimer;
-(void)statusBar:(id)bar didTriggerButtonType:(int)type withAction:(int)action;
-(void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;
-(void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;
-(int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
-(BOOL)_isStatusBarHidden;
-(void)_autoHideTriggered;
-(void)_resetAutoHideTimer;
-(CGRect)_launcherViewFrameForVisibility:(BOOL)visibility;
-(void)_setLauncherHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory fallbackToDefaultAnimationFactory:(BOOL)defaultAnimationFactory;
-(BOOL)_isLauncherHidden;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)updateStatusBarWithRequestedStyle:(int)requestedStyle animationFactory:(id)factory;
-(void)setStatusBarHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory;
-(void)setLauncherHidden:(BOOL)hidden forReason:(id)reason withAnimationFactory:(id)animationFactory;
-(void)setLauncherHidden:(BOOL)hidden forReason:(id)reason animated:(BOOL)animated;
-(void)dealloc;
-(id)initWithInterfaceType:(int)interfaceType;
@end

