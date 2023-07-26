#include <iostream>
#include <conio.h>
#include <random>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{   
    srand(time(NULL));

    int length;
    int count1 = 0, count2 = 0;
    char secondInput, thirdInput;
    string msg;
    static const char letters[] = 
    "0123456789"
    "abcdefghijklmnopqrstuvwxyz";
    "ABDEFGHIJKLMNOQRTUVWYZ";
    "+-_$~";
    string line;
    
    msg = "Enter legth of line";
    cout << msg << endl;
    
    cin >> length;
    
    
    line.reserve(length);
    
    for (int i = 0; i < length; ++i){
        line += letters[rand() % (sizeof(letters) - 1)];
    }
    
    cout << "Line: " << line << endl;
    
    msg = "Only first letter will be used";
    cout << msg << endl;
    cin >> secondInput;
    
    for (int n = 0; n < length; ++n){
        for(int y = 10; y < sizeof(letters); ++y){
            if (line[n] == letters[y]){
                line[n] = secondInput;
            } 
        }
    }
    
    cout << line << endl;
    
    msg = "Only first letter will be used";
    cout << msg << endl;
    cin >> thirdInput;
    
    for (int m = 0; m < length; ++m){
        for(int l = 0; l <= 9; ++l){
            if (line[m] == letters[l]){
                line[m] = thirdInput;
            } 
        }
    }
    
    cout << line << endl;

    for(int r = 0; r < length; ++r){
        if(line[r] == secondInput){
            count1 += 1;
        }
        if(line[r] == thirdInput){
            count2 += 1;
        }
    }
    
    cout << "Second input symbols (" << secondInput << ") " << "used " << count1 << " times " << endl;
    cout << "Third input symbols (" << thirdInput << ") " << "used " << count2 << " times " << endl;

    return 0;
}
