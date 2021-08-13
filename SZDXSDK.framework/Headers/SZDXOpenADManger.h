//
//  SZDXOpenADManger.h
//  SZDXSDK
//
//  Created by mac on 2021/3/15.
//  开屏广告

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SZDXSDK/SZDXSDKDefines.h>
NS_ASSUME_NONNULL_BEGIN

@protocol SZDXOpenAdDelegate <NSObject>


@optional

/**
 * 点击跳过/倒计时按钮事件
 */
- (void)szdxSplashAdSikpClicked;
/**
 * 广告内容点击事件
 */
- (void)szdxSplashAdClicked;

/**
 * 广告物料加载成功
 */
- (void)szdxSplashAdDidLoad;

/**
 * 倒计时为0时会触发此回调
 */
- (void)szdxsplashAdCountdownToZero;
/**
 * 广告关闭回调;
 */
-(void)szdxsplashAdDidClose;

/**
 * 广告展示成功回调;
 */
-(void)szdxSplashAdDidVisible;

/**
 *  广告物料拉取|渲染 失败 error错误码详见SZDXError.h
 */
- (void)szdxSplashAdShowFailure:(NSError *)error;

@end


@interface SZDXOpenADManger: NSObject

+ (SZDXOpenADManger *)shareAdManager;


/** 代理**/
@property (nonatomic, weak) id<SZDXOpenAdDelegate> delegate;
/**
 * slotId:平台对应的广告位ID
 * platform：平台
 */
+ (void)szdxinitDataSplashAdSlotId:(NSString *)slotId PlatformName:(SZDXPlatformName)platform;

+ (void)szdxSplashAdWithDelegate:(nullable id)delegate;

+ (void)loadAdData;

+ (void)render;

@end

NS_ASSUME_NONNULL_END
