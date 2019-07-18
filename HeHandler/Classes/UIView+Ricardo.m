//
//  UIView+Ricardo.m
//  CJDBorrow
//
//  Created by Ricardo on 2017/11/22.
//  Copyright © 2017年 Ricardo. All rights reserved.
//

#import "UIView+Ricardo.h"

@implementation UIView (Ricardo)

#pragma mark - X
- (void)setHe_x:(CGFloat)he_x {
    CGRect rect = self.frame;
    rect.origin.x = he_x;
    self.frame = rect;
}

- (CGFloat)he_x {
    return self.frame.origin.x;
}

#pragma mark - Y
- (void)setHe_y:(CGFloat)he_y {
    CGRect rect = self.frame;
    rect.origin.y = he_y;
    self.frame = rect;
}

- (CGFloat)he_y {
    return self.frame.origin.y;
}

#pragma mark - Width
- (void)setHe_width:(CGFloat)he_width {
    CGRect rect = self.frame;
    rect.size.width = he_width;
    self.frame = rect;
}

- (CGFloat)he_width {
    return self.frame.size.width;
}

#pragma mark - Height
- (void)setHe_height:(CGFloat)he_height {
    CGRect rect = self.frame;
    rect.size.height = he_height;
    self.frame = rect;
}
- (CGFloat)he_height {
    return self.frame.size.height;
}

#pragma mark - centerX
- (void)setHe_centerX:(CGFloat)he_centerX {
    CGPoint center = self.center;
    center.x = he_centerX;
    self.center = center;
}

- (CGFloat)he_centerX {
    return self.center.x;
}

#pragma mark - centerY
- (void)setHe_centerY:(CGFloat)he_centerY {
    CGPoint center = self.center;
    center.y = he_centerY;
    self.center = center;
}

- (CGFloat)he_centerY {
    return self.center.y;
}


+ (instancetype)he_loadViewfromNib {
    return [[NSBundle mainBundle] loadNibNamed:NSStringFromClass(self) owner:nil options:nil].firstObject;
}


- (BOOL)isDisplayedInScreen {
    
    if (self == nil) {
        return false;
    }
    
    CGRect screenRect = [UIScreen mainScreen].bounds;
    // 转换view对应window的Rect
    CGRect rect = [self convertRect:self.frame fromView:self.window];
    
    if (CGRectIsEmpty(rect) || CGRectIsNull(rect)) {
        return false;
    }
    
    // 若view 隐藏
    if (self.hidden) {
        return false;
    }
    
    // 若没有superview
    if (self.superview == nil) {
        return false;
    }
    
    // 若size为CGrectZero
    if (CGSizeEqualToSize(rect.size, CGSizeZero)) {
        return false;
    }
    
    // 获取 该view与window 交叉的 Rect
    CGRect intersectionRect = CGRectIntersection(rect, screenRect);
    
    if (CGRectIsEmpty(intersectionRect) || CGRectIsNull(intersectionRect)) {
        return false;
    }
    
    return true;
}


@end
