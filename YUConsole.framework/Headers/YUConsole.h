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

//#ifdef DEBUG
#define YULog(format, ...) YUConsoleLog([NSString stringWithFormat:@"%@ : %s : %d : %@",[[NSString stringWithFormat:@"%s",__FILE__] lastPathComponent],__FUNCTION__,__LINE__,format],## __VA_ARGS__)
//#else
//#define GGLog(frmt, ...)
//#endif

//#ifdef DEBUG
//#define YULog(FORMAT, ...) fprintf(stderr,"\n %s:%d   %s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String],__LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
//#else
//#define NSLog(...)
//#endif


FOUNDATION_EXPORT void YUConsoleLog(NSString *format, ...);

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
