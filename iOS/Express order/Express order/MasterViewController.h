//
//  MasterViewController.h
//  Express order
//
//  Created by Simpero on 14-3-23.
//  Copyright (c) 2014年 Simpero LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
