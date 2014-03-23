//
//  DetailViewController.h
//  Express order
//
//  Created by Simpero on 14-3-23.
//  Copyright (c) 2014年 Simpero LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
