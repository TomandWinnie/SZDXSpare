//
//  SZDXNativeAdManger.h
//  SZDXSDK
//
//  Created by 塔肯 on 2021/4/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class SZDXADModel;
@class SZDXNativeAdView;

NS_ASSUME_NONNULL_BEGIN
@protocol SZDXNativeAdMangerDelegate <NSObject>

@optional
/**
 *  广告物料拉取成功
 */
- (void)szdxNativeExpressAdSuccessToLviews:(NSArray<__kindof SZDXNativeAdView *> *)views;

/**
 * 广告物料拉取失败
 */
- (void)szdxNativeExpressAdFailToLoadError:(NSError *_Nullable)error;


@end


@interface SZDXNativeAdManger : NSObject

/**
 * 初始化
 * slotId 广告位ID
 * adWidth 广告视图的宽度(宽度为0将自适应若素材不规范时将影响显示效果),  高度自适应
 */
- (instancetype)initWithSlot:(NSString * _Nullable)slotId withAdWidth:(CGFloat)adWidth;

/**
 *
 */
@property (nonatomic,weak)id<SZDXNativeAdMangerDelegate> delegate;

/**
 *
 * 加载广告数据
 * count 广告条数 现阶段暂时为1条
 */
- (void)loadAdDataWithCount:(NSInteger)count;

/**
 * 本地数据渲染
 */
- (void)renderDataAdModel:(SZDXADModel *)mode;


@end

NS_ASSUME_NONNULL_END
