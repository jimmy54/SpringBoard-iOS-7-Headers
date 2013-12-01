/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIStatusBarStyleRequest;

__attribute__((visibility("hidden")))
@interface SBAppStatusBarTransitionInfo : NSObject {
	UIStatusBarStyleRequest* _startStyleRequest;
	int _startOrientation;
	UIStatusBarStyleRequest* _endStyleRequest;
	int _endOrientation;
	int _transition;
	BOOL _zoomOther;
}
@property(assign, nonatomic) BOOL zoomOther;
@property(assign, nonatomic) int transition;
@property(assign, nonatomic) int endOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest* endStyleRequest;
@property(assign, nonatomic) int startOrientation;
@property(copy, nonatomic) UIStatusBarStyleRequest* startStyleRequest;
-(id)description;
-(void)dealloc;
@end
