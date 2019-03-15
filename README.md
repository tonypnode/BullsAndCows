# Cows and Bulls

### Concept
Object of the game is for the player to guess the isogram within a maximum number of tries.
  * Isogram is a word that has no repeating letters
  
When the game starts, instruction will be displayed

When the player enters a guess (string), the response is:
  * the number of Bulls; the number of correct letters in the correct place
  * the number of Cows; the number of correct letters in the wrong place
  
If the player enters the correct word, the game is over and the player has won

The player guesses until they either enter the correct word, or they run out of guesses. 

When the maximum number of guesses is reached and the player has NOT entered the correct
word, the game will notify they player that they have lost and will ask them if they want
to play again.


### Implementation requirements

* Need a list of isograms
* Feedback after every keystroke
    * If duplicate letter is entered, notify "Not an isogram"
* Keep track of number of guesses
* Need to randomly select word
    * Should be able to select length of the word
* If length is selected, need to filter list of words to that length
before selecting it


