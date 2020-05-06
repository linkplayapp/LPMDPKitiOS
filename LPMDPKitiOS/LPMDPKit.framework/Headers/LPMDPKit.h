//
//  LPMDPKit.h
//  LPMDPKit
//
//  Created by lyr on 2019/8/27.
//  Copyright © 2019年 Linkplay-jack. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <LPMDPKit/LPMDPKitManager.h>
#import <LPMDPKit/LPPlayItem.h>
#import <LPMDPKit/LPPlayHeader.h>
#import <LPMDPKit/LPAccount.h>
#import <LPMDPKit/LPBasicObject.h>
#import <LPMDPKit/LPPlayMusicList.h>
#import <LPMDPKit/LPAlarmList.h>
#import <LPMDPKit/LPPlayMusicList.h>
#import <LPMDPKit/LPMediaSourceProtocol.h>

//! Project version number for LPMDPKit.
FOUNDATION_EXPORT double LPMDPKitVersionNumber;

//! Project version string for LPMDPKit.
FOUNDATION_EXPORT const unsigned char LPMDPKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LPMDPKit/PublicHeader.h>

/**
 Third-party dependencies: KissXML
 Description:
 The data format for interacting with the device is XML, and KissXML provides related XML parsing methods.
 */

/**
 Version history
 1.0
 1.Define the data model of sound source: LPPlayHeader, LPPlayItem
 2.Define the data sources for playback and alarm: LPPlayMusicList, LPAlarmList
 3.Provides data conversion interfaces for playback, presetting, and alarm 4.LPMDPKitManager: used for interaction between audio source and device
 5.Define the interactive protocol of the source SDK and the device  SDK:LPMediaSourceProtocol
 6.Add object <-> dictionary conversion interface in the base class, support serialization and deserialization: LPBasicObject
 
 */
