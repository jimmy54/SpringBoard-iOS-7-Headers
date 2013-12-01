/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RLNDataProviderFactory : NSObject {
	NSMutableDictionary* _dataProvidersBySectionID;
}
+(id)sharedInstance;
-(void)_notePushStoreAppsDidChange:(id)_notePushStoreApps;
-(void)_noteInstalledAppsDidChange:(id)_noteInstalledApps;
-(void)reloadDataProviders;
-(void)_reloadDataProviders:(id)providers;
-(id)createDataProviderWithSectionID:(id)sectionID;
-(void)dealloc;
-(id)init;
@end
