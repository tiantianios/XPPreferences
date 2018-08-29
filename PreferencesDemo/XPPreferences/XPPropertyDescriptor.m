//
//  XPPropertyDescriptor.m
//  PreferencesDemo
//
//  Created by tianxiuping on 2018/8/29.
//  Copyright © 2018年 XP. All rights reserved.
//

#import "XPPropertyDescriptor.h"

@implementation XPPropertyDescriptor

- (instancetype)initWithDefaultsKey:(NSString *)defaultsKey type:(NSString *)type isSetter:(BOOL)isSetter {
    if (self = [super init]) {
        _defaultsKey = defaultsKey;
        _type = type;
        _isSetter = isSetter;
    }
    return self;
}

@end
