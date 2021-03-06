/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconIndexNode.h"
#import "SBIconIndexMutableListObserver.h"
#import "SBIconListModelObserver.h"
#import <Foundation/NSObject.h>

@class NSMutableSet, NSHashTable, SBFolderIcon, NSString, SBIconIndexMutableList, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBFolder : NSObject <SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver> {
	NSString* _displayName;
	NSString* _defaultDisplayName;
	BOOL _open;
	SBFolderIcon* _icon;
	BOOL _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSMutableDictionary* _coalesceChangesRequests;
	NSHashTable* _nodeObservers;
	NSHashTable* _folderObservers;
	SBIconIndexMutableList* _lists;
}
@property(assign, nonatomic, getter=isCancelable) BOOL cancelable;
@property(assign, nonatomic) SBFolderIcon* icon;
@property(assign, nonatomic) BOOL isOpen;
@property(retain, nonatomic) NSString* displayName;
+(unsigned)maxListCount;
-(void)iconList:(id)list didRemoveIcon:(id)icon;
-(void)iconList:(id)list didReplaceIcon:(id)icon withIcon:(id)icon3;
-(void)iconList:(id)list didAddIcon:(id)icon;
-(void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
-(id)nodeDescriptionWithPrefix:(id)prefix;
-(void)removeNodeObserver:(id)observer;
-(void)addNodeObserver:(id)observer;
-(id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
-(id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
-(id)containedNodeIdentifiers;
-(BOOL)containsNodeIdentifier:(id)identifier;
-(id)nodeIdentifier;
-(BOOL)matchesRepresentation:(id)representation;
-(id)representation;
-(id)folderType;
-(BOOL)resetWithRepresentation:(id)representation model:(id)model leafIdentifiersAdded:(id)added;
-(BOOL)_addListsForRepresentation:(id)representation model:(id)model leafIdentifiersAdded:(id)added;
-(void)_setDisplayNameFromRepresentation:(id)representation;
-(void)stopCoalescingContentChangesForRequestID:(id)requestID forceReload:(BOOL)reload;
-(void)stopCoalescingContentChangesForRequestID:(id)requestID;
-(void)startCoalescingContentChangesWithRequestID:(id)requestID;
-(BOOL)_isCoalescingContentChanges;
-(id)folderContainingIndexPath:(id)path relativeIndexPath:(id*)path2;
-(id)iconAtIndexPath:(id)indexPath;
-(id)indexPathForIconWithIdentifier:(id)identifier;
-(id)indexPathForIcon:(id)icon includingPlaceholders:(BOOL)placeholders;
-(id)indexPathForIcon:(id)icon;
-(id)indexPathForNodeIdentifier:(id)nodeIdentifier;
-(id)listContainingLeafIconWithIdentifier:(id)identifier;
-(id)listContainingIcon:(id)icon;
-(id)visibleIcons;
-(id)folderIcons;
-(id)leafIcons;
-(id)allIcons;
-(id)iconsOfClass:(Class)aClass;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(BOOL)firstFreeSlotAvoidingFirstList;
-(id)performCascadingIconInsertion:(id)insertion listIndex:(unsigned)index iconIndex:(unsigned)index3;
-(id)performCascadingIconInsertion:(id)insertion indexPath:(id)path;
-(BOOL)canAddIcon;
-(id)addIcon:(id)icon;
-(void)removeIconAtIndexPath:(id)indexPath;
-(id)insertIcon:(id)icon atIndexPath:(id*)indexPath;
-(id)placeIcon:(id)icon atIndexPath:(id*)indexPath;
-(void)purgeLists;
-(unsigned)indexOfList:(id)list;
-(id)listAtIndex:(unsigned)index;
-(id)_createNewListWithIcon:(id)icon;
-(void)markIconStateClean;
-(BOOL)isIconStateDirty;
-(void)removeEmptyList:(id)list;
-(id)addEmptyList;
-(void)_removeLists:(id)lists;
-(void)_addList:(id)list;
-(void)compactIconsAndLists;
-(BOOL)compactLists;
-(id)_listsForCompaction;
-(BOOL)canEditDisplayName;
-(BOOL)canRemoveIcons;
-(BOOL)shouldRemoveWhenEmpty;
-(BOOL)isNewsstandFolder;
-(BOOL)isFull;
-(BOOL)isEmpty;
-(unsigned)listCount;
-(id)lists;
-(void)purgeIconImages;
-(void)removeFolderObserver:(id)observer;
-(void)addFolderObserver:(id)observer;
-(void)dealloc;
-(id)init;
-(Class)controllerClass;
-(Class)listViewClass;
-(Class)listModelClass;
@end

