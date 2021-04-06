// CountLineNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

class LineCount {
    std::string *file1;
    std::string *file2;
    std::vector<std::string>files{ file1, file2 };
public:
    std::vector<int> count_line_in_files(const std::vector<std::string>& files) {
        std::vector<int> results;
        char c;

        for (const auto& file : files) {
            int line_count = 0;

            std::ifstream in(file);

            while (in.get(c)) {
                if (c == '\n') {
                    line_count++;
                }
            }
            results.push_back(line_count);
            
        }
        return results;
    }
};
class countFile1 {
public:
    void ShowNumnber() {
        int number = 2;
    }

};
class countFile2 {
public:
    void DeleteNumber() {
        int number = 4;
    }

};
class countFile3 {
public:
    void newLine() {
        int  lineNumber = 6;
    }
};

int main()
{
    LineCount lc;
    lc.count_line_in_files();


    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
