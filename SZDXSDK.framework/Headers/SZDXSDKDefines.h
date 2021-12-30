//
//  SZDXSDKDefines.h
//  SZDXSDK
//
//  Created by 塔肯 on 2021/4/6.
//

#ifndef SZDXSDKDefines_h
#define SZDXSDKDefines_h


/** 平台 */
typedef NS_ENUM(NSInteger,SZDXPlatformName) {
    /**后台接口判断(随机返回其中三个之一) */
    SZDXPlatformNameDefault = 0,
    /**数字动想 */
    SZDXPlatformNameTK = 1,
    /** 穿山甲 */
    SZDXPlatformNameCSJ = 2,
    /** 广点通 */
    SZDXPlatformNameGDT = 3,
    /** 快手 */
    SZDXPlatformNameKS = 4,
};


#endif /* SZDXSDKDefines_h */
