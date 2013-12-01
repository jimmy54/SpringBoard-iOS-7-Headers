/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>
#import "SBControlCenterObserver.h"

@class _UIBackdropView, SBControlCenterContentView;

__attribute__((visibility("hidden")))
@interface SBControlCenterContentContainerView : UIView <SBControlCenterObserver> {
	_UIBackdropView* _backdropView;
	SBControlCenterContentView* _contentView;
	float _contentHeight;
}
@property(assign) float contentHeight;
@property(retain, nonatomic) SBControlCenterContentView* contentView;
@property(retain, nonatomic) _UIBackdropView* backdropView;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
