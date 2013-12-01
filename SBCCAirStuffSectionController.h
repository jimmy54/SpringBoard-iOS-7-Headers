/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBControlCenterSectionViewController.h"
#import "SFAirDropDiscoveryControllerDelegate.h"
#import "SFAirDropDiscoveryActionSheetDelegate.h"
#import "UIActionSheetDelegate.h"
#import "SpringBoard-Structs.h"
#import "MPAudioVideoRoutingViewControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class MPAudioVideoRoutingActionSheet, MPAudioVideoRoutingViewController, MPAudioVideoRoutingPopoverController, SFAirDropDiscoveryController, BKSTimer, SBCCButtonLikeSectionView;

__attribute__((visibility("hidden")))
@interface SBCCAirStuffSectionController : SBControlCenterSectionViewController <MPAudioVideoRoutingViewControllerDelegate, UIPopoverControllerDelegate, SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryActionSheetDelegate, UIActionSheetDelegate> {
	SBCCButtonLikeSectionView* _airPlaySection;
	SBCCButtonLikeSectionView* _airDropSection;
	MPAudioVideoRoutingActionSheet* _airPlayActionSheet;
	MPAudioVideoRoutingViewController* _airPlayViewController;
	MPAudioVideoRoutingPopoverController* _airPlayPopoverController;
	SFAirDropDiscoveryController* _airDropDiscoveryController;
	BOOL _isVisible;
	BOOL _airPlayWasPreviouslyEnabled;
	BKSTimer* _resetTimer;
	BOOL _airPlayEnabled;
	BOOL _airDropEnabled;
}
@property(assign, nonatomic) BOOL airDropEnabled;
@property(assign, nonatomic) BOOL airPlayEnabled;
+(Class)viewClass;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)discoveryController:(id)controller actionSheetDidDismiss:(id)actionSheet;
-(void)discoveryController:(id)controller actionSheetWillDismiss:(id)actionSheet;
-(void)discoveryControllerVisibilityDidChange:(id)discoveryControllerVisibility;
-(void)discoveryControllerSettingsDidChange:(id)discoveryControllerSettings;
-(void)viewControllerRequestsDismissal:(id)dismissal;
-(void)_dismissAirplayControllerAnimated:(BOOL)animated;
-(void)_debugAirplaneStateDidChangeNotification:(id)_debugAirplaneState;
-(void)_debugWifiStateDidChangeNotification:(id)_debugWifiState;
-(void)_availableRoutesDidChangeNotification:(id)_availableRoutes;
-(void)_updateAirDropControlAsEnabled:(BOOL)enabled;
-(void)_updateForAirDropStateChange;
-(void)_updateAirPlayControlAsEnabled:(BOOL)enabled;
-(void)_updateForAirPlayStateChange;
-(void)_airDropTapped:(id)tapped;
-(void)_airPlayTapped:(id)tapped;
-(void)_showAirPlayView:(id)view;
-(void)_noteSectionEnabledStateDidChange;
-(void)_updateSubsectionVisibilityAnimated:(BOOL)animated;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(void)viewDidLoad;
-(id)view;
-(BOOL)enabledForOrientation:(int)orientation;
-(CGSize)contentSizeForOrientation:(int)orientation;
-(id)sectionIdentifier;
-(void)dealloc;
-(id)init;
@end

