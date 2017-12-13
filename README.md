# YUConsole

=========
(真机日志调试)
-
[![Travis branch](https://img.shields.io/travis/rust-lang/rust/master.svg)](https://github.com/c6357/YUConsole)
[![CocoaPods](https://img.shields.io/cocoapods/v/YUConsole.svg)](https://github.com/c6357/YUConsole)

![image](https://github.com/c6357/YUConsole/blob/master/01.png)
#![image](https://github.com/c6357/YUConsole/blob/master/02.png)

使用方法
=================
```oc
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    ///建议在真机debug下使用
#ifdef DEBUG
    #if TARGET_OS_IPHONE
        [YUConsole open];
    #endif
    
#else
    ///发布时关闭log
    [YUConsole setHttpLogEnabled:NO];
#endif
    return YES;
}

```
