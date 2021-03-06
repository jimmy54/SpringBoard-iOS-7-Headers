/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkBannerItem.h"

@class BBBulletin, SBUISound;

__attribute__((visibility("hidden")))
@interface SBStarkBulletinBannerItem : SBStarkBannerItem {
	BBBulletin* _bulletin;
	SBUISound* _sound;
}
-(id)subActionWithIndex:(unsigned)index;
-(id)subActionLabels;
-(id)sound;
-(id)action;
-(BOOL)matchesContext:(id)context;
-(int)actionType;
-(id)categoryImage;
-(id)subTitle;
-(id)title;
-(void)updateBulletinToInstance:(id)instance;
-(void)dealloc;
-(id)initWithBulletin:(id)bulletin;
@end

