/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SBTransientActiveInterfaceOrientationRequester : NSObject {
	int _orientation;
	NSString* _reason;
}
@property(readonly, assign, nonatomic) int orientation;
@property(readonly, assign, nonatomic) NSString* reason;
-(void)dealloc;
-(id)initWithOrientation:(int)orientation andReason:(id)reason;
@end

