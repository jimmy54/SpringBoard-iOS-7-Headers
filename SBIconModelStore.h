/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBIconModelStore <NSObject>
-(id)loadDesiredIconState:(id*)state;
-(id)loadCurrentIconState:(id*)state;
-(BOOL)deleteDesiredIconState:(id*)state;
-(BOOL)deleteCurrentIconState:(id*)state;
-(BOOL)saveDesiredIconState:(id)state error:(id*)error;
-(BOOL)saveCurrentIconState:(id)state error:(id*)error;
@end

