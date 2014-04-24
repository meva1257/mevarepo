//
//  DetailViewController.h
//  Beacon App 1
//
//  Created by name on 24/04/2014.
//  Copyright (c) 2014 ___MEVA1257___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
