//
//  SZDXRewardVideoAdView.h
//  SZDXSDK
//
//  Created by 塔肯 on 2021/7/19.
// 激烈视频广告

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SZDXRewardVideoAdViewDelegate <NSObject>

///广告物料加载成功
- (void)szdxRewardedVideoAdDidLoad;

///广告物料下载完成 建议下载完成在展示,体验更好
- (void)szdxRewardedVideoAdDidDownLoadVideo;

///视频正常播放完成时可触发此回调方法，当广告播放发生异常时，不会进入此回调;
- (void)szdxRewardedVideoAdDidPlayFinish;

///用户关闭广告时会触发此回调，
- (void)szdxRewardedVideoAdDidClose;

///模版激励视频广告已经展示
- (void)szdxRewardedVideoAdDidVisible;
///点击回调方法
- (void)szdxRewardedVideoAdDidClick;
/**
 视频广告各种错误信息回调
 @param error 具体错误信息
 */
- (void)szdxRewardVideoAdDidFailWithError:(NSError *)error;

@end

@interface SZDXRewardVideoAd : NSObject

///广告位ID
@property (nonatomic ,copy) NSString *slotId;

@property (nonatomic ,weak) id<SZDXRewardVideoAdViewDelegate> delegate;

/*
 拉取广告数据
 */
- (void)loadAdData;

/**
 展示广告方法
 @param rootViewController 用于 present 激励视频 VC
 */
- (void)showAdFromRootViewController:(UIViewController *)rootViewController;


@end

NS_ASSUME_NONNULL_END
