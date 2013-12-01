/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBCenterIconZoomAnimator.h"
#import "SpringBoard-Structs.h"

@class UIView, SBCenterAppZoomSettings;

__attribute__((visibility("hidden")))
@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {
	UIView* _appView;
	float _distantScale;
}
@property(assign) float distantScale;
@property(retain, nonatomic) SBCenterAppZoomSettings* settings;
-(void)_fadeAppForZoomFraction:(float)zoomFraction;
-(void)_zoomAppForZoomFraction:(float)zoomFraction;
-(double)_appZoomDelay;
-(double)_iconZoomDelay;
-(void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
-(unsigned)_numberOfSignificantAnimations;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(float)fraction;
-(void)_prepareAnimation;
-(void)_delayedForRotation;
-(void)dealloc;
-(id)initWithFolderController:(id)folderController appView:(id)view;
@end

