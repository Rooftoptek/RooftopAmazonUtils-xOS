/**
 * Copyright (c) 2016-present, RFTP Technologies Ltd.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>
#import <Bolts/BFTask.h>
#import <Rooftop/RTConstants.h>

@interface RTAmazonPrivateUtilities : NSObject

+ (void)safePerformSelector:(SEL)selector onTarget:(id)target withObject:(id)object object:(id)anotherObject;

@end

@interface BFTask (RooftopAmazonUtils)

- (id)pftw_waitForResult:(NSError **)error;

//TODO: (nlutsenko) Look into killing this and replacing with generic continueWithBlock:
- (instancetype)pftw_continueAsyncWithBlock:(BFContinuationBlock)block;
- (instancetype)pftw_continueWithMainThreadUserBlock:(RTUserResultBlock)block;
- (instancetype)pftw_continueWithMainThreadBooleanBlock:(RTBooleanResultBlock)block;
- (instancetype)pftw_continueWithMainThreadBlock:(BFContinuationBlock)block;

@end

/**
 Raises an `NSInternalInconsistencyException` if the `condition` does not pass.
 Use `description` to supply the way to fix the exception.
 */
#define RTAMConsistencyAssert(condition, description, ...) \
do { \
    if (!(condition)) { \
        [NSException raise:NSInternalInconsistencyException \
                    format:description, ##__VA_ARGS__]; \
    } \
} while(0)
