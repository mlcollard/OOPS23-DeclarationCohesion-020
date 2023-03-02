/*
    Cohesion.cpp

    Ordering and variable cohesion
*/

#include <vector>
#include <string>

int main() {

    // variable ordering & style #1
    // @cohesion Logical
    {
        std::vector<std::string> exerciseNames;
        std::vector<std::string> testNames;

        std::vector<int> exercises;
        std::vector<int> tests;

        double exerciseAverage;
        double testAverage;
    }

    // variable ordering & style #2
    // @cohesion Logical
    {
        std::vector<std::string> exerciseNames, testNames;

        std::vector<int> exercises, tests;

        double exerciseAverage, testAverage;
    }

    return 0;
}
