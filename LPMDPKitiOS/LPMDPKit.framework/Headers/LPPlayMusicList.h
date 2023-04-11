//
//  LPPlayMusicList.h
//  LinkplayPushMusic
//
//  Created by lyr on 2019/8/5.
//  Copyright © 2019年 Linkplay-jack. All rights reserved.
//

#import "LPBasicObject.h"

@class LPAccount;
@class LPPlayItem;
@class LPPlayHeader;

typedef NS_ENUM(NSInteger, LPPlayMusicListPlayMode)
{
    LPMS_PLAYMODE_SEARCHURL = 0, //Use the LPPlayHeader *header searchUrl
    LPMS_PLAYMODE_PLAYLIST, // Use the NSArray<LPPlayItem *> *list
    LPMS_PLAYMODE_MIXEDPLAY //Mied play
};

NS_ASSUME_NONNULL_BEGIN

/**
  Represents a complete song list.
  Used to play and preset songs.
  This model is marked by Account, LPPlayHeader, list (LPPlayItem), Index.
 */
@interface LPPlayMusicList : LPBasicObject

//* Audio account information
@property (nonatomic, strong) LPAccount *account;

//* List header description
@property (nonatomic, strong) LPPlayHeader *header;

//Song details list
@property (nonatomic, strong) NSArray<LPPlayItem *> *list;

//* Play index / preset index
@property (nonatomic, assign) int index;

//* Play method
@property (nonatomic, assign) LPPlayMusicListPlayMode playMode;

//Custom presets ** Special, not processed at the moment **
@property (nonatomic, strong) NSString *customPresetName;


@end

NS_ASSUME_NONNULL_END
