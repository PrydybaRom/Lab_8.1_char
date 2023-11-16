#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

// Рахує кількість +
int countSymbolsPlus(char* str) {
    int pCount = 0;
    char* pstr = str;
    while ((pstr = strchr(pstr, '+')) != nullptr) {
        pCount++;
        pstr++;
    }
    return pCount;
}

// Рахує кількість -
int countSymbolsMinus(char* str) {
    int mCount = 0;
    char* pstr = str;
    while ((pstr = strchr(pstr, '-')) != nullptr) {
        mCount++;
        pstr++;
    }
    return mCount;
}

// Рахує кількість =
int countSymbolsEquals(char* str) {
    int eCount = 0;
    char* pstr = str;
    while ((pstr = strchr(pstr, '=')) != nullptr) {
        eCount++;
        pstr++;
    }
    return eCount;
}

// Змінює символи + - = на **
char* changeSymbols(const char* str) {
    int length = strlen(str);
    char* resultArray = new char[length * 2 + 1];

    int j = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '=') 
        {
            strcat(resultArray, "**");
            j += 2;
        }
        else {
            resultArray[j++] = str[i];
            resultArray[j] = '\0';
        }
    }

    return resultArray;
}

int main() {
    const int arraySize = 101;
    char str[arraySize];

    cout << "Enter string:" << endl;
    cin.getline(str, arraySize);

    int pCount = countSymbolsPlus(str);
    int mCount = countSymbolsMinus(str);
    int eCount = countSymbolsEquals(str);

    cout << "Str contained + : " << pCount << endl;
    cout << "Str contained - : " << mCount << endl;
    cout << "Str contained = : " << eCount << endl;

    char* modifiedArray = changeSymbols(str);
    cout << "Modified Array : " << modifiedArray << endl;

    delete[] modifiedArray;

    return 0;
}
