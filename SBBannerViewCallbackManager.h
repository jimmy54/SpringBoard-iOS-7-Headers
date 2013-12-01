/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIView;
@protocol SBUIBannerView, SBUIBannerSource;

__attribute__((visibility("hidden")))
@interface SBBannerViewCallbackManager : NSObject {
	UIView<SBUIBannerView>* _view;
	id<SBUIBannerSource> _source;
	BOOL _sentWillAppear;
	BOOL _sentDidAppear;
	BOOL _sentWillDismiss;
	BOOL _sentDidDismiss;
	int _dismissReason;
}
-(void)matchPreviousCallbacks:(id)callbacks;
-(BOOL)hasSentAnyCallbacks;
-(void)noteDidDismissWithReason:(int)note;
-(void)noteWillDismissWithReason:(int)note;
-(void)noteDidAppear;
-(void)noteWillAppear;
-(void)dealloc;
-(id)init;
-(id)initWithBannerView:(id)bannerView;
@end

