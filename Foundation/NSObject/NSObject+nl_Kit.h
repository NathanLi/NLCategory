//
//  NSObject+nl_Kit.h
//  jobsradar
//
//  Created by nathan@hoomic.com on 15/5/22.
//  Copyright (c) 2015年 Hoomic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSObject+CodingSupport.h"
#import "NSObject+Reflex.h"
#import "NSObject+nl_associatedObject.h"

@interface NSObject (nl_Kit)

/**
 *  @brief  Returns the size of instances of a self.
 *
 *  @return The size in bytes of instances of the class cls
 */
+ (NSUInteger)nl_sizeInstance;

/**
 *  @brief  Returns the size of self.
 *
 *  @return The size in bytes of self;
 */
- (NSUInteger)nl_sizeInstance;

@end
