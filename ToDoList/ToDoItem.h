//
//  ToDoItem.h
//  ToDoList
//
//  Created by Fisher on 1/18/14.
//  Copyright (c) 2014 Fisher Adelakin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
