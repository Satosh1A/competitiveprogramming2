#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    int number;
    int heads;
    int tails;
    double successRate;
};

bool comparePersons(const Person& p1, const Person& p2) {
    if (p1.successRate == p2.successRate) {
        return p1.number < p2.number;
    }
    return p1.successRate > p2.successRate;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<Person> people(N);

    for (int i = 0; i < N; i++) {
        std::cin >> people[i].heads >> people[i].tails;
        people[i].number = i + 1;
        people[i].successRate = static_cast<double>(people[i].heads) / static_cast<double>(people[i].heads + people[i].tails);
    }

    std::sort(people.begin(), people.end(), comparePersons);

    for (int i = 0; i < N; i++) {
        std::cout << people[i].number << std::endl;
    }

    return 0;
}
