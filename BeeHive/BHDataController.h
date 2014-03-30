//
//  BHDataController.h
//  BeeHive
//
//  Created by Zhenyi ZHANG on 2014-03-07.
//  Copyright (c) 2014 Zhenyi Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BHLocationDetailViewController.h"

@class BHLocationDetailViewController;

@interface BHDataController : NSObject

@property (nonatomic, strong) NSArray *buildingList;
@property (nonatomic, strong) NSArray *locationList;
@property (nonatomic, strong) NSDictionary *locationStats;
@property (assign) BOOL connectionLost;
+(id)sharedDataController;

-(void)fetchBuildingsForViewController:(UIViewController *)viewController;
-(void)fetchLocationStatForViewController:(UIViewController *)viewController;
-(void)fetchStatForLocation:(BHLocationDetailViewController *)locationDetailViewController;

@end
