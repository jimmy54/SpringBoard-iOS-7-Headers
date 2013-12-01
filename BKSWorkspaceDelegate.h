/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol BKSWorkspaceDelegate <NSObject>
-(void)workspace:(id)workspace applicationDebugStateChanged:(id)changed newState:(BOOL)state;
-(void)workspace:(id)workspace handleStatusBarReturnActionFromApplication:(id)application statusBarStyle:(id)style;
-(void)workspace:(id)workspace applicationSuspensionSettingsUpdated:(id)updated withSettings:(id)settings;
-(void)workspace:(id)workspace applicationExited:(id)exited withInfo:(id)info;
-(void)workspace:(id)workspace applicationSuspended:(id)suspended withSettings:(id)settings;
-(void)workspace:(id)workspace applicationActivated:(id)activated;
-(void)workspace:(id)workspace applicationDidFailToLaunch:(id)application;
-(void)workspace:(id)workspace applicationDidFinishLaunching:(id)application withInfo:(id)info;
-(void)workspace:(id)workspace applicationDidStartLaunching:(id)application;
-(void)workspaceDidResume:(id)workspace;
-(void)workspaceWillResume:(id)workspace;
-(void)workspaceDidSuspend:(id)workspace;
-(void)workspaceWillSuspend:(id)workspace;
-(void)workspace:(id)workspace applicationDidBecomeReceiver:(id)application fromApplication:(id)application3;
-(id)workspace:(id)workspace applicationWillBecomeReceiver:(id)application fromApplication:(id)application3;
@optional
-(void)workspace:(id)workspace applicationDidFailToActivate:(id)application;
-(void)workspace:(id)workspace applicationDidRemainReceiver:(id)application fromApplication:(id)application3;
-(void)workspace:(id)workspace applicationFinishedBackgroundContentFetching:(id)fetching withInfo:(id)info;
-(void)workspace:(id)workspace handleOpenURLRequest:(id)request application:(id)application withOptions:(id)options origin:(id)origin withResult:(id)result;
-(void)workspace:(id)workspace handleOpenApplicationRequest:(id)request withOptions:(id)options origin:(id)origin withResult:(id)result;
-(int)workspace:(id)workspace canOpenApplication:(id)application;
@end

