/*
    Cohesion.cpp

    Ordering and variable cohesion
*/

#include <vector>
#include <string>

struct GradeItem {
    std::vector<std::string> names;
    std::vector<int> scores;
    double average;
};

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

    // variable ordering & style #3
    // @cohesion Informational
    {
        // exercises
        std::vector<std::string> exerciseNames;
        std::vector<int> exercises;
        double exerciseAverage;

        // tests
        std::vector<std::string> testNames;
        std::vector<int> tests;
        double testAverage;
    }

    // variable ordering & style #4
    // @cohesion Informational
    {
        GradeItem exercises;
        GradeItem tests;
    }

    return 0;
}
