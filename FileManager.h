#pragma once

#include <iostream>
#include <fstream>


void createFiles();
bool fileExists(const std::string& file);

void writeFile(const std::string& string, const std::string& w_file);
//void writeFile(const std::string& string);