/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFileLogger.h"


__attribute__((visibility("hidden")))
@interface SBWorkspaceLogger : SBFileLogger {
}
+(void)handleSignal;
+(BOOL)saveRecentLogsToTemporaryPath:(id*)temporaryPath;
+(id)recentLogs;
+(BOOL)isWorkspaceLoggingEnabled;
+(int)workspaceLoggingType;
-(void)willBeginLoggingToPath:(id)path;
-(id)fileFormat:(id)format withArguments:(char*)arguments;
-(BOOL)includeConsole;
-(void)reloadFromDefaults;
-(id)name;
-(BOOL)isEnabled;
@end

