/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBCollectionViewCell.h"

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SBStarkBannerSubActionCell : SBCollectionViewCell {
	UILabel* _label;
	BOOL _roundedCorners;
}
@property(assign, nonatomic) BOOL roundedCorners;
@property(copy, nonatomic) NSString* labelText;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)_didSetHighlighted:(BOOL)highlighted;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
