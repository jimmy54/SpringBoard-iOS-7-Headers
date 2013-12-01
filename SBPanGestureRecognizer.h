/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFluidSlideGestureRecognizer.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer {
	float _arcCenter;
	float _arcSize;
	BOOL _recognizesHorizontalPanning;
	BOOL _recognizesVerticalPanning;
}
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)beganOrMovedTouches;
-(float)computeIncrementalGestureMotion:(SBGestureContextRef)motion;
-(id)initForVerticalPanning;
-(id)initForHorizontalPanning;
-(id)init;
@end

