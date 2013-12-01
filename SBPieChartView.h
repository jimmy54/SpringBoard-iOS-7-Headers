/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SBPieChartView : UIView {
	NSArray* _slices;
	float _valueTotal;
	float _radius;
	CGPoint _center;
	float _defaultRotation;
}
-(void)_drawSlice:(id)slice atValue:(float)value;
-(void)_rotateContext;
-(void)_updateMetrics;
-(void)drawRect:(CGRect)rect;
-(void)setSlices:(id)slices;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

