//
//  EMCControlsClient+SecurityControls.h
//  EMCControlsClientDemo
//
//  Created by Erran Carey on 1/6/14.
//  Copyright (c) 2014 Erran Carey. All rights reserved.
//

#import "EMCControlsClient.h"
#import "EMCControlsSecurityControl.h"

@interface EMCControlsClient (SecurityControls)

- (NSURLSessionDataTask *)getSecurityControlsWithBlock:(void (^)(NSArray *securityControls, NSError *error))block;

- (NSURLSessionDataTask *)getSecurityControlByName:(NSString *)name withBlock: (void (^)(EMCControlsSecurityControl *securityControl, NSError *error))block;

@end
