/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIScreen, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBStarkScreenFocusController : NSObject {
	UIScreen* _screen;
	NSMutableArray* _assertions;
}
-(id)description;
-(id)focusWindow;
-(void)dropReason:(id)reason;
-(void)suspendWithPriority:(float)priority reason:(id)reason;
-(void)takeWithPriority:(float)priority reason:(id)reason forWindow:(id)window;
-(void)invalidate;
-(void)_applyAssertion:(id)assertion;
-(void)_updateEventFocus;
-(void)dealloc;
-(id)initWithScreen:(id)screen;
@end
