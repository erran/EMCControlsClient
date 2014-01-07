//
//  main.m
//  EMCControlsClientDemo
//
//  Created by Erran Carey on 1/5/14.
//  Copyright (c) 2014 Erran Carey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMCControlsClient.h"
#import "EMCControlsClient+SecurityControls.h"

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        NSLog(@"Hello, World!");

        NSMutableArray * __block arr = [[NSMutableArray alloc] initWithCapacity:100];
        EMCControlsClient *client = [[EMCControlsClient alloc] initWithBaseURL:[NSURL URLWithString:@"http://0.0.0.0:8080/insight/controls/api"] username:@"admin" password:@"admin"];
        [client getSecurityControlsWithBlock:^(NSArray *securityControls, NSError *error) {
            // Save off securityControls or handle error
        }];
    }
    return 0;
}
