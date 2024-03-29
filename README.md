## savvy

`savvy` is a word challenge game. This command line game is a fun and interactive game where a player is given a set of empty boxes to fill with combinations from a given set of letters. It is a great way to test your vocabulary and word-building skills!

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

**You're all set!**

## usage

To start the game, run any of the following commands

- run savvy with the default mode `random`
	```bash
	savvy
	```
- run savvy with a defined mode
	```bash
	savvy -m [mode]
	```
- to print a help message on the usage
	```bash
	savvy -h
	```
If run again, the game continues after the last successful challenge. To run the game from a specific challenge, run any of the following commands:

- run with the default mode
	```bash
	savvy -c [challenge]
	```

- run with a defined mode
	```bash
	savvy -m [mode] -c [challenge]
	```
The game will prompt you to enter a set of letters. You can enter any combination of the given set of letters, and the game will generate all possible valid words, based on the available empty boxes, using a pre-defined dictionary of words.

Once you have entered the letters, the game will validate the letters, and if valid, your screen is updated to display the boxes that were filled. Keep entering new sets of letters to have all the empty boxes filled.

## game rules

- empty input displays your progress for the empty boxes and/or boxes filled
- the game will only consider valid english words from a pre-defined dictionary
- words can be of any length, provided it meets the length of available empty boxes. If any valid word was found, the game will display your progress for the empty boxes and/or boxes filled
- enter letters with spaces to make a batch validation of words
- the game will keep track of your progress for all game modes

## contributions

Contributions are welcome! If you have any suggestions, bug reports, or feature requests, please kindly open an issue or submit a pull request. Make sure to follow the project's code of conduct.

## license

This project is licensed under the [GPL-3.0 license](LICENSE)

## acknowledgements

- the game is inspired from similar word games
[word chain game](https://github.com/juniorohanyere/word_chain_game.git), [Word Cookies!](todo)
- the dictionary of valid english words used in the game is sourced from [...](todo)

## demo

![savvy.png](https://github.com/juniorohanyere/savvy/assets/106378800/f647d7d0-6150-44c4-97ef-246163dd1327)
![savvy.png](https://github.com/juniorohanyere/savvy/assets/106378800/99cd5a78-d267-47bd-9733-72a5144a4aa5)

> feel free to customize this README file according to your specific game implementation and requirements. Include any additional sections, instructions, or details that are relevant to your game. Happy Gaming!
