/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"

@class SBStarkIconListModel, SBStarkFakeIconOperationController;
@protocol SBStarkAutoHideControlBarDelegate;

@protocol SBStarkLauncher <NSObject>
@property(assign, nonatomic) id<SBStarkAutoHideControlBarDelegate> autoHideDelegate;
@property(retain, nonatomic) SBStarkFakeIconOperationController* fakeIconOperationController;
@property(readonly, assign, nonatomic) BOOL obscuresControlBar;
@property(readonly, assign, nonatomic) BOOL hidesAutomatically;
@property(readonly, assign, nonatomic) SBStarkIconListModel* iconList;
@property(assign, nonatomic) float height;
+(float)desiredHeightForBounds:(CGRect)bounds;
@end

