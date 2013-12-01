/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UILabel.h>
#import "SBBulletinDateLabel.h"

@class NSTimer;
@protocol SBDateLabelDelegate;

__attribute__((visibility("hidden")))
@interface SBBulletinTimerDateLabel : UILabel <SBBulletinDateLabel> {
	double _fireTime;
	NSTimer* _tickTimer;
	BOOL _allDay;
	id<SBDateLabelDelegate> _delegate;
	int _labelType;
}
@property(assign, nonatomic) BOOL isTimestamp;
@property(assign, nonatomic) int labelType;
@property(assign, nonatomic) id<SBDateLabelDelegate> delegate;
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;
+(id)unitFont;
+(id)digitFont;
-(void)stopCoalescingUpdates;
-(void)startCoalescingUpdates;
-(void)prepareForReuse;
-(void)setEndDate:(id)date withTimeZone:(id)timeZone;
-(void)_tickTimerFired:(id)fired;
-(void)setStartDate:(id)date withTimeZone:(id)timeZone;
-(void)_updateText;
-(id)_formatDuration:(double)duration;
-(void)dealloc;
-(void)_invalidateTimer;
@end

