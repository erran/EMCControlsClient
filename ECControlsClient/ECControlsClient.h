//
//  ECControlsClient.h
//
//
//  Created by Erran Carey on 1/3/14.
//
//

#import "AFHTTPClient.h"

/**
 ECControlsClient is a AFHTTPClient subclass for interacting with the Rapid7 ControlsInsight API
 */
@interface ECControlsClient : AFHTTPClient

/**
 The base URL to connect to ControlsInsight's API with.
 */
@property (nonatomic, strong) NSURL *baseURL;

/**
 Initializes a ECControlsClient instance with the given credentials.

 @param username The username.
 @param password The password.
 */
- (id)initWithUsername:(NSString *)username
              password:(NSString *)password;

#pragma mark -
#pragma mark - Configuration methods
#pragma mark -

- (void)getConfigurationsWithSuccess:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                             failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getConfiguration:(NSString *)configuration
                 success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                 failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

#pragma mark -
#pragma mark Security Controls methods
#pragma mark -

- (void)getSecurityControlsWithSuccess:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                               failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getSecurityControlsByConfiguration:(NSString *)configuration
                                   success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                                   failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getSecurityControl:(NSString *)securityControl
                   success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                   failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getSecurityControlsByThreat:(NSString *)threat
                            success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                            failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getSecurityControlsByThreatVector:(NSString *)threatVector
                                  success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                                  failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

#pragma mark -
#pragma mark Threat methods
#pragma mark -

- (void)getThreatsWithSuccess:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                      failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getThreat:(NSString *)threat
          success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
          failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

#pragma mark -
#pragma mark Threat Vector methods
#pragma mark -

- (void)getThreatVectorsWithSuccess:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                            failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getThreatVector:(NSString *)threatVector
                success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

#pragma mark -
#pragma mark Guidance methods
#pragma mark -

- (void)getGuidance:(NSString *)guidance
       success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
       failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getGuidanceByThreat:(NSString *)threat
                    success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                    failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

#pragma mark -
#pragma mark Prioritized Guidance methods
#pragma mark -

- (void)getPrioritiedGuidanceByConfiguration:(NSString *)configuration
                                     success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                                     failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getPrioritiedGuidanceBySecurityControl:(NSString *)securityControl
                                       success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                                       failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getPrioritiedGuidanceByThreat:(NSString *)threat
                              success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                              failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getPrioritiedGuidanceByThreatVector:(NSString *)threatVector
                                    success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                                    failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

@end
