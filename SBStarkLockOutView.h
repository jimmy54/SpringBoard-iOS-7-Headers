/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, NSArray;

__attribute__((visibility("hidden")))
@interface SBStarkLockOutView : UIView {
	NSMutableArray* _titleLabels;
	float _titleAscender;
	float _titleDescender;
	UIImageView* _imageView;
	CGSize _imageSize;
	NSMutableArray* _messageLabels;
	float _messageAscender;
	float _messageDescender;
	NSArray* _baselineSeparations;
	float _verticalOffset;
}
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame titleLines:(id)lines image:(id)image messageLines:(id)lines4 baselineSeparations:(id)separations verticalOffset:(float)offset;
@end

