//
//  XPPropertyDescriptor.h
//  PreferencesDemo
//
//  Created by tianxiuping on 2018/8/29.
//  Copyright © 2018年 XP. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XPPropertyDescriptor : NSObject

@property (nonatomic, readonly) NSString *defaultsKey;
@property (nonatomic, readonly) BOOL isSetter;
@property (nonatomic, readonly) NSString *type;

- (instancetype)initWithDefaultsKey:(NSString *)defaultsKey type:(NSString *)type isSetter:(BOOL)isSetter;

@end
