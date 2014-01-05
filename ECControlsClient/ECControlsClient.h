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

///----------------------
/// @name Configuration Methods
///----------------------

- (void)getConfigurationsWithSuccess:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                             failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getConfiguration:(NSString *)configuration
                 success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                 failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

///--------------------------
/// @name Security Controls Methods
///--------------------------

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

///---------------
/// @name Threat Methods
///---------------

- (void)getThreatsWithSuccess:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                      failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getThreat:(NSString *)threat
          success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
          failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

///----------------------
/// @name Threat Vector Methods
///----------------------

- (void)getThreatVectorsWithSuccess:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                            failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getThreatVector:(NSString *)threatVector
                success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

///-----------------
/// @name Guidance Methods
///-----------------

- (void)getGuidance:(NSString *)guidance
       success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
       failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (void)getGuidanceByThreat:(NSString *)threat
                    success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                    failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

///-----------------------------
/// @name Prioritized Guidance Methods
///-----------------------------

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
