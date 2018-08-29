//
//  Preferences.h
//  PreferencesDemo
//
//  Created by tianxiuping on 2018/8/29.
//  Copyright © 2018年 XP. All rights reserved.
//

#import "XPPreferences.h"
/*
 1、首先需要继承XPPreferences
 2、成员变量统一assign 修饰
 3、必须给每个成员变量添加@dynamic
 4、支持类型
 * NSInteger
 * NSString
 * NSArray
 * NSDictionary
 * NSURL
 * NSData
 * NSDate
 * NSNumber
 * BOOL
 * float
 * double
 * Classes conforming to the NSCoding protocol (including NSSecureCoding).
 */
#pragma clang diagnostic push
#pragma clang diagnostic error "-Wobjc-missing-property-synthesis"
@interface Preferences : XPPreferences

@property (nonatomic, assign) BOOL isLogin;
@property (nonatomic, assign) NSString *appkey;
@property (nonatomic, assign) NSInteger pressCount;
@property (nonatomic, assign) float user_id;
@end

#pragma clang diagnostic pop
