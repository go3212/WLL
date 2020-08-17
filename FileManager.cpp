#include "FileManager.h"

std::fstream fs;

const std::string n_words = "words_data.csv";
const std::string n_words_translation = "words_translation_data.csv";

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

void writeFile(const std::string& string, const std::string& w_file)
{
	std::ofstream file((std::string&)w_file, std::ifstream::binary);
	file.write(string.data(), string.length());
	file.close();
}

void createFiles()
{
	if(!fileExists((std::string)n_words))
	{
		std::ofstream words_data("words_data.csv");
		std::cout << "words_data.csv created succesfully" << std::endl;
		words_data.close();
	}

	if (!fileExists("words_translation_data.csv")) 
	{
		std::ofstream word_translation(n_words_translation);
		std::cout << "words_translation_data.csv created succesfully" << std::endl;
		word_translation.close();

	}
}

//CSV STRUCTURE WORDS
/*
	(word) | (Added on) | (Last time used)
	comida, 12/06/2020, 12/07/2020 

	string, vector, std::vector ltu
*/

//CSV reader
//CSV writer

struct date
{
	unsigned int day, month, year;
};

struct Word
{
	std::string word;
	date added_on;
	date last_time_used;
};

/*
Word* word = new Word;

delete[] word;
*/