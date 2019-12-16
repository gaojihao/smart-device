//
//  BlueToothManager.h
//  SmartDevice
//
//  Created by 栗志 on 2019/12/16.
//  Copyright © 2019 com.lizhi1026. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

NS_ASSUME_NONNULL_BEGIN

@interface BlueToothManager : NSObject

+ (instancetype)sharedInstance;


- (void)openBlueTooth;

- (void)connectDeviceWithPeripheral:(CBPeripheral *)peripheral;

@end

NS_ASSUME_NONNULL_END
