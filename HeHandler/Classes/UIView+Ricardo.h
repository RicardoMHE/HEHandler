//
//  UIView+Ricardo.h
//  CJDBorrow
//
//  Created by Ricardo on 2017/11/22.
//  Copyright © 2017年 Ricardo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Ricardo)
/**
 view的X值
 */
@property CGFloat he_x;
/**
 view的Y值
 */
@property CGFloat he_y;
/**
 view的width
 */
@property CGFloat he_width;
/**
 view的height
 */
@property CGFloat he_height;
/**
 view的中心点X值
 */
@property CGFloat he_centerX;
/**
 view的中心点Y值
 */
@property CGFloat he_centerY;

/**
 以类名加载nib文件中的视图
 
 @return 视图
 */
+ (instancetype)he_loadViewfromNib;

/**
 判断一个视图是否在手机的可视范围内

 @return bool
 */
- (BOOL)isDisplayedInScreen;


- (CGRect)he_relativeFrameForScreen;

@end
