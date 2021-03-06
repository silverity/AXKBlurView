//
//  AXKViewController.h
//  AXKBlurView
//
//  Created by Alexander Kolov on 10/10/13.
//  Copyright (c) 2013 Alexander Kolov. All rights reserved.
//

@import UIKit;

#import "AXKBlurView.h"

@interface AXKViewController : UIViewController

@property (nonatomic, strong) IBOutlet AXKBlurView *blurView;
@property (nonatomic, strong) IBOutlet UILabel *radiusLabel;
@property (nonatomic, strong) IBOutlet UISlider *slider;
@property (nonatomic, strong) IBOutlet UITableView *tableView;

@end
