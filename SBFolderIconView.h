/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "_UISettingsKeyObserver.h"
#import "SBIconView.h"

@class SBFolderSettings;

__attribute__((visibility("hidden")))
@interface SBFolderIconView : SBIconView <_UISettingsKeyObserver> {
	SBFolderSettings* _folderSettings;
}
+(BOOL)canShowUpdatedMark;
-(id)_folderIconImageView;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)changes;
-(void)_updateAdaptiveColors;
-(void)_applyEditingStateAnimated:(BOOL)animated;
-(void)cleanupAfterFloatyFolderCrossfade;
-(void)setFloatyFolderCrossfadeFraction:(float)fraction;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)floatyFolderView allowFolderInteraction:(BOOL)interaction;
-(void)removeDropGlow;
-(void)showDropGlow:(BOOL)glow;
-(void)prepareDropGlow;
-(void)setBackgroundAndIconGridImageAlpha:(float)alpha;
-(void)setIconGridImageAlpha:(float)alpha;
-(double)grabDurationForEvent:(id)event;
-(BOOL)allowsTapWhileEditing;
-(id)description;
-(id)folder;
-(void)scrollToGapOrTopIfFullOfPage:(unsigned)page animated:(BOOL)animated;
-(void)scrollToTopOfPage:(unsigned)page animated:(BOOL)animated;
-(void)scrollToFirstGapAnimated:(BOOL)firstGapAnimated;
-(void)scrollToTopOfFirstPageAnimated:(BOOL)firstPageAnimated;
-(CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned)index;
-(CGRect)frameForMiniIconAtIndex:(unsigned)index;
-(unsigned)lastVisibleMiniIconIndex;
-(unsigned)centerVisibleMiniIconIndex;
-(unsigned)firstVisibleMiniIconIndex;
-(unsigned)visibleMiniIconListIndex;
-(unsigned)visibleMiniIconCount;
-(id)iconBackgroundView;
-(id)dropGlow;
-(void)setIcon:(id)icon;
-(id)folderIcon;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
