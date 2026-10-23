#include <iostream>
double mypow(double base, int exp){
    //Thiis function manually calculates a result from an
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

int main(){
    //Testing examples with different combinations of base and index
    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "0.5^(-2): " << mypow(0.5, -2) << std::endl;
    std::cout << "2^(-4): " << mypow(2, -4) << std::endl;

    //Sum of indices procedure but utilising the newly constructed function as aforementioned
    double x, n, accumulated_index_terms;
    accumulated_index_terms = 0;
    std::cout << "Enter a base number: " << std::endl;
    std::cin >> x;
    std::cout << "Enter a maximum index number: " << std::endl;
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        accumulated_index_terms = accumulated_index_terms + mypow(x, i);
    }
    std::cout << "Sum of the base number indices up to the order " << n << " inclusive: " << accumulated_index_terms << std::endl;
}

