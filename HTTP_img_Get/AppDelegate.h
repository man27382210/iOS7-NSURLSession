//
//  AppDelegate.h
//  HTTP_img_Get
//
//  Created by man27382210 on 13/10/4.
//  Copyright (c) 2013年 man27382210. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (copy) void (^backgroundSessionCompletionHandler)();


@end
