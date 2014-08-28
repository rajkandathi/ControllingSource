//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Raj Kandathi on 8/28/14.
//  Copyright (c) 2014 Raj Kandathi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
