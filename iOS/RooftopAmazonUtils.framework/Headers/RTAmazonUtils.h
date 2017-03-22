/**
 * Copyright (c) 2016-present, RFTP Technologies Ltd.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <Rooftop/RTConstants.h>
#import <Rooftop/RTUser.h>


@class BFTask<__covariant BFGenericType>;

NS_ASSUME_NONNULL_BEGIN

@interface RTAmazonUtils : NSObject

+ (void)loginWithCompletion:(void (^)(BOOL success))completionBlock;

+ (BOOL)isLinkedWithUser:(nullable RTUser *)user;


@end

NS_ASSUME_NONNULL_END

