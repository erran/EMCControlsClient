//
//  EMCControlsSecurityControl.m
//  EMCControlsClientDemo
//
//  Created by Erran Carey on 1/6/14.
//  Copyright (c) 2014 Erran Carey. All rights reserved.
//

#import "EMCControlsSecurityControl.h"

@implementation EMCControlsSecurityControl

@synthesize enabled;
@synthesize name;

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{
                @"enabled": @"enabled",
                @"name": @"name"
            };
}

+ (NSValueTransformer *)enabledTransformer {
    NSDictionary *states = @{
                              @"enabled":  @(EMCControlStateEnabled),
                              @"disabled": @(EMCControlStateDisabled)
                            };

    return [MTLValueTransformer reversibleTransformerWithForwardBlock:^(NSString *str) {
        return states[str];
    } reverseBlock:^(NSNumber *state) {
        return [states allKeysForObject:state].lastObject;
    }];
}

@end
