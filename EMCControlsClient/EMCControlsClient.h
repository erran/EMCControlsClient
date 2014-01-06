//
//  EMCControlsClient.h
//
//
//  Created by Erran Carey on 1/3/14.
//
//

#import "RestKit.h"

/**
 EMCControlsClient is a AFHTTPRequestOperationManager subclass for interacting with the Rapid7 ControlsInsight API
 */
@interface EMCControlsClient : AFHTTPClient

/**
 Initializes a EMCControlsClient instance with the given credentials.

 @param baseURL  The baseURL to connect to controlsinsight with.
 @param username The username.
 @param password The password.
 */
- (id)initWithBaseURL:(NSURL *)baseURL
             username:(NSString *)username
             password:(NSString *)password;

@end
