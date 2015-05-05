//
//  ToDoItem.h
//  ToDoList
//
//  Created by Sagar Vemuri on 5/5/15.
//  Copyright (c) 2015 Sagar Vemuri. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
