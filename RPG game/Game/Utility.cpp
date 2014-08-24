#include "Utility.h"

string intToStr(int intNumber)
{
    char retStr[256];

    itoa(intNumber, retStr, 10);

    return retStr;
}

int StrToInt(const char* strNumber)
{
    int retInt;

    retInt = atoi(strNumber);

    return retInt;
}

template <typename T>
void sortVec (vector<T>& vec)
{
    //booleans for telling if we are done
    bool exit = false;
    bool done = false;

    T temp; //variable to temporarily hold contents

    int counter; //the incrementer
    int vecPosition; //the current position in the array being sorted

    while (done != true) //while not done
    {
        for (counter = 1; counter < vec.size(); counter++) //loop through the contents
        {
            vecPosition = counter;

            //if not done sorting and a switch is found, swap them
            while (vecPosition > 0 && vec.at(vecPosition - 1) > vec.at(vecPosition))
            {
                temp = vec.at(vecPosition);
                vec.at(vecPosition) = vec.at(vecPosition - 1);
                vec.at(vecPosition - 1) = temp;
                vecPosition--;
                exit = false;
            }
        }
        //if exit is not changed to false in the for loop it is sorted so it is done.
        if (exit == true)
        {
            done = true;
        }
        else
        {
            exit = true;
        }
    }
}

int intInput(int minim, int maxim, string whatIsInput)
{
    int input = 0;
    bool goodcin = false;

    //make sure the user is doing correct input
    while (goodcin != true)
    {
        //ask for input and get it
        cout << whatIsInput << endl;
        cin >> input;

        //error check
        if (!cin || input > maxim || input < minim)
        {
            cout << "ERROR: USER CANNOT READ" << endl;
            cin.clear();
            cin.ignore (200, '\n');
            continue;
            goodcin = false;
        }
        else
        {
            goodcin = true;
        }
    }
    //return good input
    return input;
}

string strInput(string whatIsInput)
{
    string input;
    bool goodcin = false;

    //make sure the user is doing correct input
    while (goodcin != true)
    {
        //ask for input and get it
        cout << whatIsInput << endl;
        cin >> input;

        //error check
        if (!cin)
        {
            cout << "ERROR: USER CANNOT READ" << endl;
            cin.clear();
            cin.ignore (200, '\n');
            continue;
            goodcin = false;
        }
        else
        {
            goodcin = true;
        }
    }
    //return good input
    return input;
}

int randRange(int minum, int maxim)
{
    int retRand = (rand() % (maxim - minum)) + minum;

    return retRand;
}
