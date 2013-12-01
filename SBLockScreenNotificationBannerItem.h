/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDefaultBannerViewSource.h"
#import "SBUIQuietModePlayability.h"
#import <SpringBoardUI/SBUIBannerItem.h>

@class SBAwayListItem;
@protocol SBLockScreenNotificationBannerItemDelegate, SBUnlockActionHandler;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationBannerItem : SBUIBannerItem <SBDefaultBannerViewSource, SBUIQuietModePlayability> {
	SBAwayListItem* _listItem;
	id<SBUnlockActionHandler> _unlockActionHandler;
	id<SBLockScreenNotificationBannerItemDelegate> _delegate;
}
@property(assign, nonatomic) id<SBLockScreenNotificationBannerItemDelegate> delegate;
@property(retain, nonatomic) id<SBUnlockActionHandler> unlockActionHandler;
@property(readonly, assign, nonatomic) SBAwayListItem* listItem;
-(id)unlockActionContext;
-(BOOL)overridesQuietMode;
-(BOOL)isCritical;
-(BOOL)inertWhenLocked;
-(BOOL)isVIP;
-(id)attachmentImage;
-(id)attachmentText;
-(id)iconImage;
-(id)sourceDate;
-(id)message;
-(id)title;
-(id)sortDate;
-(BOOL)canShowWhileLocked;
-(id)action;
-(void)dealloc;
-(id)initWithListItem:(id)listItem;
@end
