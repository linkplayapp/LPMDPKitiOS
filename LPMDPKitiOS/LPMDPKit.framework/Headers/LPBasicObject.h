//
//  LPBasicObject.h
//  LinkplayPushMusic
//
//  Created by lyr on 2019/8/5.
//  Copyright © 2019年 Linkplay-jack. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Extension class.
 Support coding.
 json conversion.
 */
@interface LPBasicObject : NSObject

/**
 Object to dictionary
 */
- (NSDictionary *)LPObjectTokeyValues;

/**
 Convert object to json
 */
- (NSData *)LPObjectToNSData;

/**
 Convert custom objects to json
 */
+ (NSData *)LPCustomTypeToNSDataWithObject:(id)object;

/**
 Get Object
 @param keyValues NSDictionary、NSData、NSString
 @return Introduced objects
 */
+ (instancetype)LPObjectWithKeyValues:(id)keyValues;


@end

NS_ASSUME_NONNULL_END
