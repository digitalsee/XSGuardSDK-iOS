//
//  LegoSandBoxSDK.h
//  LegoSandBox
//
//  Created by apple on 2019/10/29.
//  Copyright © 2019 NQSky. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LegoSandBoxSDK : NSObject

+ (void) initEMMWithAPPKey:( NSString * _Nonnull)appKey sandboxKey:( NSString * _Nonnull)sanboxKey;
+ (NSDictionary *) buildInfo;

@end

NS_ASSUME_NONNULL_END
