//
//  LPAlarmList.h
//  iMuzo
//
//  Created by lyr on 2019/8/12.
//  Copyright © 2019年 wiimu. All rights reserved.
//

#import "LPPlayMusicList.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LPAlarmType)
{
    LP_ALARM_PLAYQUEUE = 0, //The sound of an ordinary alarm is a source song
    LP_ALARM_PLAYKEYMAP //Alarm is preset alarm
};

typedef NS_ENUM(NSInteger, LPAlarmTrigger)
{
    LP_ALARM_TRIGGER_ONCE = 0,//The alarm sounds only once
    LP_ALARM_TRIGGER_EVERYWEEK,//On any day from Monday to Sunday, it rings regularly
    LP_ALARM_TRIGGER_EVERYDAY//The alarm rings every day
};

typedef NS_OPTIONS(NSUInteger, LPAlarmRepeat) {
    Monday          =   0,
    Tuesday         =   1,
    Wednesday       =   2,
    Thursday        =   3,
    Friday          =   4,
    Saturday        =   5,
    Sunday          =   6,
};

/**
 Alarm clock display and setting model.
 All parameters Is required.
 */
@interface LPAlarmList : LPPlayMusicList

/**
 Alarm time
 Example:2020-04-08 07:51:00
 TimeZone:Create time zone as "UTC"
 DateFormatter:yyyy-MM-dd HH:mm:ss
 */
 @property (nonatomic, strong) NSString *time;

///Alarm name
@property (nonatomic, strong) NSString *alarmName;

///Alarm volume (0-100)
@property (nonatomic, strong) NSString *volume;

/**
 The type of alarm: the content that the device has preset or from a new song.
 */
@property (nonatomic, assign) LPAlarmType type;

/**
 User selects alarm frequency.
 [@(Monday),..]
 Form LPAlarmRepeat.
 */
@property (nonatomic, strong) NSArray *repeatArray;

/**
 Describe user alarm frequency.
 (default is everyDay or everyWeek)
 */
@property (nonatomic, assign) LPAlarmTrigger trigger;

/**
 When the alarm is the sound source, the attribute is the name of the alarm.
 when the alarm is the preset song, the attribute is the preset index.
 */
@property (nonatomic, strong) NSString *context;

///Whether the alarm is on. (default is open)
@property (nonatomic, assign) BOOL enable;

@end

NS_ASSUME_NONNULL_END
