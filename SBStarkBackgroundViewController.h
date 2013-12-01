/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIViewController.h>

@class SBStarkBackgroundProvidersViewController;
@protocol SBStarkBackgroundProvidersViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkBackgroundViewController : UIViewController {
	SBStarkBackgroundProvidersViewController* _providerViewController;
	UIEdgeInsets _providerInsets;
	BOOL _providerHidden;
	CGPoint _highestOccludedPoint;
}
@property(assign, nonatomic) CGPoint highestOccludedPoint;
@property(assign, nonatomic) UIEdgeInsets providerInsets;
@property(assign, nonatomic) id<SBStarkBackgroundProvidersViewControllerDelegate> delegate;
-(CGRect)_providerViewPortFrame;
-(CGRect)_providerViewFrame;
-(CGRect)_visibleFrame;
-(CGRect)_viewFrame;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)setProviderHidden:(BOOL)hidden withAnimationFactory:(id)animationFactory completionState:(id)state;
-(void)switchToState:(id)state withAnimationName:(id)animationName;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

