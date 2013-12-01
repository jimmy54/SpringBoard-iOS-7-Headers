/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class _SBIconProgressStateTransition, _SBIconProgressPausedTransition, _SBIconProgressFractionTransition, UIImage, CADisplayLink;
@protocol SBIconProgressViewDelegate;

__attribute__((visibility("hidden")))
@interface SBIconProgressView : UIView {
	_SBIconProgressStateTransition* _activeStateTransition;
	_SBIconProgressPausedTransition* _activePausedTransition;
	_SBIconProgressFractionTransition* _activeFractionTransition;
	int _modelState;
	BOOL _modelPaused;
	float _modelFraction;
	CADisplayLink* _displayLink;
	double _lastUpdate;
	UIImage* _maskImage;
	BOOL _canAnimate;
	BOOL _displayingPaused;
	id<SBIconProgressViewDelegate> _delegate;
	UIImage* _overlayImage;
	float _backgroundAlpha;
	float _foregroundAlpha;
	float _circleRadiusFraction;
	float _pauseRadiusFraction;
	int _displayedState;
	float _displayedFraction;
}
@property(assign, nonatomic) float displayedFraction;
@property(assign, nonatomic) BOOL displayingPaused;
@property(assign, nonatomic) int displayedState;
@property(readonly, assign, nonatomic) CGRect circleBoundingRect;
@property(assign, nonatomic) float pauseRadiusFraction;
@property(assign, nonatomic) float circleRadiusFraction;
@property(assign, nonatomic) float foregroundAlpha;
@property(assign, nonatomic) float backgroundAlpha;
@property(assign, nonatomic) BOOL canAnimate;
@property(retain, nonatomic) UIImage* overlayImage;
@property(assign, nonatomic) id<SBIconProgressViewDelegate> delegate;
-(id)_maskImage;
-(void)_drawPauseUIWithCenter:(CGPoint)center;
-(void)_drawIncomingCircleWithCenter:(CGPoint)center;
-(void)_drawOutgoingCircleWithCenter:(CGPoint)center;
-(void)_drawPieWithCenter:(CGPoint)center;
-(void)drawRect:(CGRect)rect;
-(void)_clearDisplayLink;
-(void)_ensureDisplayLink;
-(void)_onDisplayLink:(id)link;
-(void)_clearTransitionIfComplete:(id*)complete;
-(void)_updateFractionTransitionAnimated:(BOOL)animated;
-(void)_updateStateTransitionAnimated:(BOOL)animated;
-(void)_updatePausedTransitionAnimated:(BOOL)animated;
-(void)_updateTransitionsAnimated:(BOOL)animated;
-(BOOL)_hasActiveTransitions;
-(void)setState:(int)state paused:(BOOL)paused fractionLoaded:(float)loaded animated:(BOOL)animated;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

