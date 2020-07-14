//
//  CustomString.h
//  TaoFang
//
//  Created by mxw on 16/1/18.
//  Copyright © 2016年 House365. All rights reserved.
//0.1.0

#import <Foundation/Foundation.h>

@interface CustomString : NSObject

+ (BOOL)isEmptyString:(NSString *)_str;
+ (BOOL)isEmptyStringBySpace:(NSString*)_str;
+ (BOOL)isNotEmptyString:(NSString *)_str;
+ (BOOL)isMobileNumber:(NSString *)text;
@end
