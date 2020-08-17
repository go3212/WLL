#include "FileManager.h"

std::fstream fs;

std::string words_data = "words_data.csv";
std::string words_translation_data = "words_translation_data.csv";

bool fileExists(const std::string& file)
{
	fs.open(file);
	if (fs.is_open())
	{
		fs.close();
		return true;
	}
	else
		return false;
}

void createFiles()
{
	if(!fileExists("words_data.csv"))
	{
		std::ofstream words_data("words_data.csv");
		std::cout << "words_data.csv created succesfully" << std::endl;
	}

	if (!fileExists("words_translation_data.csv")) 
	{
		std::ofstream word_translation("words_translation_data.csv");
		std::cout << "words_translation_data.csv created succesfully" << std::endl;


	}
}

