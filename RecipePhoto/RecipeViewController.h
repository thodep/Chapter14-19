//
//  RecipeViewController.h
//  RecipePhoto
//
//  Created by tho dang on 2015-04-29.
//  Copyright (c) 2015 ThoDang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RecipeViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *recipeImageView;


- (IBAction)close:(id)sender;
@property (weak,nonatomic)NSString *recipeImageName;

@end
