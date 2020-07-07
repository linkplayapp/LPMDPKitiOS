# LPMDPKitiOS

[English](README.md) | [中文](README_zh.md)

LPMDPKit  (LinkPlay Media Data Process Kit)

It is an intermediate plug-in for data format conversion, because the data format of the device SDK [LPMusicKitiOS](https://github.com/linkplayapp/LPMusicKitiOS)interface interaction is LinkPlay's custom XML. The XML level is very complicated. If users try to parse and splice XML, it will be very troublesome and later Upgrading and maintaining XML is not user friendly.
Therefore, a set of standard data format models is defined and this plug-in is developed. After you obtain XML from the device SDK [LPMusicKitiOS](https://github.com/linkplayapp/LPMusicKitiOS)interface, call the corresponding interface provided by the middle-tier plug-in to get the standard model data .<br>

At the same time, the audio sources provided by LinkPlay, such as: local music, TuneIn. The data format returned by their API interface is based on the data encapsulation of the standard model, when you need to play music:
- Call the middle layer plug-in to convert to the XML required by the device SDK [LPMusicKitiOS](https://github.com/linkplayapp/LPMusicKitiOS),
- Pass this XML to the interface of the device SDK [LPMusicKitiOS](https://github.com/linkplayapp/LPMusicKitiOS).
You can complete the playback function.<br>

Therefore, you don't need to care about the custom XML format of LinkPlay. You only need to call the parsing and splicing methods provided by the middle-layer plug-in to convert the XML to the basic model.

## Documentation

You can find documentation [on the website](https://linkplayapp.github.io/linkplay_sdk_doc/en/).

## How To Get Started

- [Download LPMDPKitiOS](https://github.com/linkplayapp/LPMDPKitiOS/archive/master.zip) and import SDK to your project

## SDK Demo
###  1. SDK demo with CocoaPods
- [LPMusicKitPodsDemo](https://github.com/linkplayapp/LPMusicKitPodsDemo)

###  2. SDK demo
- [LPMusicKitDemo](https://github.com/linkplayapp/LPMusicKitDemo)

## Requirements

- iOS >= 10.0

## Installation
The SDK is used in conjunction with the audio source or device SDK, there is no need to download and import separately. When installing the audio source or device SDK, you will be asked to import the SDK

## Author

LinkPlay, ios_team@linkplay.com
