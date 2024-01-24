#include <iostream>

using namespace std;

int main() {
    unsigned cents;
    
    cout << "Welcome to the change calculator!" << endl;
    cout << "Insert an amount of cents: ";
    cin >> cents;
    
    unsigned int reais = cents / 100;
    unsigned int centsAfterReais = cents % 100;
    
    unsigned int fiftyCents = centsAfterReais / 50;
    unsigned int centsAfterFifty = centsAfterReais % 50;
    
    unsigned int twentyFiveCents = centsAfterFifty / 25;
    unsigned int centsAfterTwentyFive = centsAfterFifty % 25;
    
    unsigned int tenCents = centsAfterTwentyFive / 10;
    unsigned int centsAfterTen = centsAfterTwentyFive % 10;   
    
    unsigned int fiveCents = centsAfterTen / 5;
    
    unsigned int oneCents = centsAfterTen % 5;

    cout << "----------------------------------------" << endl;
    cout << "Cents Needed: " << cents << endl;
    cout << "----------------------------------------" << endl;
    cout << "You may deliver the following change: " << endl;  
    cout << "Real coins             : " << reais << endl;
    cout << "Fifty cents coins      : " << fiftyCents << endl;
    cout << "Twenty five cents coins: " << twentyFiveCents << endl;
    cout << "Ten cents coins        : " << tenCents << endl;
    cout << "Five cents coins       : " << fiveCents << endl;
    cout << "One cent coins         : " << oneCents << endl;
    return 0;
}
    /*******************************************************
     ********************** Algorithm **********************
     *******************************************************
     * ask the user to insert the amount of centavos
     * receive the ammount of centavos
     * divide the ammount of centavos em 100 to discover how many reais will be necessary
     * receive the module of that division to discover how many centavos are left
     * repeat the same process for coins of 50, 25, 10, 5 and 1 centavos
     * output the results
     */