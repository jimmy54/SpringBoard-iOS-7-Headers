/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "SBStarkLauncherViewController.h"
#import "UIGestureRecognizerDelegate.h"
#import "SBStarkKnobLauncherCellDelegate.h"
#import "SpringBoard-Structs.h"

@class UITableView, UINavigationBar, SBIcon;

__attribute__((visibility("hidden")))
@interface SBStarkKnobLauncherViewController : SBStarkLauncherViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, SBStarkKnobLauncherCellDelegate> {
	UITableView* _tableView;
	UINavigationBar* _navBar;
	SBIcon* _lastHighlightedIcon;
}
-(BOOL)starkKnobLauncherCellDisplaysBadges:(id)badges;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)iconShowsDisclosureIndicator:(id)indicator;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)relayoutIcons;
-(id)prefixFakeIcons;
-(BOOL)obscuresControlBar;
-(BOOL)hidesAutomatically;
-(id)_rowIndexPathForIcon:(id)icon;
-(void)_launchIcon:(id)icon;
-(void)dealloc;
@end

