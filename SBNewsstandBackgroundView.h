/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"

@class NSMutableArray, UIImageView;

__attribute__((visibility("hidden")))
@interface SBNewsstandBackgroundView : UIView {
	NSMutableArray* _shelfViews;
	UIImageView* _overlayGradientView;
	UIView* _bottomView;
}
+(float)shelfHeightForOrientation:(int)orientation;
+(float)baselineForShelfAtIndex:(unsigned)index withOrientation:(int)orientation;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

