// lc_2769.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + 2 * t;
    }
};

int main()
{
    
    Solution S;

    int resultado = S.theMaximumAchievableX(4, 1);

    std::cout << resultado;

    return 0;
}


