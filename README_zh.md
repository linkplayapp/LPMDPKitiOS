# LPMDPKitiOS

[English](README.md) | [中文](README_zh.md)

LPMDPKit  (LinkPlay Media Data Process Kit, LinkPlay媒体数据处理套件) <br>

它是一个数据格式转换的中间插件，因为设备SDK[LPMusicKitiOS](https://github.com/linkplayapp/LPMusicKitiOS)接口交互的数据格式为LinkPlay自定义的XML，XML的层级很复杂，如果使用者去尝试解析、拼接XML将会非常麻烦，以及后期升级维护XML，这对用户来说不友好。
所以，定义了一套标准的数据格式的模型，并开发了这个插件.<br> 当你从设备SDK[LPMusicKitiOS](https://github.com/linkplayapp/LPMusicKitiOS)接口获取到了XML之后，调用中间层插件提供的相应的接口，就可以得到标准模型的数据。<br>

同时，LinkPlay所提供的音源，如：本地音乐，TuneIn. 它们的API接口返回的数据格式都是基于标准模型的数据封装的，当你需要播放音乐的时候：
- 调用中间层插件转化为设备SDK[LPMusicKitiOS](https://github.com/linkplayapp/LPMusicKitiOS)需要的XML,
- 把此XML传给设备SDK[LPMusicKitiOS](https://github.com/linkplayapp/LPMusicKitiOS)的接口.

即可完成播放功能。

因此，你不用关心LinkPlay自定义的XML格式，只需要调用中间层插件提供的解析、拼接的方法，即可实现XML和基础模型的转换。

## 文档

你可以在这里找到更多[文档](https://linkplayapp.github.io/linkplay_sdk_doc/zh-hans/introduction.html) 。

## 如何开始

- [下载 LPMDPKitiOS](https://github.com/linkplayapp/LPMDPKitiOS/archive/master.zip) 并且导入SDK到你的工程中

## SDK Demo
###  1. 使用 CocoaPods 安装SDK的demo
- [LPMusicKitPodsDemo](https://github.com/linkplayapp/LPMusicKitPodsDemo)

###  2. 手动导入SDK的demo
- [LPMusicKitDemo](https://github.com/linkplayapp/LPMusicKitDemo)

## 需求

- iOS >= 10.0

## 安装

该SDK 是配合音源或者设备SDK使用的，不需要单独下载导入，在安装音源或者设备SDK的时候，会要求导入该SDK


## 作者

LinkPlay, ios_team@linkplay.com
