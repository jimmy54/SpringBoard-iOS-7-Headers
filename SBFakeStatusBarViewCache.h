/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBFakeStatusBarViewCache : NSObject {
	NSMutableDictionary* _cachedStatusBarQueues;
}
-(void)dealloc;
-(id)barForKey:(id)key withGenerationBlockIfNecessary:(id)generationBlockIfNecessary;
-(void)recycleBar:(id)bar forKey:(id)key;
-(id)init;
@end
