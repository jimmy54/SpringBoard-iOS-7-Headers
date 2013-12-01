/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface SBDateTimeCache : NSObject {
	double _yesterday;
	double _today;
	double _tomorrow;
	double _2daysFromNow;
	double _6daysAgo;
	double _prevWeek;
	double _nextWeek;
	double _lastAttemptedResetTime;
	double _lastSuccessfulResetTime;
}
+(id)sharedInstance;
-(id)description;
-(void)_resetAndConfigure;
-(void)_resetAndConfigureIfNecessary;
-(BOOL)isWithinNextWeek:(double)week;
-(BOOL)isWithinPrevWeek:(double)week includeToday:(BOOL)today;
-(BOOL)isWithinPrevWeek:(double)week;
-(BOOL)isYesterday:(double)yesterday;
-(BOOL)isTomorrow:(double)tomorrow;
-(BOOL)_isToday:(double)today;
-(BOOL)isToday:(double)today;
-(double)nextWeek;
-(double)prevWeek;
-(double)yesterday;
-(double)tomorrow;
-(double)today;
-(void)dealloc;
-(id)init;
@end

