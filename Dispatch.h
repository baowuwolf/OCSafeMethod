//
//  Dispatch.h
//  SafePrograming
//
//  Created by wangchao9 on 2017/4/26.
//  Copyright © 2017年 wangchao9. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Dispatch : NSObject
+ (void)ui:(void (^)())block;
@end
