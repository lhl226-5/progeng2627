#include <iostream>
int main(){
    //This function allows an integer to be submitted and the corresponding multiplication table is generated
    //up to the number that is referenced in a tabular structure or layout as presented using nested loops
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        //This automatically allows each multiplier to be defined systematically for each row present
        for(int j = 1; j <= n ; j++){
            std::cout << (i*j) << "\t";
            //Each multiplication operation is evaluated as a distinct result allowing each result to be incremented
            //by the intended magnitude (the multiplier variable) without a requirement to manually conduct repeated addition
        }
        std::cout << std::endl;
        //allows for another row to be commenced
    }

}