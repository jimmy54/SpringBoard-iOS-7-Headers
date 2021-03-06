/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class SBIcon, SBIconView;
@protocol SBIconViewDelegate;

__attribute__((visibility("hidden")))
@interface SBIconLabelImageParametersBuilder : NSObject {
	SBIcon* _icon;
	SBIconView* _iconView;
	id<SBIconViewDelegate> _iconViewDelegate;
	Class _iconViewClass;
	int _iconLocation;
	int _style;
}
@property(assign, nonatomic) int style;
@property(assign, nonatomic) int iconLocation;
@property(retain, nonatomic) Class iconViewClass;
@property(retain, nonatomic) id<SBIconViewDelegate> iconViewDelegate;
@property(retain, nonatomic) SBIconView* iconView;
@property(retain, nonatomic) SBIcon* icon;
-(BOOL)_hasValidInputs;
-(id)_font;
-(CGSize)_maxSize;
-(id)buildParameters;
-(void)dealloc;
@end

