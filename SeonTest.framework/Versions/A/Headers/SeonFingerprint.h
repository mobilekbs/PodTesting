//
//  SeonFingerprint.h
//  iosSdk
//
//  Created by Balak Ram Sharma on 8/8/17.
//  Copyright © 2017 X89. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdSupport/ASIdentifierManager.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <sys/sysctl.h>
#include <sys/utsname.h>
#include <ExternalAccessory/ExternalAccessory.h>
#include <SystemConfiguration/CaptiveNetwork.h>
#include <SystemConfiguration/SystemConfiguration.h>
#include <CoreTelephony/CTTelephonyNetworkInfo.h>

#import <mach/mach.h>
#import <assert.h>


@interface SeonFingerprint : NSObject<UIApplicationDelegate,EAAccessoryDelegate>
{
   
}
+ (id)sharedManager;
-(void)startAnalyzing;
//@property(atomic) UIApplication *application;

// OS Version of the device
@property(nonatomic,readonly) NSString *deviceVersion;

//Public IP Address
@property(nonatomic,readonly) NSString *devicePublicIpAddress;

//Local IP Address
@property(nonatomic,readonly) NSString *deviceLocalIpAddress;

//Platform type (Simulator or Device)
@property(nonatomic,readonly) NSString *devicePlatform;

// Device UUID
@property(nonatomic,readonly) NSString *deviceIdentifier;

//CPU Type
@property(nonatomic,readonly) NSString *cpuType;

//No of CPU Cores
@property(nonatomic,readonly) NSString *cpuCores;

//Number of Attached accessories to device
@property(nonatomic,readonly) NSString *attachedAccessories;

// Device Orientation
@property(nonatomic,readonly) NSString *deviceOrientation;

// Device Brightness
@property(nonatomic,readonly) NSString *screenBrightness;

// System Up Time
@property(nonatomic,readonly) NSString *systemUpTime;

// Device Resolution
@property(nonatomic,readonly) NSString *screenResolution;

// returns  true or false if ad tracking is enabled or not
@property(nonatomic,readonly) BOOL isAdTrackingEnabled;

//Device Ad ID
@property(nonatomic,readonly) NSString *deviceAdIdentifier;

// Kernel Version
@property(nonatomic,readonly) NSString *kernelVersion;

// iCloud Token
@property(nonatomic,readonly) NSString *iCloudToken;

//Local Language in the device
@property(nonatomic,readonly) NSString *localLanguage;

//Local currency in the device
@property(nonatomic,readonly) NSString *localCurrencyCode;


@property(nonatomic,readonly) NSString *fileSize;

//Provides Physical Memory
@property(nonatomic,readonly) NSString *physicalMemory;

//returns  true or false if device has proximity sensor or not
@property(nonatomic,readonly) BOOL proximitySensor;

//Current Battery Percentage of the device
@property(nonatomic,readonly) NSString *batteryLevel;

//MAC Address of device
@property(nonatomic,readonly) NSString *MacAddress;


//Device Name
@property(nonatomic) NSString *DeviceName;

// Device Info
@property(nonatomic) NSString *DeviceINFO;

//Netowork Configuration of device (3G,4G,wi-fi)
@property(nonatomic) NSString *networkConfig;

//CPU Information
@property(nonatomic) NSString *cpuInformation;

@end
