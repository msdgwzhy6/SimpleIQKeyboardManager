//
//  FLEXNetworkTransactionDetailTableViewController.h
//  Flipboard
//
//  Created by Ryan Olson on 2/10/15.
//  Copyright (c) 2015 Flipboard. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FLEXNetworkTransaction;



// 查看网络详情
@interface FLEXNetworkTransactionDetailTableViewController : UITableViewController

@property (nonatomic) FLEXNetworkTransaction *transaction;

@end
