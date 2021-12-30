//
//  SZDXADStreamCell.h
//  SZDXSDK
//
//  Created by mac on 2021/3/24.
//  信息流广告tableViewCell

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <SZDXSDK/SZDXSDKDefines.h>
NS_ASSUME_NONNULL_BEGIN

@protocol SZDXADStreamCellDelegate <NSObject>

/**
 * 广告加载完成
 */
- (void)szdxNativeExpressAdDidLoaded;
/**
 * 无广告数据|广告数据请求失败|展示失败
 */
- (void)szdxNativeExpressAdFailure:(NSError *)error;
/**
 * 点击广告
 */
- (void)szdxNativeExpressAdClicked;
/**
 * 广告渲染成功
 */
- (void)szdxNativeExpressAdViewRenderSuccess;


@end


@interface SZDXADStreamCell : UITableViewCell

/**
 * 在需要信息流广告的地方先请求完数据之后在初始化
 */
+ (void)szdxNativeExpressAdLoadSlotId:(NSString *)slotId;


/**
 * 代理
 */
+ (void)szdxNativeExpressAdDelegate:(nullable id)delegate;


/**
 * 获取广告物料 
 */
+ (BOOL)loadAdData;


/**
 * 渲染广告内容
 */
- (void)szdxNativeExpressRenderAdContent:(NSIndexPath *)indexPath withTableView:(UITableView *)tabeView;

/**
 * 广告模板的高度，根据填充内容自适应的高度
 */
- (CGFloat)szdxNativeExpressAdCellHeight;

/**
 * 刷新广告
 */
+ (void)szdxNativeExpressAdReload;


/**销毁*/
+ (void)destruction;


@end

NS_ASSUME_NONNULL_END
