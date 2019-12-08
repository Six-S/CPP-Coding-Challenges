#include <iostream>
#include <fstream>
#include <vector>
#include <string>

//Explicit "using" directive for string,cout,etc. identifiers
using namespace std;

//declare our functions
string getUserInput();
vector<string> loadTextFile();
string completeWord(string wordToCheck);

int main()
{
    //declare our vars
    // int *array;
    string input;

    //Get our user input
    input = getUserInput();
    cout << "Our word is: " << input << "\n";

    //Make sure we have a value we can use.
    if (!input.empty()){
        //If we have our value, lets do something.
        cout << "We have a value!\n";
        vector<string> words = loadTextFile();

    } else {
        //Otherwise, let's just leave.
        throw invalid_argument("Word to autocomplete cannot be nothing.");
    }


    //remove our array, now that we're done with it.
    // delete [] array;
}

string completeWord(string wordToCheck)
{

}

vector<string> loadTextFile()
{
    //Using vector, we don't need to pre-define our arr length.
    vector<string> wordArray;
    string test;
    string path = "enable1.txt";
    ifstream wordFile(path);

    if (wordFile.is_open())
    {
        cout << "Hello - we are here." << endl;
        string line; 
        while (wordFile >> line)
        {
            cout << line << endl;
            wordArray.push_back(line);
        }

        cout << wordArray.size() << " Is the size of our vector..." << endl;
        return wordArray;
    }
    else
    {
        throw out_of_range("File failed to open. Is it in the right place?");
        return wordArray;
    }

}

string getUserInput()
{
    string input;
    cout << "Word to attempt to autocomplete: ";
    getline(cin, input);

    return input;
}