/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIcon.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBPlaceholderIcon : SBIcon {
	id _nodeIdentifier;
	SBIcon* _icon;
}
+(id)emptyPlaceholder;
+(void)setGrabbedIcon:(id)icon;
+(id)grabbedIconPlaceholder;
+(id)placeholderForIcon:(id)icon;
+(id)placeholderNodeIdentifierForIcon:(id)icon;
-(BOOL)isPlaceholderForIcon:(id)icon;
-(BOOL)isEmptyPlaceholder;
-(BOOL)isGrabbedIconPlaceholder;
-(BOOL)isPlaceholder;
-(BOOL)shouldCacheImageForFormat:(int)format;
-(id)generateIconImage:(int)image;
-(id)automationID;
-(BOOL)matchesRepresentation:(id)representation;
-(id)representation;
-(id)nodeIdentifier;
-(void)dealloc;
-(id)_initWithNodeIdentifier:(id)nodeIdentifier icon:(id)icon;
@end
