//
//  CrashCollection.m
//  PerformanceMonitor
//
//  Created by xingxw on 15/12/11.
//  Copyright © 2015年 Tencent. All rights reserved.
//

#import "CrashCollection.h"
#import <mach/mach.h>

@implementation CrashCollection

- (void)collectionLiveThreadInfo
{
    thread_t thread = mach_thread_self();
    mach_port_deallocate(mach_task_self(), thread);
}

@end
