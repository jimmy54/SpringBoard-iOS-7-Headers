/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"


__attribute__((visibility("hidden")))
@interface SBDeviceLockPasscodeEntryAlertDisplay : SBSlidingAlertDisplay {
}
-(float)durationForOthersActivation;
-(float)delayForOthersActivation;
-(void)dismiss;
-(void)alertDisplayWillBecomeVisible;
-(void)deviceUnlockCanceled;
-(void)deviceUnlockSucceeded;
-(void)useEmergencyCallButton;
@end
