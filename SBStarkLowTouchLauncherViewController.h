/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>
#import "SBStarkLauncher.h"
#import "SBStarkTouchLauncherObserver.h"
#import "SpringBoard-Structs.h"

@class SBStarkIconListModel, UIButton, SBStarkFakeIconOperationController, SBStarkTouchLauncherViewController;
@protocol SBStarkAutoHideControlBarDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkLowTouchLauncherViewController : UIViewController <SBStarkTouchLauncherObserver, SBStarkLauncher> {
	SBStarkTouchLauncherViewController* _touchLauncherViewController;
	UIButton* _leftScrollButton;
	UIButton* _rightScrollButton;
}
@property(assign, nonatomic) id<SBStarkAutoHideControlBarDelegate> autoHideDelegate;
@property(retain, nonatomic) SBStarkFakeIconOperationController* fakeIconOperationController;
@property(readonly, assign, nonatomic) BOOL obscuresControlBar;
@property(readonly, assign, nonatomic) BOOL hidesAutomatically;
@property(readonly, assign, nonatomic) SBStarkIconListModel* iconList;
@property(assign, nonatomic) float height;
+(float)desiredHeightForBounds:(CGRect)bounds;
-(void)touchLauncherDidScroll:(id)touchLauncher;
-(void)touchLauncherDidChangeScrollButtonInsets:(id)touchLauncher;
-(void)_scrollRight;
-(void)_scrollLeft;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

