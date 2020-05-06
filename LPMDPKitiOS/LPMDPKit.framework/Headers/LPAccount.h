//
//  LPAccount.h
//  LinkplayPushMusic
//
//  Created by lyr on 2019/8/5.
//  Copyright © 2019年 Linkplay-jack. All rights reserved.
//

#import "LPBasicObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Basic information of audio source account.
 Used for identity verification.
 Mark * Is required.
 */
@interface LPAccount : LPBasicObject

///* Account number
@property (nonatomic, strong) NSString *source;
///* Account identifier
@property (nonatomic, strong) NSString *userId;

/**
 Audio source name
 From LPPlayHeader (define mediaSource)
 */
@property (nonatomic, strong) NSString *userName;
/**
 Account password.
 If you log in by OAuth 2, leave it blank.
 */
@property (nonatomic, strong) NSString *userPassword;

///Token
@property (nonatomic, strong) NSString *token;
///Refresh token
@property (nonatomic, strong) NSString *refreshToken;
///Expire date
@property (nonatomic, assign) NSInteger expressIn;
///Last update time
@property (nonatomic, strong) NSString *update;


@end

NS_ASSUME_NONNULL_END
