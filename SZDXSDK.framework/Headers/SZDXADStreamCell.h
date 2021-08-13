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

@required
/** adcount>0则有广告物料数据**/
- (void)szdxNativeExpressAdIsAdValid:(NSInteger)adcount;

@optional
/**
 * 点击广告事件
 */
- (void)szdxNativeExpressAdClicked;

/**
 * 无广告数据|广告数据请求失败|展示失败
 */
- (void)szdxNativeExpressAdFailure:(NSError *)error;

@end


@interface SZDXADStreamCell : UITableViewCell

/**
 * 在需要信息流广告的地方先请求完数据之后在初始化
 */
+ (void)szdxNativeExpressAdLoadSlotId:(NSString *)slotID PlatformName:(SZDXPlatformName)platform;


/**
 * 代理
 */
+ (void)szdxNativeExpressAdDelegate:(nullable id)delegate;


/**
 * 获取广告物料
 */
+ (void)loadAdData;


/**
 * 显示广告
 */
- (void)szdxNativeExpressAdShowAdStreamIndexPath:(NSIndexPath *)indexPath withTableView:(UITableView *)tabeView;

/**
 * 广告模板的高度，根据填充内容自适应的高度
 */
- (CGFloat)szdxNativeExpressAdCellHeight;

/**
 * 刷新广告
 */
+ (void)szdxNativeExpressAdReload;

/**
 * 用于判断当前广告是否正在显示
 */
+ (void)szdxNativeExpressAdScrollViewDidScroll:(UIScrollView *)scrollView;


@end

NS_ASSUME_NONNULL_END
