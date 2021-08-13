//
//  SZDXManager.h
//  SZDXSDK
//
//  Created by 塔肯 on 2021/4/6.
//
/**
 * 用户显示的广告类型是随机的,因此SDK内集成不同平台广告都要注册APPID
 */
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SZDXSDK/SZDXSDKDefines.h>


NS_ASSUME_NONNULL_BEGIN

@interface SZDXManager : NSObject

/**
 * szdxSdk Version
 */
+ (NSString *)szdxSdkVersion;

/**
 * Appid
 */
+ (void)setSZDXAppId:(NSString *)appId;

/**
 * YES 开启定位 默认NO
 */
+ (void)setiSPosition:(BOOL)flag;




@end

NS_ASSUME_NONNULL_END
