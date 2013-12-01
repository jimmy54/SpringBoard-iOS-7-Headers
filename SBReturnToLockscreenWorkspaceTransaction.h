/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerDelegate.h"
#import "SBActivateAppUnderLockScreenWorkspaceTransaction.h"

@class SBApplication, SBUIAnimationController;

__attribute__((visibility("hidden")))
@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction <SBUIAnimationControllerDelegate> {
	SBApplication* _fromApp;
	BOOL _workspaceAlreadyResumed;
	BOOL _animatedAppDeactivation;
	SBUIAnimationController* _animation;
	BOOL _suspendWorkspace;
}
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(void)_alertDidActivate;
-(void)_transactionComplete;
-(void)_commit;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager fromApplication:(id)application toLockScreenController:(id)lockScreenController andApp:(id)app activationHandler:(id)handler;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager fromApplication:(id)application toLockScreenController:(id)lockScreenController andApp:(id)app;
@end

