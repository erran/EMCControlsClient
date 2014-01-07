//
//  EMCControlsClient.h
//
//
//  Created by Erran Carey on 1/3/14.
//
//

#import "AFHTTPSessionManager.h"

/**
 EMCControlsClient is a AFHTTPRequestOperationManager subclass for interacting with the Rapid7 ControlsInsight API
 */
@interface EMCControlsClient : AFHTTPSessionManager

/**
 The username to use for Basic Authentication against ControlsInsight
 */
@property (strong, nonatomic) NSString *username;

/**
 The password to use for Basic Authentication against ControlsInsight
 */
@property (strong, nonatomic) NSString *password;

/**
 Initializes a EMCControlsClient instance with the given credentials.

 @param baseURL  The baseURL to connect to controlsinsight with.
 @param username The username.
 @param password The password.
 */
- (instancetype)initWithBaseURL:(NSURL *)URL
                       username:(NSString *)user
                       password:(NSString *)pass;

@end