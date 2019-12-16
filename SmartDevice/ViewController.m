//
//  ViewController.m
//  SmartDevice
//
//  Created by Aaron on 2019/12/15.
//  Copyright © 2019 com.lizhi1026. All rights reserved.
//

#import "ViewController.h"
#import "BlueToothManager.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor redColor];
    [[BlueToothManager sharedInstance] openBlueTooth];
}


@end
