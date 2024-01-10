#pragma once
#include <string>
#define MAX_WORDS 10

class GameManager
{
private:
	std::string AllWords_List[MAX_WORDS];
	const std::string HangmanArtDrawings[7];

public:
	GameManager();
	std::string GetWordFromList(int word_index);
	std::string GetDrawing(int drawing_index);

};