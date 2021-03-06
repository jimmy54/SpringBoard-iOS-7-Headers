/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SBViewSnapshotProvider : NSObject {
	UIView* _view;
	id _completionBlock;
}
@property(copy, nonatomic) id completionBlock;
-(void)snapshotAsynchronously:(BOOL)asynchronously withImageBlock:(id)imageBlock;
-(void)snapshotWithImageBlock:(id)imageBlock;
-(id)snapshot;
-(void)dealloc;
-(id)initWithView:(id)view;
@end

