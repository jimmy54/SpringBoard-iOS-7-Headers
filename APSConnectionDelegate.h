/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol APSConnectionDelegate <NSObject>
-(void)connection:(id)connection didReceivePublicToken:(id)token;
@optional
-(void)connectionDidReconnect:(id)connection;
-(void)connection:(id)connection didChangeConnectedStatus:(BOOL)status;
-(void)connection:(id)connection didFailToSendOutgoingMessage:(id)sendOutgoingMessage error:(id)error;
-(void)connection:(id)connection didSendOutgoingMessage:(id)message;
-(void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
-(void)connection:(id)connection didReceiveIncomingMessage:(id)message;
-(void)connection:(id)connection didReceiveToken:(id)token forTopic:(id)topic identifier:(id)identifier;
@end

