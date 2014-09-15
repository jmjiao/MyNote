//
//  ToDoItem.h
//  MyNote
//
//  Created by apple on 14-9-14.
//  Copyright (c) 2014年 连云港电子口岸. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
