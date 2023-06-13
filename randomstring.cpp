// eightysixdd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //int min = 0;
    //int max = 61;
    int min = 33;
    int max = 126;
    char val_ = 0;
    int val = 0;
    int randnum = 0;
    int randnum_ = 0;
    int randnum__ = 0;
    double accum0 = 0;
    double accum1 = 0;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    char greeting[220];

    cout << "Enter a string: ";
    cin >> greeting;
    string mystring = greeting;

    int n = mystring.length();

    char* array = &mystring[0];

    int dict[62] = { 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122 };

    for (int count = 1; count <= 1853875076; ++count)
    {
        //srand(accum1);

        for (int len = 0; len < (n + 1); ++len)
        {

            if (len == n) {

                array[len] = '\0';

            }
            else
            {

                val_ = array[len];

                randnum = rand() % (max - min + 1) + min;

                randnum_ += (int(val_) - randnum);
                randnum__ += abs(int(val_) - randnum);

                //array[len] = dict[randnum];
                array[len] = randnum;

            }
        }

        std::string s(array);

        accum0 += randnum_;
        accum1 += randnum__;

        srand(accum1);

        //run(input, n, val_, randnum, randnum_, randnum__, min, max, accum0, accum1);

        //std::cout << intro+s << " " << float(accum0) / count << " " << float(accum1) / count << "\n";
        std::cout << s << " " << float(accum0) << " " << float(accum1) << "\n";

    }
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
