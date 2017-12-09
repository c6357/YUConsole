//
//  YUConsole.h
//  YUConsole
//
//  Created by donglai on 2017/12/8.
//  Copyright © 2017年 BruceYu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

//! Project version number for YUConsole.
FOUNDATION_EXPORT double YUConsoleVersionNumber;

//! Project version string for YUConsole.
FOUNDATION_EXPORT const unsigned char YUConsoleVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <YUConsole/PublicHeader.h>

#define YULog(format, ...) YUConsoleLog([NSString stringWithFormat:@"%@ function : %s line : %d %@",YUFileName([NSString stringWithFormat:@"%s",__FILE__]),__FUNCTION__,__LINE__,format],## __VA_ARGS__)

FOUNDATION_EXPORT void YUConsoleLog(NSString *format, ...);
FOUNDATION_EXPORT NSString *YUFileName(NSString *fileName);

/**
 <#Description#>
 */
@interface YUConsole : NSObject

/**
 <#Description#>
 */
+ (void)open;

/**
 <#Description#>
 */
+ (void)exit;

@end
