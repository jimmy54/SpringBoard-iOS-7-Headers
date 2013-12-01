/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSSet, SBRootFolder, NSMutableDictionary, NSDictionary, SBNewsstandIcon;
@protocol SBIconModelStore, SBIconModelApplicationDataSource, SBIconModelDelegate;

__attribute__((visibility("hidden")))
@interface SBIconModel : NSObject {
	NSDictionary* _desiredIconState;
	NSSet* _desiredIconStateFlattened;
	NSMutableDictionary* _leafIconsByIdentifier;
	NSSet* _hiddenIconTags;
	NSSet* _visibleIconTags;
	BOOL _tagsHaveBeenSet;
	SBRootFolder* _rootFolder;
	SBNewsstandIcon* _newsstandIcon;
	id<SBIconModelStore> _store;
	id<SBIconModelApplicationDataSource> _applicationDataSource;
	id<SBIconModelDelegate> _delegate;
	BOOL _allowsSaving;
}
@property(retain, nonatomic) NSDictionary* leafIconsByIdentifier;
@property(readonly, assign, nonatomic) id<SBIconModelApplicationDataSource> applicationDataSource;
@property(readonly, assign, nonatomic) id<SBIconModelStore> store;
@property(assign, nonatomic) id<SBIconModelDelegate> delegate;
@property(assign, nonatomic) BOOL allowsSaving;
+(id)displayIdentifiersInIconState:(id)iconState;
+(id)modernIconStateForState:(id)state;
+(id)_modernIconListsForLists:(id)lists allowFolders:(BOOL)folders;
+(id)_modernIconListForList:(id)list allowFolders:(BOOL)folders;
+(id)_modernIconCellForCell:(id)cell allowFolders:(BOOL)folders;
+(id)_migrateLeafIdentifierIfNecessary:(id)necessary;
-(BOOL)importState:(id)state;
-(id)_iTunesDictionaryForDownloadingIcon:(id)downloadingIcon;
-(id)_iTunesDictionaryForLeafIcon:(id)leafIcon;
-(id)_iTunesDictionaryForLeafIdentifier:(id)leafIdentifier;
-(id)_iTunesIconCellForCell:(id)cell preApex:(BOOL)apex forPending:(BOOL)pending;
-(id)_iTunesIconListForList:(id)list preApex:(BOOL)apex forPending:(BOOL)pending;
-(id)_iTunesIconListsForLists:(id)lists preApex:(BOOL)apex forPending:(BOOL)pending;
-(id)exportFlattenedState:(BOOL)state includeMissingIcons:(BOOL)icons;
-(id)exportPendingState:(BOOL)state includeMissingIcons:(BOOL)icons;
-(id)exportState:(BOOL)state;
-(id)forecastedLayoutForIconState:(id)iconState includeMissingIcons:(BOOL)icons;
-(void)layout;
-(id)_flattenIconState:(id)state;
-(id)_newsstandIconIdentifiersFromIconState:(id)iconState;
-(id)newsstandFolderFromIconState:(id)iconState;
-(void)_flattenIconListState:(id)state intoArray:(id)array;
-(void)_replaceAppIconsWithDownloadingIcons:(id)downloadingIcons;
-(void)_replaceAppIconsWithDownloadingIcons;
-(void)saveIconState;
-(void)_saveDesiredIconState;
-(void)deleteIconState;
-(void)_addNewIconToDesignatedLocation:(id)designatedLocation;
-(id)indexPathForNewIcon:(id)newIcon isDesignatedLocation:(BOOL*)location replaceExistingIconAtIndexPath:(id*)indexPath;
-(id)_indexPathForFirstFreeNewsstandSlot;
-(void)clearDesiredIconStateIfPossible;
-(void)clearDesiredIconState;
-(BOOL)hasDesiredIconState;
-(id)_indexPathForIdentifier:(id)identifier inListsRepresentation:(id)listsRepresentation;
-(id)_indexPathForIdentifier:(id)identifier inListRepresentation:(id)listRepresentation;
-(id)indexPathForIconInPlatformState:(id)platformState;
-(void)removeIconForIdentifier:(id)identifier;
-(void)removeIcon:(id)icon;
-(void)addIcon:(id)icon;
-(void)_createIconLists;
-(id)_iconState;
-(id)iconState;
-(id)applicationIconForDisplayIdentifier:(id)displayIdentifier;
-(id)leafIconForIdentifier:(id)identifier;
-(id)expectedIconForDisplayIdentifier:(id)displayIdentifier;
-(id)_applicationIcons;
-(id)leafIcons;
-(id)visibleIconIdentifiers;
-(void)loadAllIcons;
-(void)_addNewsstandIcon;
-(void)addIconForApplication:(id)application;
-(id)addBookmarkIconForWebClip:(id)webClip;
-(id)leafIconForWebClipIdentifier:(id)webClipIdentifier;
-(id)leafIconForWebClip:(id)webClip;
-(id)downloadingIconForIdentifier:(id)identifier;
-(void)removeApplicationIconForDownloadingIcon:(id)downloadingIcon;
-(id)addDownloadingIconForBundleID:(id)bundleID withIdentifier:(id)identifier;
-(id)addDownloadingIconForDownload:(id)download;
-(BOOL)_canAddDownloadingIconForBundleID:(id)bundleID;
-(BOOL)isIconVisible:(id)visible;
-(void)setVisibilityOfIconsWithVisibleTags:(id)visibleTags hiddenTags:(id)tags;
-(void)_postIconVisibilityChangedNotificationShowing:(id)showing hiding:(id)hiding;
-(void)localeChanged;
-(id)createFolderIconForFolderType:(id)folderType;
-(id)newsstandFolder;
-(id)newsstandIcon;
-(id)rootFolder;
-(void)dealloc;
-(id)initWithStore:(id)store applicationDataSource:(id)source;
@end

