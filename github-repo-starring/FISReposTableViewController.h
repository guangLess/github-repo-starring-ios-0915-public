//
//  FISReposTableViewController.h
//  
//
//  Created by Joe Burgess on 5/5/14.
//
//

/*
 when call Internet related session, almost always finish with a completion block.
 __block NSString * x = @""; pass the varible to the block. 
 @"%@/user/starred/%@?client_id...  if put / before ? it wont work.
 */

#import <UIKit/UIKit.h>

@interface FISReposTableViewController : UITableViewController

@end
