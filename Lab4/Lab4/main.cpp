//Lab 4 
//Benjamin Stream
//CS202

#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::make_shared;
using std::make_unique;
using std::move;
using std::string;
using std::unique_ptr;
using std::vector;
using std::ifstream;
using std::getline;
using std::istringstream;

int main() {
       ifstream sherlock("text.txt");
    
       string test;
       while (getline(sherlock, test)) {
           cout << test << "\n";
       }

    while (true) {
        cout << std::endl << "Enter an # for amount of copies and a line you would like to be repeated: ";
        string s;
        getline(cin, s);
        istringstream sin(s);
        int n;
        string word;
        sin >> n >> word;
        if (!sin) {
            cout << "you messed up input!\n";
            if (sin.eof())
                cout << "number than word!\n";
            sin.clear();
        }
        else if (n <= 0) {
            cout << "You cant add negative or zero lines!\n";
            sin.clear();
        }
        
        else {
            cout << std::endl << "The word " << word << " was added " << n << " times to end of file." << std::endl;
            while (n > 0)
            {
                std::ofstream outFile("text.txt", std::ios::app);
                outFile << word << std::endl;
                n--;
            }
        }
        if (word == "exit")
            break;
    }
}