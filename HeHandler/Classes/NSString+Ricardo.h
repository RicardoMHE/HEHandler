//
//  NSString+Ricardo.h
//  CJDBorrow
//
//  Created by Ricardo on 2017/11/23.
//  Copyright © 2017年 Ricardo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Ricardo)

/**
 由字体大小获取文本宽度

 @param font 字体大小
 @return 宽度
 */
- (CGFloat)widthWithFont:(UIFont *)font;
/**
 由宽度和字体大小获取文本高度

 @param width 宽度
 @param font 大小
 @return 文本高度
 */
- (CGFloat)heightWithWidth:(CGFloat)width font:(UIFont *)font;

/**
 每隔多少位加一个空格

 @param spaceBetween 间隔
 @return string
 */
- (NSString *)addSpaceWithSpaceBetween:(NSInteger)spaceBetween;

/**
 在制定的范围添加*符号

 @param range range
 @return string
 */
- (NSString *)replaceAsteriskWithRange:(NSRange)range;

/**
 由string和color创建富文本(前提是字符串包含string)

 @param string 要创建的富文本文字部分
 @param color color
 @return string
 */
- (NSMutableAttributedString *)he_creatAttWithString:(NSString *)string color:(UIColor *)color;

/**
 判断字符串是否为空

 @return bool
 */
- (BOOL)isBlank;

#pragma encryption
@property (nonatomic, copy, readonly) NSString *aesEncryptStrig;
@property (nonatomic, copy, readonly) NSString *aesDecryptString;

/**
 md5

 @return string
 */
- (NSString *)md5String;

/**
 sha1

 @return string
 */
- (NSString *)sha1String;

/**
 *  加密
 *
 *  @param string 需要加密的string
 *
 *  @return 加密后的字符串
 */
+ (NSString *)AES128EncryptStrig:(NSString *)string;

/**
 *  解密
 *
 *  @param string 加密的字符串
 *
 *  @return 解密后的内容
 */
+ (NSString *)AES128DecryptString:(NSString *)string;

/**
 获取当前设备UUID(注意不是UDID)

 @return string
 */
+ (NSString *)uuidString;

#pragma regex
//手机号分服务商
- (BOOL)isMobileNumberClassification;

//手机号有效性
- (BOOL)isMobileNumber;

//邮箱
- (BOOL)isEmailAddress;

//身份证号
- (BOOL)simpleVerifyIdentityCardNum;

@end
