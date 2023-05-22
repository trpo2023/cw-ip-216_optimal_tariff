#include "RadioBut.cpp"
#include <fstream>
#include <iostream>

class GiveRes {
private:


public:
    GiveRes()
    {
    }
  

    void parcer(std::string value)
    {
        long unsigned i = 0;
        std::string time;
        char* pEnd;
        name = "";
        while (value[i] != ' ') {
            name += value[i];
            i++;
        }
        while (value[i] == ' ') {
            i++;
        }
        while (value[i] != ' ') {
            time += value[i];
            i++;
        }
        ans1Set(strtol(time.c_str(), &pEnd, 10));
        time = "";
        while (value[i] == ' ') {
            i++;
        }
        while (value[i] != ' ') {
            time += value[i];
            i++;
        }
        ans2 = strtol(time.c_str(), &pEnd, 10);
        time = "";
        while (value[i] == ' ') {
            i++;
        }
        while (value[i] != ' ' && value[i] != '\0') {
            time += value[i];
            i++;
        }
        ans3 = time;
        ans4 = strtol(time.c_str(), &pEnd, 10);
    }

    
};
