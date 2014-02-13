//
//  Card.h
//  Practice1
//
//  Created by Michael Toth on 2/13/14.
//  Copyright (c) 2014 Michael Toth. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic) BOOL chosen;
@property (nonatomic) BOOL matched;

@end
