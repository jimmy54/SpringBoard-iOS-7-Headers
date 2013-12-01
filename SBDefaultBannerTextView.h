/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface SBDefaultBannerTextView : UIView {
	NSAttributedString* _primaryTextAttributedString;
	NSAttributedString* _primaryTextAttributedStringComponent;
	UIImage* _primaryTextAccessoryImageComponent;
	NSAttributedString* _secondaryTextAttributedString;
	BOOL _secondaryTextItalicized;
	NSAttributedString* _relevanceDateAttributedString;
}
@property(copy, nonatomic) NSString* relevanceDateText;
@property(copy, nonatomic) NSString* secondaryText;
@property(retain, nonatomic) UIImage* primaryTextAccessoryImage;
@property(copy, nonatomic) NSString* primaryText;
-(void)drawRect:(CGRect)rect;
-(id)_primaryTextAttributedString;
-(void)_invalidatePrimaryTextAttributedString;
-(BOOL)textWillWrapForWidth:(float)text;
-(void)setSecondaryText:(id)text italicized:(BOOL)italicized;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
