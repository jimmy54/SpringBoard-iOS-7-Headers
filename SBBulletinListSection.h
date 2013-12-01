/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSMutableArray, NSSet, NSArray, BBSectionInfo, NSDate, UIImage;

__attribute__((visibility("hidden")))
@interface SBBulletinListSection : NSObject {
	NSString* _sectionID;
	int _sectionType;
	int _sectionCategory;
	id _widget;
	NSMutableArray* _bulletins;
	NSMutableSet* _bulletinIDs;
	NSArray* _sortDescriptors;
	NSString* _displayName;
	UIImage* _iconImage;
	BOOL _showsInLockScreen;
	BOOL _showsMessagePreview;
	unsigned _messageNumberOfLines;
	BOOL _displaysCriticalBulletins;
	NSDate* _lastSortDate;
	NSMutableSet* _subsections;
	UIImage* _largeIconImage;
	BBSectionInfo* _sectionInfo;
}
@property(retain, nonatomic) BBSectionInfo* sectionInfo;
@property(readonly, assign, nonatomic) NSSet* subsectionIDs;
@property(assign, nonatomic) unsigned messageNumberOfLines;
@property(assign, nonatomic) BOOL showsMessagePreview;
@property(assign, nonatomic) BOOL showsInLockScreen;
@property(retain, nonatomic) UIImage* largeIconImage;
@property(retain, nonatomic) UIImage* iconImage;
@property(copy, nonatomic) NSString* displayName;
@property(retain, nonatomic) NSArray* sortDescriptors;
@property(retain, nonatomic) id widget;
@property(readonly, assign, nonatomic) NSArray* bulletins;
@property(assign, nonatomic) int sectionCategory;
@property(copy, nonatomic) NSString* sectionID;
-(void)setShowsMessagePreview:(BOOL)preview forSubsectionID:(id)subsectionID;
-(BOOL)showsMessagePreviewForBulletinsInSubsectionID:(id)subsectionID;
-(BOOL)showsMessagePreviewForBulletinID:(id)bulletinID;
-(void)setShowsInLockScreen:(BOOL)lockScreen forSubsectionID:(id)subsectionID;
-(BOOL)showsBulletinsInSubsectionIDInLockScreen:(id)lockScreen;
-(BOOL)showsBulletinIDInLockScreen:(id)lockScreen;
-(id)_subsectionWithIDCreatingIfNecessary:(id)idcreatingIfNecessary;
-(BOOL)hasBulletinWithID:(id)anId;
-(id)bulletinWithBulletinID:(id)bulletinID;
-(id)bulletinAtIndex:(unsigned)index;
-(unsigned)replaceBulletin:(id)bulletin withBulletin:(id)bulletin2;
-(unsigned)removeBulletin:(id)bulletin;
-(unsigned)_removeBulletin:(id)bulletin;
-(unsigned)addBulletin:(id)bulletin;
-(unsigned)indexOfBulletinWithLocalNotification:(id)localNotification;
-(unsigned)indexOfBulletinID:(id)bulletinID;
-(unsigned)_indexForNewBulletin:(id)newBulletin;
-(int)compareSection:(id)section forOrder:(int)order;
-(int)compare:(id)compare;
-(void)_updateWithSectionInfo:(id)sectionInfo;
-(void)updateWithSectionInfo:(id)sectionInfo;
-(void)dealloc;
-(id)initWithSectionInfo:(id)sectionInfo;
-(BOOL)displaysCriticalBulletins;
-(id)lastSortDate;
-(BOOL)hasClearableBulletins;
-(unsigned)bulletinCount;
-(BOOL)isBulletinSection;
-(BOOL)isWidgetSection;
-(id)description;
@end

