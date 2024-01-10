#include "GameManager.h"
#include <iostream>
#include <string>
#define MAX_WORDS 10

GameManager::GameManager()
{
	//fac lista cu toate cuvintele 
	AllWords_List[0] = "ICOANĂ";
	AllWords_List[1] = "MAȘINĂ";
	AllWords_List[2] = "CONFERINȚĂ";
	AllWords_List[3] = "CURSOR";
	AllWords_List[4] = "SINONIM";
	AllWords_List[5] = "MARCĂ";
	AllWords_List[6] = "FANTOMĂ";
	AllWords_List[7] = "PĂMÂNT";
	AllWords_List[8] = "FOIȘOR";
	AllWords_List[9] = "TASTATURĂ";

	//fac desenele Hangman_art
    const std::string HangmanArtDrawings[7] = {
       "   + - - - +\n"
       "  |        |\n"
       "  |         \n"
       "  |         \n"
       "  |         \n"
       "  |         \n"
       "==========",
       "   + - - - +\n"
       "  |        |\n"
       "  |        O\n"
       "  |         \n"
       "  |         \n"
       "  |         \n"
       "==========",
       "   + - - - +\n"
       "  |        |\n"
       "  |        O\n"
       "  |        |\n"
       "  |         \n"
       "  |         \n"
       "==========",
       "   + - - - +\n"
       "  |        |\n"
       "  |        O\n"
       "  |       /|\n"
       "  |         \n"
       "  |         \n"
       "==========",
       "   + - - - +\n"
       "  |        |\n"
       "  |        O\n"
       "  |       /|\\\n"
       "  |         \n"
       "  |         \n"
       "==========",
       "   + - - - +\n"
       "  |        |\n"
       "  |        O\n"
       "  |       /|\\\n"
       "  |       / \n"
       "  |         \n"
       "==========",
       "   + - - - +\n"
       "  |        |\n"
       "  |        O\n"
       "  |       /|\\\n"
       "  |       / \\\n"
       "  |         \n"
       "==========",
    };
}

std::string GameManager::GetWordFromList(int word_index)
{
    return AllWords_List[word_index];
}

std::string GameManager::GetDrawing(int drawing_index)
{
    return HangmanArtDrawings[drawing_index];
}
