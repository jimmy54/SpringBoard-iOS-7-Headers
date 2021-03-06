/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>

@class SBBulletinWindowController, SBBulletinRootView;

__attribute__((visibility("hidden")))
@interface SBBulletinRootViewController : UIViewController {
	SBBulletinRootView* _rootView;
	SBBulletinWindowController* _windowController;
}
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)wantsFullScreenLayout;
-(void)dismissViewController:(id)controller onView:(id)view;
-(void)presentViewController:(id)controller onView:(id)view;
-(void)dealloc;
-(void)loadView;
-(id)initWithBulletinWindowController:(id)bulletinWindowController;
@end

