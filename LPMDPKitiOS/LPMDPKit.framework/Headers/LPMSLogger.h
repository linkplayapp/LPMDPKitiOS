//
//  LogRecordLogger.h
//  LinkPlayLogRecord
//
//  Created by lyr on 2020/12/1.
//  Copyright © 2020 Linkplay-jack. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LPMSLogLevel) {
    /// Most verbose debug log level.
    LPMS_DEBUG9 = 0,

    /// Intermediate debug log level.
    LPMS_DEBUG8,

    /// Intermediate debug log level.
    LPMS_DEBUG7,

    /// Intermediate debug log level.
    LPMS_DEBUG6,

    /// Intermediate debug log level.
    LPMS_DEBUG5,

    /// Intermediate debug log level.
    LPMS_DEBUG4,

    /// Intermediate debug log level.
    LPMS_DEBUG3,

    /// Intermediate debug log level.
    LPMS_DEBUG2,

    /// Intermediate debug log level.
    LPMS_DEBUG1,

    /// Least verbose debug log level.
    LPMS_DEBUG0,

    /// Logs of normal operations, to be used in release builds.
    LPMS_INFO,

    /// Log of an event that may indicate a problem.
    LPMS_WARN,

    /// Log of an event that indicates an error.
    LPMS_ERROR,

    /// Log of a event that indicates an unrecoverable error.
    LPMS_CRITICAL,

    /// Level used to disable all logging.
    LPMS_NONE,

    /// An unknown severity level.
    LPMS_UNKNOWN
};

#define LPMSInfoLog(tag, message, ...) [LPMSLogger LPMSLog:tag Level:LPMS_INFO Message:message Format:__VA_ARGS__];

#define LPMSDebugLog(tag, message, ...) [LPMSLogger LPMSLog:tag Level:LPMS_DEBUG0 Message:message Format:__VA_ARGS__];

#define LPMSWarnLog(tag, message, ...) [LPMSLogger LPMSLog:tag Level:LPMS_WARN Message:message Format:__VA_ARGS__];

//版本比较
#define LPMDPVersionNewerEqual(version, otherVersion) [version isNewerThanOrEqualVersion:otherVersion]

@interface LPMSLogger : NSObject

+ (void)LPMSLog:(NSString *)tag Level:(LPMSLogLevel)level Message:(NSString *)message Format:(NSString *)format, ...;

@end


NS_ASSUME_NONNULL_END
