/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBScreenConnectionHandler <NSObject>
-(void)screenManager:(id)manager didTriggerConnectionHandlerEvent:(int)event forScreen:(id)screen;
-(BOOL)screenManager:(id)manager shouldBindConnectionHandlerToScreen:(id)screen;
@end

