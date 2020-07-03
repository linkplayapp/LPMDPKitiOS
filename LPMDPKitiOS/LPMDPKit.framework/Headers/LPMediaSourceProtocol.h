//
//  LPMediaSourceProtocol.h
//  LPMDPKit
//
//  Created by long on 2020/2/20.
//  Copyright © 2020 Linkplay-jack. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Device SDK implementation protocol
 Mainly to provide communication between the source SDK and the device.
 */

NS_ASSUME_NONNULL_BEGIN

typedef enum{
    LPStringType,
    LPJsonType,
    LPXmlType,
    LPImageType,
} LPResponseType;

@protocol LPMediaSourceProtocol <NSObject>

@optional

///IP
- (NSString *)LPIpAddressWithDeviceId:(NSString *)deviceId;

///Get UserInfo
- (void)LPGetUserInfoWithDeviceId:(NSString *)deviceId source:(NSString *)source block:(void(^)(int ret, NSString *result))block;

///Log Out
- (void)LPLogOutWithDeviceId:(NSString *)deviceId source:(NSString *)source block:(void(^)(int ret, NSError *error))block;

///HTTP
- (NSURLSessionDataTask *)LPCommonHTTPMethod:(NSString *)url responseType:(LPResponseType)type success:(void (^)(NSURLSessionDataTask *operation, id responseObject))success failure:(void (^)(NSURLSessionDataTask *operation, NSError *error))failure timeout:(NSTimeInterval)time;

///Source Http
- (NSURLSessionDataTask *)LPCommonSourceHTTPMethod:(NSString *)url responseType:(LPResponseType)type success:(void (^)(NSURLSessionDataTask *operation, id responseObject))success failure:(void (^)(NSURLSessionDataTask *operation, NSError *error))failure redirect:(void (^)(NSURLSessionTask *operation, NSHTTPURLResponse *responseObject))redirect timeout:(NSTimeInterval)time;

///Login
- (void)LPLoginBoxWithSource:(NSString *)source username:(NSString *)username password:(NSString *)password block:(void(^)(int ret,NSString* Result))block;

/**
 Next to play info.
 
 block:
 @{@"queueName":@"",
   @"source":@"",
   @"searchUrl":@""
 }
 */
- (void)LPGetNextToPlayInfoWithDeviceId:(NSString *)deviceId block:(void(^)(int ret, NSDictionary *dictionary))block;






@end

NS_ASSUME_NONNULL_END
