/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIButton.h>

@class UIView, SBIconColorSettings, UIImageView, SBIconBlurryBackgroundView;

__attribute__((visibility("hidden")))
@interface SBCloseBoxView : UIButton {
	SBIconBlurryBackgroundView* _backgroundView;
	UIView* _whiteTintView;
	UIImageView* _xColorBurnView;
	UIImageView* _xPlusDView;
	SBIconColorSettings* _colorSettings;
	CGPoint _wallpaperRelativeCenter;
}
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)changes;
-(void)setLegibilityStyle:(int)style;
-(void)setWallpaperRelativeCenter:(CGPoint)center;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

