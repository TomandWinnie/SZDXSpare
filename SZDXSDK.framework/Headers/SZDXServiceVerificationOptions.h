//
//  SZDXServiceVerificationOptions.h
//  SZDXSDK
//
//  Created by 塔肯 on 2021/10/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SZDXServiceVerificationOptions : NSObject

//用户的userid,可选
@property(nonatomic, copy, nullable) NSString *userIdentifier;

//服务器端验证回调中包含的可选自定义奖励字符串
@property(nonatomic, copy, nullable) NSString *customRewardString;

@end

NS_ASSUME_NONNULL_END
