//
//  BHLocationAnnotation.h
//  BeeHive
//
//  Created by Zhenyi ZHANG on 2014-03-08.
//  Copyright (c) 2014 Zhenyi Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import "BHLocation.h"

@interface BHLocationAnnotation : NSObject
+(BHLocationAnnotation *)annotationForLocation:(BHLocation *)location;
@property (nonatomic,strong) BHLocation *location;
@end