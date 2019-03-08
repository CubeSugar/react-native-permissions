//
//  RNPLocation.h
//  ReactNativePermissions
//
//  Created by Yonah Forst on 11/07/16.
//  Copyright © 2016 Yonah Forst. All rights reserved.
//
#import "RNPFeature.h"
#ifdef RNP_USE_LOCATION

#import <Foundation/Foundation.h>
#import "RCTConvert+RNPStatus.h"

@interface RNPLocation : NSObject

+ (NSString *)getStatusForType:(NSString *)type;
- (void)request:(NSString *)type completionHandler:(void (^)(NSString *))completionHandler;

@end

#endif
