/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherService : NSObject {
	NSString* _bundleIdentifier;
	NSString* _viewServiceClassName;
}
@property(copy, nonatomic) NSString* viewServiceClassName;
@property(copy, nonatomic) NSString* bundleIdentifier;
+(id)switcherServiceWithName:(id)name viewServiceClassName:(id)name2;
-(id)identifier;
-(void)dealloc;
@end

