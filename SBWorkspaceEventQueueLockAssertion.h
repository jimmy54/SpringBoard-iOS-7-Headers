/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString, SBWorkspaceEventQueue;

__attribute__((visibility("hidden")))
@interface SBWorkspaceEventQueueLockAssertion : NSObject {
	SBWorkspaceEventQueue* _eventQueue;
	NSString* _reason;
}
-(id)reason;
-(id)description;
-(void)dealloc;
-(id)initWithWorkspaceEventQueue:(id)workspaceEventQueue reason:(id)reason;
@end
