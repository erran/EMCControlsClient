//
//  EMCControlsSecurityControl.h
//  EMCControlsClientDemo
//
//  Created by Erran Carey on 1/6/14.
//  Copyright (c) 2014 Erran Carey. All rights reserved.
//

#import "MTLModel.h"
#import "MTLJSONAdapter.h"
#import "MTLValueTransformer.h"

typedef NS_OPTIONS(BOOL, EMCControlsState) {
    EMCControlStateEnabled,
    EMCControlStateDisabled
};

@interface EMCControlsSecurityControl : MTLModel <MTLJSONSerializing>

@property (nonatomic) EMCControlsState *enabled;
@property (nonatomic, copy, readonly) NSString *name;

+ (NSDictionary *)JSONKeyPathsByPropertyKey;
+ (NSValueTransformer *)enabledTransformer;

@end
