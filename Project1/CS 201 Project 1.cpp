/*
This program allow users to input a series of ducks' characteristics and determine which kind of duck match user's description.

All information comes from the website:https://www.whatbird.com/birdexpert/StateColorSize/1/birdexpert.aspx
*/



#include <iostream>

using namespace std;

int main()
{
    char choice1, choice2, choice3;
    cout << "This program helps identify some California ducks" << endl
        << "The information is taken from https://www.whatbird.com/birdexpert/StateColorSize/1/birdexpert.aspx" << endl << endl
        << "Enter the letter for the color of the bird:" << endl
        << "b. Brown" << endl
        << "r. Rust" << endl
        << "p. Purple" << endl;
    cin >> choice1;  //user input color of the duck
    switch (choice1) {
    case 'b':  //if user input color = Brown
        cout << "Enter the letter for the size of the bird:" << endl
            << "m. Medium (9-16 inches)" << endl
            << "l. Large (16-32 inches)" << endl;
        cin >> choice2;  //user input size of the duck, if color = Brown
        switch (choice2) {  
        case 'm':  //if user input size = Medium
            cout << "That looks like a Baikal Teal";  
            break;
        case 'l':  //if user input size = Large
            cout << "Does the duck have white underparts? (y/n):";
            cin >> choice3;  //user input the duck have white underparts or not, if the duck is Brown and Large
            switch (choice3) {
            case 'y':  //if user input the duck have white underparts
                cout << "That looks like a Taiga Bean-Goose";
                break;
            case 'n':  //if user input the duck don't have white underparts
                cout << "That looks like an American Black Duck";
                break;
            default: //invalid input
                cout << choice3 << " is not a valid choice";
                break;
            }
            break;
        default: //invalid input
            cout << choice2 << " is not a valid choice";
            break;
        }
        break;
    case 'r': //if user input color = Rust
        cout << "That looks like a Black-bellied Whistling-Duck";
        break;
    case 'p': //if user input color = Purple
        cout << "That looks like a Purple Gallinule";
        break;
    default: //invalid input
        cout << "This program does not cover the color " << choice1;
    }

    return 0;
}
