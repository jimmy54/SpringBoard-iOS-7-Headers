/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationZoomDownApp.h"

@class SBAlertManager;

__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownAppToAlert : SBUIAnimationZoomDownApp {
	SBAlertManager* _alertManager;
}
-(void)cleanupZoom;
-(void)animateZoomWithCompletion:(id)completion;
-(void)prepareZoom;
-(double)animationDuration;
-(void)dealloc;
-(id)initWithDeactivatingApp:(id)deactivatingApp alertManager:(id)manager;
@end

