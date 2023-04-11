//
//  LPMediaSourceProtocol.h
//  LPMDPKit
//
//  Created by long on 2020/2/20.
//  Copyright © 2020 Linkplay-jack. All rights reserved.
//

#import <Foundation/Foundation.h>

@class LPPlayMusicList;
@class LPPlayHeader;
@class LPPlayItem;

@protocol LPMDPStreamServiceProtocol <NSObject>

- (NSString *)trackXMLForPlayItem:(LPPlayHeader *)header item:(LPPlayItem *)playItem;

- (NSString *)streamSericeSource;
- (NSString *)playXMLForMusicList:(LPPlayMusicList *)musicList;

@end

