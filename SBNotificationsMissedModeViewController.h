/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBNotificationsModeViewController.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface SBNotificationsMissedModeViewController : SBNotificationsModeViewController {
	NSMutableSet* _lockScreenBulletinIDs;
}
+(void)_sortBulletinsChronologically:(id)chronologically;
+(id)_referenceDate;
+(id)_sortByDateForBulletin:(id)bulletin;
+(id)sharedSectionInfo;
-(void)_updateSectionForChangeInNumberOfLines:(id)lines;
-(void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)messagePrivacyIfNecessary;
-(void)_updateSectionForChangeInLockScreenVisibility:(id)lockScreenVisibility withProcessingBlock:(id)processingBlock;
-(void)commitMoveOfBulletin:(id)bulletin inSection:(id)section beforeBulletin:(id)bulletin3 inSection:(id)section4;
-(void)commitReplacementWithBulletin:(id)bulletin ofBulletin:(id)bulletin2 inSection:(id)section;
-(void)commitRemovalOfBulletin:(id)bulletin fromSection:(id)section;
-(void)willDisassociateBulletin:(id)bulletin fromSection:(id)section;
-(void)commitInsertionOfBulletin:(id)bulletin beforeBulletin:(id)bulletin2 inSection:(id)section forFeed:(unsigned)feed;
-(void)_sortBulletins:(id)bulletins forSection:(id)section;
-(void)_pruneBulletins;
-(id)_expiredBulletins;
-(void)_updateSectionOrderForOperationInSection:(id)section;
-(void)commitReloadOfSections:(id)sections;
-(void)commitReplacementWithSection:(id)section ofSection:(id)section2;
-(void)commitMoveOfSection:(id)section beforeSection:(id)section2;
-(void)commitRemovalOfSection:(id)section;
-(void)commitInsertionOfSection:(id)section beforeSection:(id)section2;
-(void)_sortSectionIDs;
-(void)didAssociateBulletin:(id)bulletin withSection:(id)section forFeed:(unsigned)feed;
-(void)willAssociateBulletin:(id)bulletin withSection:(id)section forFeed:(unsigned)feed;
-(void)populateBulletinInfo:(id)info inSection:(id)section;
-(void)populateIconIfNecessaryForBulletinInfo:(id)bulletinInfo;
-(id)infoForBulletin:(id)bulletin inSection:(id)section;
-(id)infoForBulletinSection:(id)bulletinSection;
-(UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)mode;
-(void)viewWillAppear:(BOOL)view;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

