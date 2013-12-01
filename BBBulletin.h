/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIQuietModePlayability.h"
#import <BulletinBoard/BBBulletin.h>


@interface BBBulletin (SBBulletinBanner)
-(void)_setReceivedTime:(id)time;
-(id)_receivedTime;
@end

@interface BBBulletin (SBUtilities) <SBUIQuietModePlayability>
-(BOOL)overridesQuietMode;
-(BOOL)isCritical;
-(id)sectionIconImageWithFormat:(int)format;
@end
