Practice and Review for Test 1 on Feb. 24, 2014

We are going to create a playing card object first called Card.  The base class is UIObject.  (By the way, in iOS7 there is a shortcut to 

#import <Foundation/Foundation.h> which is 

@import Foundation

in case you didn’t know)

Write your class with the following properties; 
1.	NSString called contents
2.	BOOL called matched
3.	BOOL called chosen

They are all nonatomic.  Only on can be strong, which one?  (obvious) why?  Because primitive types are not stored on the heap so there is no reason to tell the compiler how to treat the storage for them in the heap. 

Declare a public method called match which takes one argument of the Card class.  (It’s public because it’s in the header file) 

Implement the match method.  The method should return an integer representing how good a match the passed card is to the card that is receiving the message.   The method should return a 1 when the argument matches and a 0 if it doesn’t.   For example, if the argument to matched is called aCard, the test might be 

If ([aCard.contents isEqualToString:self.contents]) {…} 

Create a class called Deck which is a subclass of NSObject.

Declare two methods for Deck
1.	a void function accepting two arguments; a Card object and a boolean  object  called atTop
2.	a method which returns a Card object called drawRandomCard

import the Card.h file in Deck.h

Declare an NSMutable array called cards as an instance variable. 

Declare two void functions, one called addCard:atTop: and one called addCard:

The first function takes two arguments; a Card object and a boolean called atTop.
The second function takes one argument which is a Card object.

Implement these two functions.  The first inserts the Card object at the index=0 location in the array called cards, the second just adds the object to the array. 

Declare a function in Deck.h called drawRandomCard which returns a Card object and has no arguments. 

Create a function called cards which returns the array of cards and initializes it if it doesn’t exist yet. 

In drawRandomCard, create a random index using arc4random() and using the modulo operator with the number of cards in the deck to insure the index doesn’t go beyond bounds. 

Set a Card object to the card pointed to by the random index. 

Remove the card from the array and return the pointer to that card. 

Subclass your Card class into a class called PlayingCard.

Add two properties to your playing card class
1.	NSString called suit
2.	NSUInteger called rank

Synthesize suit and set it equal to _suit. (NOTE: we are doing this because we are creating both the setter and getter for our property.  If you don’t create the setter and getter, the compiler will do this for you) 

Add a setter to your Deck object called setSuit  which takes one NSString argument called suit.

In a class method called validSuits, return an array of 4 strings “♥” “♣” “♦” and “♠” which you select from the Special Characters in the Edit menu in Xcode. 

Make validSuits a public class method. 

In the setter for the card suit property, check to see if the string that was passed in is included in one of the four strings in the array returned by validSuits . 

Create a getter for the suit property which returns @”?” if the suit is not set or the suit property if it is set. 

Create a method called rankStrings which has one integer argument called rank.  rankStrings returns a string for a given rank.  The rank is an integer from  0 to 13.  The rank of 0 returns @”?”.  1 returns “A”,  2 returns “2”, 12 returns “Q”, 13 returns “K”.  

Create a method called contents which  returns the rank string for the card appended with the suit of the card.  

Make an NSUInteger class method called maxRank which returns the maximum rank of a playing card

Create a setter for the rank property in PlayingCard and use maxRank to verify that the value is not exceeding the maximum rank for the class. 

Create a new class called PlayingCardDeck and use Deck as the base class.

Create an initializer for the class called init. 

Import PlayingCard.h into PlayingCardDeck

In the initializer, create a deck of cards by iterating over the valid suits and ranks to create a new PlayingCard and set the suit and rank of the new card to the iterated value.  Use the addCard method to add the playing card to the deck. 












