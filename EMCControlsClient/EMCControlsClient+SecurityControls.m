//
//  EMCControlsClient+SecurityControls.m
//  EMCControlsClientDemo
//
//  Created by Erran Carey on 1/6/14.
//  Copyright (c) 2014 Erran Carey. All rights reserved.
//

#import "EMCControlsClient+SecurityControls.h"

# pragma mark Security Controls -

@implementation EMCControlsClient (SecurityControls)

- (NSURLSessionDataTask *)getSecurityControlsWithBlock:(void (^)(NSArray *securityControls, NSError *error))block {
    return [self GET:@"/security_controls" parameters:@{} success:^(NSURLSessionDataTask * __unused task, id controls) {
        NSMutableArray *mutableControlsArray = [NSMutableArray arrayWithCapacity:[controls count]];
        for (NSDictionary *control in controls) {
            EMCControlsSecurityControl *securityControl = [[EMCControlsSecurityControl alloc] initWithDictionary:control error:nil];
            [mutableControlsArray addObject:securityControl];
        }

        if (block) {
            block([NSArray arrayWithArray:mutableControlsArray], nil);
        }
    }
    failure:^(NSURLSessionDataTask *__unused task, NSError *error) {
        if (block) {
            block([NSArray array], error);
        }
    }];
}

- (NSURLSessionDataTask *)getSecurityControlByName:(NSString *)name withBlock: (void (^)(EMCControlsSecurityControl *securityControl, NSError *error))block {
    return [self GET:[NSString stringWithFormat:@"/security_controls/%@", name] parameters:@{} success:^(NSURLSessionDataTask * __unused task, id control) {
        EMCControlsSecurityControl *securityControl = [[EMCControlsSecurityControl alloc] initWithDictionary:control error:nil];

        if (block) {
            block(securityControl, nil);
        }
    }
    failure:^(NSURLSessionDataTask *__unused task, NSError *error) {
        if (block) {
            block([[EMCControlsSecurityControl alloc] initWithDictionary:@{} error:&error], error);
        }
    }];
}

@end
