/**
 * Copyright (c) 2016-present, RFTP Technologies Ltd.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class BFTask<__covariant BFGenericType>;

@interface RTAmazon : NSObject

- (instancetype)init;

/**
 Auth token given by amazon.com.
 */

@property (nullable, nonatomic, copy) NSString *authToken;

/**
 Logged in user id
 */

@property (nullable, nonatomic, copy) NSString *userId;

/**
 @return The task, that encapsulates the work being done.
 */
- (BFTask *)authorizeInBackground;

/**
 @return The task, that encapsulates the work being done.
 */
- (BFTask *)deauthorizeInBackground;

@end

NS_ASSUME_NONNULL_END
