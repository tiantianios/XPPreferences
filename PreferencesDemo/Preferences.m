//
//  Preferences.m
//  PreferencesDemo
//
//  Created by tianxiuping on 2018/8/29.
//  Copyright © 2018年 XP. All rights reserved.
//

#import "Preferences.h"

@implementation Preferences

@dynamic isLogin;
@dynamic appkey;
@dynamic pressCount;
@dynamic user_id;

#pragma mark--设置默认值--
- (instancetype)init
{
    if (self = [super init]) {
        NSDictionary *registrationDictionary = @{
                                                 @"isLogin"    :@NO,
                                                 @"appkey"    :@"",
                                                 @"pressCount" :@8,
                                                 @"user_id"  : @1
                                                 };

        [[NSUserDefaults standardUserDefaults] registerDefaults:registrationDictionary];
    }

    return self;
}



@end
