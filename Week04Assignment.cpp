// Week04Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
    // Welcome to the program
    cout << setw(70) << setfill('*') << "*" << endl;
    cout << setw(70) << setfill('*') << " Welcome to my Letter Count Program *****************" << endl;
    cout << setw(70) << setfill('*') << "*" << endl;
    cout << endl;

    // The executable name and at least one argument?
    if (argc < 2) {
        cout << "Error with input args.." << endl;
        return 1;
    }

    // For debugging purposes only
    // Commenting this out so it's not in the output
    /* for (int i = 0; i < argc; i++) {
        cout << i << ":" << argv[i] << endl;
    } */

    // Opens the file and checks to make sure the opening succeeded
    ifstream inFile;
    inFile.open(argv[1]);
    if (!inFile) {
        cout << "Error with file name.." << endl;
        return 1;
    }
    else {
        cout << "Analyzing file \'constitution.txt\'" << endl;
        cout << endl;
    }

    ///////////////////////    
    // Work here with open file.....
    // Declarations that will act as a counter for the vowels
    int aVowels = 0;
    int eVowels = 0;
    int iVowels = 0;
    int oVowels = 0;
    int uVowels = 0;
    // Added more letters
    int cVowels = 0;
    int pVowels = 0;
    int sVowels = 0;

    // I want to read in the lines of the file
    char ch;
    while (!inFile.eof() && inFile >> ch) {
        // Each if statement picks out the respective vowels, accounting for lowercase and uppercase
        // When it gets a match, it increments the respective vowel counter by one
        if (ch == 'a' || ch == 'A') {
            aVowels = aVowels + 1;
        }

        if (ch == 'e' || ch == 'E') {
            eVowels = eVowels + 1;
        }

        if (ch == 'i' || ch == 'I') {
            iVowels = iVowels + 1;
        }

        if (ch == 'o' || ch == 'O') {
            oVowels = oVowels + 1;
        }

        if (ch == 'u' || ch == 'U') {
            uVowels = uVowels + 1;
        }
        // if statements for the new letters I added
        if (ch == 'c' || ch == 'C') {
            cVowels = cVowels + 1;
        }
        if (ch == 'p' || ch == 'P') {
            pVowels = pVowels + 1;
        }
        if (ch == 's' || ch == 'S') {
            sVowels = sVowels + 1;
        }
    }

    // Now we need to add up all of the vowels total
    // Included the total for the new letters 
    int allVowels = aVowels + eVowels + iVowels + oVowels + uVowels + cVowels + pVowels + sVowels;

    // Output
    cout << "The number of A's: " << setw(50) << setfill('.') << '.' << aVowels << endl;
    cout << "The number of E's: " << setw(50) << setfill('.') << '.' << eVowels << endl;
    cout << "The number of I's: " << setw(50) << setfill('.') << '.' << iVowels << endl;
    cout << "The number of O's: " << setw(50) << setfill('.') << '.' << oVowels << endl;
    cout << "The number of U's: " << setw(50) << setfill('.') << '.' << uVowels << endl;
    // Output for new letters
    cout << "The number of C's: " << setw(50) << setfill('.') << '.' << cVowels << endl;
    cout << "The number of P's: " << setw(50) << setfill('.') << '.' << pVowels << endl;
    cout << "The number of S's: " << setw(50) << setfill('.') << '.' << sVowels << endl;
    cout << "The vowel count is: " << setw(49) << setfill('.') << '.' << allVowels << endl;
    
    ///////////////////////

    inFile.close();
    system("pause");
    return 0;
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
