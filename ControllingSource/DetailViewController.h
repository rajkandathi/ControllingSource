//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Raj Kandathi on 8/28/14.
//  Copyright (c) 2014 Raj Kandathi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
