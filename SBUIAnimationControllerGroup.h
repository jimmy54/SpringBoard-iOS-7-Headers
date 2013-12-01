/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerDelegate.h"
#import "SBUIAnimationController.h"

@class NSMutableArray, NSArray;
@protocol SBUIAnimationControllerGroupDelegate;

__attribute__((visibility("hidden")))
@interface SBUIAnimationControllerGroup : SBUIAnimationController <SBUIAnimationControllerDelegate> {
	NSMutableArray* _animations;
	BOOL _finished;
}
@property(readonly, assign, nonatomic) NSArray* animations;
@property(assign, nonatomic) id<SBUIAnimationControllerGroupDelegate> delegate;
-(id)description;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)_forEachAnimation:(id)eachAnimation;
-(void)_startAnimation;
-(BOOL)_willAnimate;
-(BOOL)waitingToStart;
-(void)endAnimation;
-(void)beginAnimation;
-(void)addAnimation:(id)animation;
-(void)dealloc;
-(id)initWithAnimations:(id)animations;
-(id)init;
@end

