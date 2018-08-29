//
//  ViewController.m
//  PreferencesDemo
//
//  Created by tianxiuping on 2018/8/29.
//  Copyright © 2018年 XP. All rights reserved.
//

#import "ViewController.h"
#import "Preferences.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"打印数据%@",[Preferences sharedInstance].appkey);
    NSLog(@"********打印数量%ld",[Preferences sharedInstance].pressCount);
    [Preferences sharedInstance].isLogin = YES;
    [Preferences sharedInstance].appkey = @"我是appkey";
    [Preferences sharedInstance].pressCount +=  [Preferences sharedInstance].pressCount;
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
