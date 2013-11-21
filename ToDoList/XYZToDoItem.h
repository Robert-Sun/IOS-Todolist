//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Ting Sun on 13-11-21.
//  Copyright (c) 2013年 Robert. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
