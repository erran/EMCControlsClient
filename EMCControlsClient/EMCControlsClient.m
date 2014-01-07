//
//  EMCControlsClient.m
//
//
//  Created by Erran Carey on 1/3/14.
//
//

#import "EMCControlsClient.h"

@implementation EMCControlsClient

@synthesize username;
@synthesize password;

//        // To properly connect to ControlsInsight enable self signed certs.:
//        AFSecurityPolicy *securityPolicy = [[AFSecurityPolicy alloc] init];
//        [securityPolicy setAllowInvalidCertificates:YES];
//        [client setSecurityPolicy:securityPolicy];

- (instancetype)initWithBaseURL:(NSURL *)URL username:(NSString *)user password:(NSString *)pass
{
    self = [super initWithBaseURL:URL];

    if (self) {
        self.username = user;
        self.password = pass;

        self.requestSerializer = [AFJSONRequestSerializer serializer];
        self.responseSerializer = [AFJSONResponseSerializer serializer];
        [[self requestSerializer] setAuthorizationHeaderFieldWithUsername:user password:pass];
    }

    return self;
}

@end
