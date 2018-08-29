//
//  AppDelegate.h
//  PreferencesDemo
//
//  Created by tianxiuping on 2018/8/29.
//  Copyright © 2018年 XP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

