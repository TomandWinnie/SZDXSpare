//
//  SZDXBannerAdView.h
//  SZDXSDK
//
//  Created by 塔肯 on 2021/10/30.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SZDXBannerAdView;

@protocol SZDXBannerAdViewDelegate <NSObject>

//** 横幅广告数据拉取成功 */
- (void)szdxBannerViewDidLoad;
//** 各种错误失败回调 */
- (void)szdxBannerViewAdFailured:(NSError *)error;
//** 横幅广告曝光成功*/
- (void)szdxBannerViewExposed;
//** 横幅点击 */
- (void)szdxBannerViewClicked;
//** 关闭横幅广告 */
- (void)szdxBannerViewDidClosed;

@end

@interface SZDXBannerAdView : UIView

///若高度自适应,height传0
- (instancetype)szdxInitWithSlotID:(NSString *)slotId
            rootViewController:(UIViewController *)rootViewController
                            adSize:(CGRect)rect;

@property (nonatomic ,weak) id<SZDXBannerAdViewDelegate>delegate;

- (void)loadAndShow;

@end

NS_ASSUME_NONNULL_END
