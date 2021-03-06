/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconImageView.h"
#import "SBControlCenterObserver.h"


__attribute__((visibility("hidden")))
@interface SBLiveIconImageView : SBIconImageView <SBControlCenterObserver> {
	unsigned _pauseCauses;
}
+(void)_displayDidDeactivate:(id)_display;
+(void)_displayWillActivate:(id)_display;
+(void)initialize;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(void)_activeDisplayChanged:(id)changed;
-(void)didMoveToWindow;
-(id)snapshot;
-(void)prepareForReuse;
-(void)updateImageAnimated:(BOOL)animated;
-(void)updateAnimatingState;
-(void)setPaused:(BOOL)paused;
-(BOOL)isAnimationAllowed;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

