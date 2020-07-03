//
//  LPMDPKitManager.m
//  Linkplay Media Data Process kit
//  Linkplay Middle layer plugin
//
//  Created by lyr on 2019/8/5.
//  Copyright © 2019年 Linkplay-jack. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <LPMDPKit/LPMediaSourceProtocol.h>

@class DDXMLDocument;
@class LPPlayMusicList;
@class LPAccount;
@class LPPlayItem;
@class LPPlayHeader;
@class LPAlarmList;

NS_ASSUME_NONNULL_BEGIN

/*
 Used to transform XML data and provide a unified method.
 Singleton pattern.
 */
@interface LPMDPKitManager : NSObject

///SDK version number
@property (nonatomic, readonly) NSString *version;

+ (instancetype)shared;

/**
 Audio source playback.
 Used to play audio content and obtain the XML required for device playback.
 The returned data can be directly given to the device SDK.
 
 @param musicList Upcoming audio
 return Dictionary
 {
 @"appendCount":@(2),
 @"playIndex":@(1),
 @"playData":@[@"xml",@"xml"],
 @"queueName":@"xxx"
 }
 */
- (NSDictionary *)playMusicSingleSource:(LPPlayMusicList *)musicList;

/**
 Parsing preset code content.
 Used to parse content that has been preset by the device.
 
 @param presetNumber The preset number supported by the device
 @param presetString Preset content
 return Array
 [LPPlayMusicList,...]
 */
- (NSArray<LPPlayMusicList *> *)getPresetListDataWithNumber:(int)presetNumber presetString:(NSString *)presetString;

/**
 Add and replace preset content.
 Used to encode the data format required by the audio source preset.
 
 @param musicList What needs to be preset
 @param presetList Preset list, ie '-getPresetListDataWithNumber' Content obtained
 return Dictionary
 {
 @"keyMapping":@"xml",
 @"backupQueue":@"xml"
 @"index":@(1),
 @"source":@"xxx"
 }
 */
- (NSDictionary *)updataPresetDataWithPlayMusicList:(LPPlayMusicList *)musicList devicePresetList:(NSArray<LPPlayMusicList *> *)presetList;

/**
 Delete preset content.
 
 @param index Deleted subscript
 @param presetList Preset list, ie '-getPresetListDataWithNumber' Content obtained
 return Dictionary
 {
 @"keyMapping":@"xml",
 @"index":@(1)
 }
 */
- (NSDictionary *)deletePresetDataWithIndex:(int)index devicePresetList:(NSArray<LPPlayMusicList *> *)presetList;

/**
 Parse the alarm code content.
 Used to parse the alarm clock content that the device has added.
 
 @param alarmString Alarm content, from the device SDK
 return array
 [LPPlayMusicList,...]
 */
- (NSArray<LPAlarmList *> *)getAlarmWithString:(NSString *)alarmString;

/**
 Add new alarm content.
 Used to encode the alarm content needed by the device.
 
 @param alarmList Alarm information
 return Dictionary
 {
 @"backupQueue":@"xml",
 @"keyMapping":@"xml",
 }
 */
- (NSDictionary *)addAlarmWithAlarmList:(LPAlarmList *)alarmList;

/**
 Edit the content of the existing alarm.
 Used to encode the alarm content required by the device.
 
 @param alarmList Alarm information
 return Dictionary
 {
 @"backupQueue":@"xml",
 @"keyMapping":@"xml",
 @"queueName":@"xxx"
 }
 */
- (NSDictionary *)editAlarmWithAlarmList:(LPAlarmList *)alarmList;

/**
 Turn on and off the alarm.
 Used to encode the alarm clock content required by the device.

 @param open Turn on the alarm
 @param alarmList Alarm information
 return
 {
 @"keyMapping":@"xml"
 }
*/
- (NSDictionary *)setAlarmStatusWithOpen:(BOOL)open alarmList:(LPAlarmList *)alarmList;

/**
 Browse Current playlist.
 @param browse Browse Queue XML
*/
- (LPPlayMusicList *)getBrowseListWithString:(NSString *)browse;

/**
 Add To Next Play.
 Set the next song to be played.
 Now only supports adding a single song, and the song contains trackUrl.
 block
 {
  @"queueContext":@"xml"
 }
 */
- (void)addToNextPlayWithDeviceId:(NSString *)deviceId playMusicList:(LPPlayMusicList *)musicList deviceAction:(id<LPMediaSourceProtocol>)action block:(void(^)(NSDictionary *dictionary))block;

/**
 USB playlist.
 @param usbString USB Queue XML
*/
- (LPPlayMusicList *)getUSBPlaylistWithString:(NSString *)usbString;





@end


NS_ASSUME_NONNULL_END


