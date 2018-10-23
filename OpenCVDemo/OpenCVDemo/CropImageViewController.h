//
//  CropImageViewController.h
//  OpenCVDemo
//
//  Created by boljonggo on 2018/10/18.
//  Copyright © 2018 boljonggo. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CropImageViewController : UIViewController

- (instancetype)initWithImage:(UIImage *)image;

@property (nonatomic, strong) UIImage *image;

@end

NS_ASSUME_NONNULL_END
