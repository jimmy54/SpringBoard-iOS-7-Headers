/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBCollectionViewCell.h"

@class SBIcon, UIView, SBStarkIconImageView;
@protocol SBIconAccessoryView, SBStarkIconCellDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkIconCell : SBCollectionViewCell {
	SBIcon* _icon;
	SBStarkIconImageView* _iconImageView;
	UIView<SBIconAccessoryView>* _accessoryView;
	BOOL _disableFrameChangeOnHighlight;
	float _initialHeight;
	BOOL _temporarilyEnableHighlightDimming;
}
@property(assign, nonatomic) BOOL temporarilyEnableHighlightDimming;
@property(retain, nonatomic) SBIcon* icon;
@property(assign, nonatomic) id<SBStarkIconCellDelegate> delegate;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
-(void)iconImageDidUpdate:(id)iconImage;
-(CGRect)_accessoryFrameInBounds:(CGRect)bounds;
-(id)description;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)attributes;
-(void)prepareForReuse;
-(void)_didSetHighlighted:(BOOL)highlighted;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

