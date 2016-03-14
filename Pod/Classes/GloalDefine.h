//
//  GloalDefine.h
//  PodsTest
//
//  Created by xingxw on 15/11/20.
//  Copyright © 2015年 JD. All rights reserved.
//

#ifndef GloalDefine_h
#define GloalDefine_h

// @interface
#define singleton_interface(className) \
+ (className *)shared##className;


// @implementation
#define singleton_implementation(className) \
static className *_instance; \
+ (id)allocWithZone:(NSZone *)zone \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [super allocWithZone:zone]; \
}); \
return _instance; \
} \
+ (className *)shared##className \
{ \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
_instance = [[self alloc] init]; \
}); \
return _instance; \
}

#endif /* GloalDefine_h */
