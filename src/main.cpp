#include <iostream>
#include "Lyrium.h"


int askUser(const char *request);

int main()
{
    int current_gold;
    int stop_gold;

    current_gold = askUser("How much gold do you have now? ");
    stop_gold = askUser("How much gold do you want? ");

    Lyrium::LyriumCounter lc = Lyrium::LyriumCounter(current_gold, stop_gold);
    lc.showIngredientsQuantity();
    lc.showBalance();

    return 0;
}

int askUser(const char *request)
{
    std::cout << request;
    int answer;
    std::cin >> answer;

    // Implicit conversion to int.
    // This actually is bad. User can write something which will
    // overflow int or just can't be converted.
    return answer;
}