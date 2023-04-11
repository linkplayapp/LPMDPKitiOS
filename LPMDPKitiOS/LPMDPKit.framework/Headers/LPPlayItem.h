//
//  LPPlayItem.h
//  LinkplayPushMusic
//
//  Created by lyr on 2019/8/5.
//  Copyright © 2019年 Linkplay-jack. All rights reserved.
//

#import "LPBasicObject.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Single track details.
 Including basic track information, used for data stream conversion and expansion.
 Mark * Is required.
 */
@interface LPPlayItem : LPBasicObject
///* Title of the track
@property (nonatomic, strong) NSString *trackName;
///* Track identifier
@property (nonatomic, strong) NSString *trackId;
///* Link to play track
@property (nonatomic, strong) NSString *trackUrl;

///Track cover
@property (nonatomic, strong) NSString *trackImage;
///Author
@property (nonatomic, strong) NSString *trackArtist;
///Author identifier
@property (nonatomic, strong) NSString *artistId;
///Track audio storage size
@property (nonatomic, assign) int trackSize;
///Track duration
@property (nonatomic, assign) int trackDuration;
///The number of times the track is played
@property (nonatomic, assign) int playCount;
///The album name
@property (nonatomic, strong) NSString *albumName;
///Album identifier
@property (nonatomic, strong) NSString *albumId;
///Creation time
@property (nonatomic, strong) NSString *createTime;






@end

NS_ASSUME_NONNULL_END
