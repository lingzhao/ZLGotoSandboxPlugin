//
//  ZLSandBox.h
//  ZLGotoSandbox
//
//  Created by 张磊 on 15-1-5.
//  Copyright (c) 2015年 com.zixue101.www. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZLSandBox : NSObject

// 版本
@property (copy,nonatomic) NSString *version;
// 设备
@property (copy,nonatomic) NSString *device;
// 设备+版本的名字
@property (copy,nonatomic) NSString *boxName;
// 展示所有的子分类
@property (strong,nonatomic) NSArray *items;
// 沙盒的路径
@property (strong,nonatomic) NSArray *projectSandBoxPath;

@end
