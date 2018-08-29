//
//  XPPreferences.h
//  PreferencesDemo
//
//  Created by tianxiuping on 2018/8/29.
//  Copyright © 2018年 XP. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface XPPreferences : NSObject
{
    NSDictionary *_properties;
}

//是否立即写入
@property (nonatomic, assign) BOOL shouldAutomaticallySynchronize;

+ (NSString *)defaultsKeyForPropertyName:(NSString *)key;
+ (instancetype)sharedInstance;

- (BOOL)synchronize;
- (NSUserDefaults *)userDefaults;

@end
