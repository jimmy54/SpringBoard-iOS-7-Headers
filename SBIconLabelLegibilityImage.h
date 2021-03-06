/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBCountedMapValue.h"
#import <UIKit/UIImage.h>

@class SBIconLabelImageParameters;

__attribute__((visibility("hidden")))
@interface SBIconLabelLegibilityImage : UIImage <SBCountedMapValue> {
	SBIconLabelImageParameters* _parameters;
}
@property(readonly, assign) SBIconLabelImageParameters* parameters;
+(void)checkinLegibilityImage:(id)image;
+(id)checkoutLegibilityImageWithLabelImage:(id)labelImage parameters:(id)parameters;
+(CGRect)_legibilityImageRectForLabelImage:(id)labelImage style:(int)style;
+(float)_strengthForLegibilityStyle:(int)legibilityStyle;
+(id)_legibilityImageForIconLabelImage:(id)iconLabelImage parameters:(id)parameters;
+(id)_legibilityImagePool;
+(id)_legibilityImageCountedMap;
+(CGSize)_maxLegibilityImageSizeForLabelSize:(CGSize)labelSize;
-(id)countedMapKey;
-(void)dealloc;
-(id)_initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation parameters:(id)parameters;
@end

