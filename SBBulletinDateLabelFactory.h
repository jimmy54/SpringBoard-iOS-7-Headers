/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBBulletinDateLabelFactory : NSObject {
	NSMutableDictionary* _recycledLabelsByStyle;
}
+(id)sharedInstance;
-(void)_purgeRecycledLabels;
-(int)styleForLabel:(id)label;
-(void)recycleLabel:(id)label;
-(id)combinedDateLabelWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(int)style;
-(id)endLabelWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(int)style;
-(id)startLabelWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(int)style;
-(id)_labelWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone allDay:(BOOL)day forStyle:(int)style forType:(int)type;
-(void)dealloc;
-(id)init;
@end

