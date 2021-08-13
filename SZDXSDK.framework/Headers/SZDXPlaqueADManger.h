//
//  SZDXPlaqueADManger.h
//  SZDXSDK
//
//  Created by mac on 2021/3/16.
//  //插屏广告

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SZDXSDK/SZDXSDKDefines.h>
NS_ASSUME_NONNULL_BEGIN
@protocol SZDXPlaqueADMangerDelegate <NSObject>

@optional
/**
 * 关闭按钮
 */
- (void)szdxFullScreenPlaqueAdCloseClicked;

/**
 * 广告点击
 */
- (void)szdxFullScreenPlaqueAdClicked;

/**
 * 广告物料渲染成功完成
 */
- (void)szdxFullScreenPlaqueAdViewRenderSuccess;

/**
 * 广告物料拉取成功;
 */
- (void)szdxFullScreenPlaqueAdDidLoad;

/**
 * 广告显示失败 error错误码详见SZDXError.h
 */
- (void)szdxFullScreenPlaqueAdShowFailur:(NSError *)error;


@end


@interface SZDXPlaqueADManger : NSObject

+ (SZDXPlaqueADManger *)shareAdManager;

/**代理**/
@property (nonatomic, weak) id<SZDXPlaqueADMangerDelegate> delegate;
/**
 * slotId:必填 广告位ID
 * platform:平台
 */
+ (void)szdxinitDataFullScreenPlaqueAdShowSlotId:(NSString *)slotId PlatformName:(SZDXPlatformName)platform;

/**
 * 拉取广告数据
 */
+ (void)loadAdData;

/**
 * 渲染广告
 */
+ (void)render;


/**
 * 代理
 */
+ (void)szdxFullScreenPlaqueAdWithDelegate:(nullable id)delegate;

@end

NS_ASSUME_NONNULL_END
