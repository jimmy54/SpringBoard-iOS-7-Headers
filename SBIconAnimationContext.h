/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface SBIconAnimationContext : NSObject {
	float _fraction;
	id _completion;
	double _delay;
}
@property(copy, nonatomic) id completion;
@property(assign, nonatomic) float fraction;
@property(assign, nonatomic) double delay;
-(void)invalidate;
-(void)dealloc;
-(id)initWithNotificationIdentifier:(id)notificationIdentifier;
@end

