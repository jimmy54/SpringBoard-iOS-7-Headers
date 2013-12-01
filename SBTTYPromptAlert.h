/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBTTYPromptAlert : SBAlert {
	NSString* _number;
	int _uid;
}
+(BOOL)dialNumberPromptingIfNecessary:(id)necessary addressBookUID:(int)uid urlAddition:(id)addition;
+(void)displayForNumber:(id)number addressBookUID:(int)uid;
-(void)activate;
-(BOOL)hasTranslucentBackground;
-(int)addressBookUID;
-(id)number;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)dealloc;
-(id)initWithNumber:(id)number addressBookUID:(int)uid;
@end
