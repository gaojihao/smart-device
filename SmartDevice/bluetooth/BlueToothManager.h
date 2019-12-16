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

@protocol BlueToothManagerDelegate <NSObject>

@optional

- (void)dataWithBluetoothDic:(NSMutableDictionary *)divices;

- (void)didConnectBle;

- (void)didWriteSucessWithStyle:(NSInteger)style;

@end

@interface BlueToothManager : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, weak, nullable) id <BlueToothManagerDelegate> delegate;


- (void)openBlueTooth;

- (void)connectDeviceWithPeripheral:(CBPeripheral *)peripheral;

@end

NS_ASSUME_NONNULL_END
