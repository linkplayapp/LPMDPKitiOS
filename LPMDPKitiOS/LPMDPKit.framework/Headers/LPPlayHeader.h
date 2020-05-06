//
//  LPPlayHeader.h
//  LinkplayPushMusic
//
//  Created by lyr on 2019/8/5.
//  Copyright © 2019年 Linkplay-jack. All rights reserved.
//

#import "LPBasicObject.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, LPHeaderType)
{
    LP_HEADER_TYPE_COLLECTION = 0, //Other collections
    LP_HEADER_TYPE_PLAYLIST, //playlist
    LP_HEADER_TYPE_ALBUM,//album
    LP_HEADER_TYPE_ARTIST,//artist
    LP_HEADER_TYPE_STATION,//station
    LP_HEADER_TYPE_RADIO,//radio
    LP_HEADER_TYPE_SONG, //song
};

/**
 The header description of the single content.
 Used to describe the single content list LPPlayItem.
 Public attributes such as type (Station, Album), number, page number, sound source type (iHeartRadio, TuneIn, Local music, QQMusic).
 Mark * Is required.
 */
@interface LPPlayHeader : LPBasicObject

///* Head title
@property (nonatomic, strong) NSString *headTitle;
///* Head identifier
@property (nonatomic, strong) NSString *headId;
///* Music type. Refer to the Define list below
@property (nonatomic, strong) NSString *mediaType;
///* Sound source. Refer to the Define list below
@property (nonatomic, strong) NSString *mediaSource;

/**
Content source you can request to get the list.
if this is empty, you must provide LPPlayItem related information.
 */
@property (nonatomic, strong) NSString *searchUrl;
/**
Supported playback modes.
0: List and single 1: Support single only 2: No playback
 */
@property (nonatomic, assign) int loopMode;

///Cache type (extended, temporarily not used)
@property (nonatomic, assign) LPHeaderType headType;
///Head creator
@property (nonatomic, strong) NSString *creator;
///Track quality
@property (nonatomic, strong) NSString *quality;
///Head cover
@property (nonatomic, strong) NSString *imageUrl;
///Number of tracks
@property (nonatomic, assign) int totalTracks;
///Description
@property (nonatomic, strong) NSString *describe;
///Total pages
@property (nonatomic, assign) int totalPage;
///Current page number
@property (nonatomic, assign) int currentPage;
///Number of pages (default: 20)
@property (nonatomic, assign) int perPage;

@end


#pragma mark -- QueueName
#define PHONE_IDENTITY [[UIDevice currentDevice] name]
#define MyFavoriteQueueName @"MyFavouriteQueue"
#define RECENTLY_QUEUE         @"RecentlyQueue"
/**
 _RemoteLocalQueue，headId is guid
 if parent
 */
#define SRCPARENT_ALBUM @"srcParent"


#pragma mark -- mediaType
#define MEDIATYPE_NONE @"NONE"
#define MEDIATYPE_ALBUM @"ALBUM-NETWORK"
#define MEDIATYPE_ARTIST @"ARTIST-ARTIST"
#define MEDIATYPE_STATION @"STATION-NETWORK"
#define MEDIATYPE_RADIO @"RADIO-NETWORK"
#define MEDIATYPE_NETLIST @"SONGLIST-NETWORK"
#define MEDIATYPE_LOCALLIST @"SONGLIST-LOCAL"
#define MEDIATYPE_LOCALLIST_TF  @"SONGLIST-LOCAL_TF" // Built-in tf card
#define MEDIATYPE_EXTERNAL_TF  @"EXTERNAL_TFCARD"  // Both are tf cards, this should be an external tf card
#define MEDIATYPE_THIRDPARTY @"THIRD-DLNA"
#define MEDIATYPE_AIRPLAY @"AIRPLAY"
#define MEDIATYPE_UNKNOWN @"UNKNOWN"
#define MEDIATYPE_SPOTIFY @"SPOTIFY"
#define MEDIATYPE_QPLAY @"QPLAY"
#define MEDIATYPE_ALI @"ALI-RPC"
#define MEDIATYPE_LINEIN @"LINE-IN"
#define MEDIATYPE_BLUETOOTH @"BLUETOOTH"
#define MEDIATYPE_EXTERNAL_USB @"EXTERNAL_USB"
#define MEDIATYPE_OPTICAL @"OPTICAL"
#define MEDIATYPE_RCA     @"RCA"
#define MEDIATYPE_ALEXA     @"ALEXA"
#define MEDIATYPE_ALEXA_PANDORA     @"ALEXA_PANDORA"
#define MEDIATYPE_ALEXA_AUDIBLE    @"ALEXA_AUDIBLE"
#define MEDIATYPE_LINEIN2 @"LINE-IN2"
#define MEDIATYPE_AUX2 @"SECORD_LINEIN"
#define MEDIATYPE_RADIO2 @"FM"
#define MEDIATYPE_HDMI @"HDMI"
#define MEDIATYPE_CO_AXIAL @"CO_AXIAL"
#define MEDIATYPE_CD @"CD"

#pragma mark -- mediaSource
#define TTPODSEARCHSUFFIX @"_#~ttpodsearch"
#define TTPODPRESETKEYNAMESUFFIX @"_#~ttdt"
#define XMLYPRESETSUFFIX @"_#~xmly"
#define SPOTIFYPRESETSUFFIX @"_#~spotify"
#define QINGTINGPRESETSUFFIX @"_#~qingting"
#define DOWNLOADPRESETSUFFIX @"_#~download"
#define RECENTLYPRESETSUFFIX [NSString stringWithFormat:@"_%@",[[UIDevice currentDevice] name]]
#define FAVORITESPRESETSUFFIX [NSString stringWithFormat:@"_%@",[[UIDevice currentDevice] name]]
#define TIANTIAN_SOURCE [NSString stringWithFormat:@"%@_天天动听",[[UIDevice currentDevice] name]]
#define TUIN_SOURCE    @"TuneIn"
#define NEW_TUNEIN_SOURCE @"newTuneIn"
#define AMAZON_MUSIC_SOURCE  @"Prime"
#define PANDORA_SOURCE @"Pandora"
#define LOCAL_SOURCE [NSString stringWithFormat:@"%@_RemoteLocal",[[UIDevice currentDevice] name]]
#define DOUBAN_SOURCE  @"Douban"
#define SEARCH_SOURCE [NSString stringWithFormat:@"%@_ttpod_search",[[UIDevice currentDevice] name]]
#define IHEARTRADIO_SOURCE    @"iHeartRadio"
#define QINGTINGFM_SOURCE     @"Qingtingfm"
#define UPNPSERVER_SOURCE @"UPnPServer"
#define XIMALAYE_SOURCE   @"Ximalaya"
#define SPOTIFY_SOURCE    @"SPOTIFY"
#define TIDAL_SOURCE      @"Tidal"
#define RHAPSODY_SOURCE   @"Rhapsody"
#define QQFM_SOURCE       @"QQFM"
#define VTUNER_SOURCE     @"vTuner"
#define QOBUZ_SOURCE      @"Qobuz"
#define AUDIBLE_SOURCE    @"Audible"
#define DEEZER_SOURCE     @"Deezer"
#define RADIONET_SOURCE   @"RadioNet"
#define ALDILIFE_SOURCE   @"AldiLife"
#define IHOMETONE_SOURCE  @"iHomeTone"
#define SPOTIFY_SHOW      @"spotify:show" //spotify Podcast
#define SPOTIFY_EPISODE   @"spotify:episode"

#pragma mark ----- Alexa MediaSource
#define ALEXA_SOURCE_SPOTIFY @"SPOTIFY"
#define ALEXA_SOURCE_AMAZON_MUSIC @"Amazon Music"
#define ALEXA_SOURCE_IHEARTRADIO @"iHeartRadio"
#define ALEXA_SOURCE_TUNEIN @"TuneIn"
#define ALEXA_SOURCE_KINDLE_BOOKS @"Kindle Books"
#define ALEXA_SOURCE_DEEZER @"DEEZER"
#define ALEXA_SOURCE_SAAVN @"SAAVN"
#define ALEXA_SOURCE_SIRIUSXM @"SIRIUSXM"
#define ALEXA_SOURCE_TIDAL @"TIDAL"
#define ALEXA_SOURCE_GIMME_RADIO @"Gimme Radio"


NS_ASSUME_NONNULL_END
