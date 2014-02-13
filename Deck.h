//
//  Deck.h
//  Practice1
//
//  Created by Michael Toth on 2/13/14.
//  Copyright (c) 2014 Michael Toth. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;
- (Card *)drawRandomCard;
@end
