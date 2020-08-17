#include "word.h"

std::string word::inSpanish()
{
	return w_Spanish;
}

std::string word::inSpanish(std::string& translation)
{
	w_Spanish = translation;

	return w_Spanish;
}
