//
//  ViewController.h
//  NHSBugs
//
//  Created by Colin Wren on 26/05/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class GetLocation;

@interface ViewController : UIViewController<UISearchBarDelegate>{
    IBOutlet UITableView *searchtable;
    NSMutableArray *dummyarray;
    GetLocation *grabLocation;
}
@property(nonatomic, retain) NSString *autoLongitude;
@property(nonatomic, retain) NSString *autoLatitude;
-(void)autoLocated:(id)sender;
-(void)manualEntry:(id)sender;
@end
