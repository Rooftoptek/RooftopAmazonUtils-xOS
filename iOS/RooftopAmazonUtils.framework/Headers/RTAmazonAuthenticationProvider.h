/**
 * Copyright (c) 2016-present, RFTP Technologies Ltd.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <Rooftop/RTUserAuthenticationDelegate.h>

@class BFTask<__covariant BFGenericType>;
@class RTAmazon;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const AWSIdentityProviderAmazon;

@interface RTAmazonAuthenticationProvider : NSObject <RTUserAuthenticationDelegate>

@property (nonatomic, strong, readonly) RTAmazon *amazon;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithAmazon:(RTAmazon *)amazon NS_DESIGNATED_INITIALIZER;
+ (instancetype)providerWithAmazon:(RTAmazon *)amazon;

- (BFTask *)authenticateAsync;

- (NSDictionary *)authDataWithAmazonToken:(NSString *)amazonToken userId:(NSString *)userId;

@end

NS_ASSUME_NONNULL_END
