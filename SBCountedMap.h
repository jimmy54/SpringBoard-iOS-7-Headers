/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSCountedSet;

__attribute__((visibility("hidden")))
@interface SBCountedMap : NSObject {
	NSCountedSet* _countedKeys;
	NSMutableDictionary* _map;
}
-(void)checkinValues:(id)values;
-(void)checkinValue:(id)value;
-(id)checkoutValueForKey:(id)key creationBlock:(id)block;
-(void)dealloc;
-(id)init;
@end
