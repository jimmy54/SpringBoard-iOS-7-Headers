/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBZoomView : UIView {
}
+(id)_chromeStatusBarImageForInterfaceOrientation:(int)interfaceOrientation;
+(CGSize)_rotateAndNormalizeSize:(CGSize)size withTransform:(CGAffineTransform)transform;
+(int)_degreesForRotationFromOriginalImageOrientation:(int)originalImageOrientation toInterfaceOrientation:(int)interfaceOrientation;
+(int)_degreesForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
-(id)_initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
@end
