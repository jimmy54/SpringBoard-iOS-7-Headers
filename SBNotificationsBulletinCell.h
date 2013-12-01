/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBNotificationCell.h"

@class SBNotificationCenterSeparatorView;

__attribute__((visibility("hidden")))
@interface SBNotificationsBulletinCell : SBNotificationCell {
	SBNotificationCenterSeparatorView* _separator;
	BOOL _missed;
}
@property(assign, nonatomic, getter=isMissed) BOOL missed;
@property(assign, nonatomic) BOOL showsSeparator;
+(id)defaultColorForRelevanceDate;
+(CGSize)_preferredSizeForRelevanceDateLabel:(id)relevanceDateLabel;
+(float)iconPaddingLeft;
-(CGRect)_separatorFrame;
-(void)setSectionLocation:(int)location animated:(BOOL)animated;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setEventDateLabel:(id)label;
-(void)setRelevanceDateLabel:(id)label;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

