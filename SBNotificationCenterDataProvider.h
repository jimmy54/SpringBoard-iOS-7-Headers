/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BBRemoteDataProvider.h"
#import <Foundation/NSObject.h>

@class BBSectionInfo;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterDataProvider : NSObject <BBRemoteDataProvider> {
	BBSectionInfo* _sectionInfo;
}
+(id)notificationCenterDataProviderWithSectionInfo:(id)sectionInfo;
-(id)bulletinsWithRequestParameters:(id)requestParameters lastCleared:(id)cleared;
-(id)sortDescriptors;
-(id)defaultSectionInfo;
-(id)sectionIdentifier;
-(void)dealloc;
-(id)initWithSectionInfo:(id)sectionInfo;
@end
