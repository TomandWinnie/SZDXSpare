//
//  SZDXNativeAdView.h
//  SZDXSDK
//
//  Created by 塔肯 on 2021/4/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SZDXADModel;

@interface SZDXNativeAdView : UIView

/*
 required.
 Root view controller for handling ad actions.
 */
@property (nonatomic, weak) UIViewController *rootViewController;

/**
 required
 */
- (void)render;



@end

NS_ASSUME_NONNULL_END
