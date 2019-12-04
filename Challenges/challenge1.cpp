#include <iostream>
#include <vector>
#include <string>

//Explicit "using" directive for string,cout,etc. identifiers
using namespace std;

//declare our functions
string getUserInput();
int completeWord(string wordToCheck);

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
        cout << "We have a value!";
    } else {
        //Otherwise, let's just leave.
        throw invalid_argument("Word to autocomplete cannot be nothing.");
    }


    //remove our array, now that we're done with it.
    // delete [] array;
}

int completeWord(string wordToCheck)
{

}

string getUserInput()
{
    string input;
    cout << "Word to attempt to autocomplete: ";
    getline(cin, input);

    return input;
}