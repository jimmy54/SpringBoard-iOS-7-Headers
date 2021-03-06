/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFolder.h"
#import "SBIconIndexNodeObserver.h"

@class SBDockIconListModel;

__attribute__((visibility("hidden")))
@interface SBRootFolder : SBFolder <SBIconIndexNodeObserver> {
	SBDockIconListModel* _dock;
}
-(void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
-(void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
-(void)_notifyIndexChange:(int)change identifiers:(id)identifiers withValidationBlock:(id)validationBlock;
-(id)nodeDescriptionWithPrefix:(id)prefix;
-(id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
-(id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
-(id)containedNodeIdentifiers;
-(BOOL)containsNodeIdentifier:(id)identifier;
-(id)nodeIdentifier;
-(void)placeIconsOnFirstPage:(id)page;
-(id)representation;
-(BOOL)resetWithRepresentation:(id)representation model:(id)model leafIdentifiersAdded:(id)added;
-(id)_listsForCompaction;
-(BOOL)canEditDisplayName;
-(BOOL)canRemoveIcons;
-(id)folderType;
-(id)iconsOfClass:(Class)aClass;
-(void)markIconStateClean;
-(BOOL)isIconStateDirty;
-(void)removeEmptyList:(id)list;
-(id)listContainingLeafIconWithIdentifier:(id)identifier;
-(id)listContainingIcon:(id)icon;
-(unsigned)indexOfList:(id)list;
-(id)listAtIndex:(unsigned)index;
-(id)dockModel;
-(void)dealloc;
-(id)init;
-(Class)controllerClass;
-(Class)listViewClass;
-(Class)listModelClass;
@end

