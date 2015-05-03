//
//  RecipeCollectionViewController.h
//  RecipePhoto
//
//  Created by tho dang on 2015-04-27.
//  Copyright (c) 2015 ThoDang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeCollectionViewController : UICollectionViewController
@property (weak, nonatomic) IBOutlet UIBarButtonItem *shareButton;
- (IBAction)ShareButtonTapped:(id)sender;




@end
