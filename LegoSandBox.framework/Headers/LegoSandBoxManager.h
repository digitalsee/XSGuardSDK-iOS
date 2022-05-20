//
//  LegoSandBoxManager.h
//  UMID
//
//  Created by LiangGuoQiang on 2019/10/29.
//  Copyright © 2019 NQSky. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, EMMAppCurrentStatus) {
    EMMAppCurrentStatus_NoActivation = 0,  //未激活
    EMMAppCurrentStatus_Activated,         //已激活
};

typedef void(^LogFilter)(NSString *logContent);

@protocol LegoSandBoxDelegate <NSObject>

@optional

- (void)appSessionCurrentStatusChanged:(EMMAppCurrentStatus)currentStatus;

@end

@interface LegoSandBoxManager : NSObject

  
/// 进入激活流程
/// @param serverIP <#serverIP description#>
/// @param port <#port description#>
/// @param userId 用户id
/// @param token 用户密码
/// @param umid umid
/// @param tenantID 租户id
/// @param completionHandler 激活流程结束后的回调
+ (void) activateEMMWithServerIP:(NSString *_Nonnull)serverIP  port:(NSString *_Nonnull)port userId:(NSString *_Nonnull)userId userToken:(NSString *_Nonnull)token umid:(NSString *_Nonnull)umid  tenantID:(NSString *_Nonnull)tenantID  completionHandler:(void(^)(EMMAppCurrentStatus currentStatus, NSError * __nullable error))completionHandler;

 
/// 返回当前激活状态
+ (EMMAppCurrentStatus) queryEMMStatus;



/// 激活状态变化代理
/// @param delegate <#delegate description#>
+ (void) setLegoSandBoxDelegate:(id <LegoSandBoxDelegate> _Nonnull)delegate;


@end

NS_ASSUME_NONNULL_END
