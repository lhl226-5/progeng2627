#include <iostream>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    //Function which merges two sorted vectors together into a single vector without simply
    //appending the two vectors separately and then sorting the resultant vector using a different sorting algorithm
    //but rather using an approach reminiscent of the second stage of a typical merge sort algorithm
    //These variables below denote the next index position that has not been considered in each component vector
    //and hence initialised at 0 since neither vector has been interacted with yet (the corresponding elements
    //designated these index locations are the smallest values in each respective vector that have not been added to the
    //merged list at any given moment)
    merged.clear();
    int next_v1_index = 0;
    int next_v2_index = 0;
    //This loop continues until either vector has exhausted and dispensed all its elements into the combined vector
    while(next_v1_index < v1.size() && next_v2_index < v2.size()){
        if (v1[next_v1_index] <= v2[next_v2_index]){
            //In this instance the smallest value in the first vector is introduced into the combined vector
            //and hence for the next comparison, the next smallest element in the first vector will be inspected
            //thus the rationale regarding the index incrementing by 1, and this approach is similar with the second vector
            //element being less significant likewise
            merged.push_back(v1[next_v1_index]);
            next_v1_index = next_v1_index + 1;
            //This case also considers the possibility that both are equal, hence as a standard precedent imposed, the
            //first vector element is added for consistency, although either value could have potentially been accepted first
        }
        else{
            merged.push_back(v2[next_v2_index]);
            next_v2_index = next_v2_index + 1;
        }

    }
    //These statements attach the rest of the remaining values of the sorted vector that has not been completely inspected
    //capitalising on the fact that both initial vectors are already sorted, and this procedure continues until every value
    //has been integrated into the consolidated, merged vector (hence the maximum bound is when the next smallest index for both
    //component vectors does not exist meaning every element in both vectors have successfully been deposited)
    if(next_v1_index == v1.size()){
        while(next_v2_index != v2.size()){
            merged.push_back(v2[next_v2_index]);
            next_v2_index = next_v2_index + 1;
        }
    }
    else{
        while(next_v1_index != v1.size()){
            merged.push_back(v1[next_v1_index]);
            next_v1_index = next_v1_index + 1;
        }
    }
}

int main(){
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;
    
    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){
        //We can compare the respective contents
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {4, 7, 8, 12};
    v2 = {5, 12, 14, 16, 19};
    expected_output = {4, 5, 7, 8, 12, 12, 14, 16, 19};
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {2, 3, 7, 10, 13, 15};
    v2 = {2, 4, 5, 8, 10, 14, 17, 21, 24, 30, 35};
    expected_output = {2, 2, 3, 4, 5, 7, 8, 10, 10, 13, 14, 15, 17, 21, 24, 30, 35};
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {-4, -1, 0, 5, 13, 15};
    v2 = {-6, -1, 4, 7, 19, 19};
    expected_output = {-6, -4, -1, -1, 0, 4, 5, 7, 13, 15, 19, 19};
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}