## savvy

savvy is a word challenge game. This command line game is a fun and interactive game where a player is given a set of empty boxes to fill with combinations from a given set of letters. It is a great way to test your vocabulary and word-building skills!

## installation

- clone the repository to your local machine
```bash
git clone https://github.com/juniorohanyere/savvy.git
```

- navigate to the project directory
```bash
cd savvy
```

- install the required dependencies
```bash
sudo apt install clang
sudo apt install make
```

- install savvy with make
```bash
make
sudo make install
```

you're all set!

## usage

to start the game, run any of the following commands

run savvy with the default category `random`
```bash
savvy
```
run savvy with a defined category
```bash
savvy -c [category]
```
to print a help message on the usage
```bash
savvy -h
```

the game will prompt you to enter a set of letters. You can enter any combination of the given set of letters, and the game will generate all possible valid words, based on the available empty boxes, using a pre-defined dictionary of words.

once you have entered the letters, the game will validate the letters, and if valid, your screen is updated to display the boxes that were filled. Keep entering new sets of letters to have all the empty boxes filled.

## game rules

- empty input displays your progress for the empty boxes and/or boxes filled
- the game will only consider valid english words from a pre-defined dictionary
- words can be of any length, provided it meets the length of available empty boxes. If any valid word was found, the game will display your progress for the empty boxes and/or boxes filled
- enter letters with spaces to make a batch validation of words
- the game will keep track of your progress for all game categories

## contributions

contributions are welcome! If you have any suggestions, bug reports, or feature requests, please kindly open an issue or submit a pull request. Make sure to follow the project's code of conduct.

## license

this project is licensed under the [GPL-3.0 license](LICENSE)

## acknowledgements

- the game was inspired from similar word games
[word chain game](https://github.com/juniorohanyere/word_chain_game.git), [Word Cookies!](todo)
- the dictionary of valid english words used in the game was sourced from [...](todo)

## demo

https://github.com/juniorohanyere/savvy/assets/106378800/26e4ef37-cdc2-44c0-bd19-ad06a8c6f683

> feel free to customize this README file according to your specific game implementation and requirements. Include any additional sections, instructions, or details that are relevant to your game. Happy Gaming!
