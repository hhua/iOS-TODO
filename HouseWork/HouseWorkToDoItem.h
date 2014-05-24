//
//  HouseWorkToDoItem.h
//  HouseWork
//
//  Created by Alan Hua on 5/22/14.
//  Copyright (c) 2014 EngineLab. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HouseWorkToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
