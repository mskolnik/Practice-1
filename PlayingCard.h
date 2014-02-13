//
//  PlayingCard.h
//  Practice1
//
//  Created by Michael Toth on 2/13/14.
//  Copyright (c) 2014 Michael Toth. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card {
    
}
@property (nonatomic, strong) NSString *suit;
@property (nonatomic) NSUInteger rank;
+ (NSArray *)validSuits;
+ (NSArray *)rankStrings;
+ (NSUInteger)maxRank;
@end
