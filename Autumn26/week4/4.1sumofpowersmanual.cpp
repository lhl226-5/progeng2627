#include <iostream>
double mypow(double base, int exp){
    //This function has been previously composed in the designated task and is to be re-used
    //This function manually calculates a result from an
    //expression of the form x^n and returns it
    double result = 1;
    //initialising at 1 allows for a general "template" for any multiplier
    if (exp < 0){
        //This selection statement is inserted to handle negative integer indices using repeated division
        for (int count = 0; count < -exp; count++){
            //By reversing the sign of the index selected if negative, the condition structure can still be maintained
            //as an incrementing count-controlled iteration similar to its positive counterpart
            result = result / base;
        }
    }
    else{
        //This procedure is selected for every other case, zero-inclusive as the iterative structure can be immediately surpassed
        for (int count = 0; count < exp; count++){
            //The zero-indexed counter is directly counteracted by using an exclusive operator
            //to ensure coherence in the number of iterations required
            result = result * base;
        }
    }
    return result;
}

int sum_of_powers(double x, int n){
    //This function evaluates the collective total of a defined number of power terms with
    //the same specified base number but with increasing integer orders of the base number attached
    //by accumulating each order of a value (x) systematically until the highest order requested (n)
    //has been encountered and conformed to
    double total_sum = 0;
    for (int i = 1; i <= n; i++){
        total_sum = total_sum + mypow(x, i);
    }
    return total_sum;
}

int main(){
    double base_value;
    int highest_order_term, result;
    std::cout << "Enter a base number (n): " << std::endl;
    std::cin >> base_value;
    std::cout << "Enter the highest order of n: " << std::endl;
    std::cin >> highest_order_term;
    result = sum_of_powers(base_value, highest_order_term);
    std::cout << "The sum of the powers of " << base_value << " up to the order " << highest_order_term << " equals " << result << std::endl;
}