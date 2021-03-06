/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SBSearchTableHeaderView : UIView {
	UILabel* _titleLabel;
	UIView* _separatorView;
	NSString* _reuseIdentifier;
}
@property(readonly, assign, nonatomic) NSString* reuseIdentifier;
@property(retain, nonatomic) NSString* title;
+(float)heightForContentSizeCategory:(id)contentSizeCategory;
+(float)titleBaselineFromBottomForContentSizeCategory:(id)contentSizeCategory;
+(id)lineColor;
-(BOOL)isUserInteractionEnabled;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
@end

