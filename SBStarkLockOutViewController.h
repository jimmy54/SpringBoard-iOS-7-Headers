/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>

@class UIView, SBStarkLockOutAnimation, UIStatusBar;

__attribute__((visibility("hidden")))
@interface SBStarkLockOutViewController : UIViewController {
	UIStatusBar* _statusBarView;
	int _mode;
	UIView* _modeView;
	BOOL _animating;
	int _pendingMode;
	SBStarkLockOutAnimation* _pendingAnimation;
}
@property(assign, nonatomic) int lockOutMode;
-(void)_updateLockOutModeIfPending;
-(id)_newModeViewForMode:(int)mode;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)setLockOutMode:(int)mode withAnimation:(id)animation;
@end

