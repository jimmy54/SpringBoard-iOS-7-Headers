/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BBRemoteDataProvider.h"
#import <Foundation/NSObject.h>

@class BBDataProviderConnection, BBDataProviderProxy;

__attribute__((visibility("hidden")))
@interface SBTestDataProvider : NSObject <BBRemoteDataProvider> {
	BBDataProviderConnection* _connection;
	BBDataProviderProxy* _proxy;
}
+(id)sharedInstance;
-(void)noteSectionInfoDidChange:(id)noteSectionInfo;
-(float)attachmentAspectRatioForRecordID:(id)recordID;
-(id)attachmentPNGDataForRecordID:(id)recordID sizeConstraints:(id)constraints;
-(void)receiveMessageWithName:(id)name userInfo:(id)info;
-(void)dataProviderDidLoad;
-(id)sectionParameters;
-(id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
-(id)sortDescriptors;
-(id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
-(id)sectionDisplayName;
-(id)defaultSectionInfo;
-(id)sectionIdentifier;
-(void)publish;
-(id)init;
@end

