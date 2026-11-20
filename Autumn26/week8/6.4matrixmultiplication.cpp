#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// This is useful for string manipulation
#include <sstream>

// To set precision when printing
#include <iomanip>

std::vector<double> line_to_vector(std::string s){

    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;

    // a stringstream can be used as an intermediate placeholder to allow for
    // values to constantly be introduced and written into the vector, this provides
    // similar functionality to other stream methods
    // such as std::cout or something of type
    // std::ifstream or std::ofstream

    ss << s;
    while(ss >> tmp){
        // std::stod converts from string to double
        out.push_back(std::stod(tmp));
    }
    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file){

    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()){
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    // std::getline reads a whole line as a string
    // by default the separator is the newline
    // rather than any whitespace
    while(std::getline(infile, line)){
        out.push_back(line_to_vector(line));
    }

    return out;
}

double dot_product(const std::vector<double>& first_vector, const std::vector<double>& second_vector){
    //Function which determines the scalar product between two vectors received; this is necessary
    //since the evaluation of matrix multiplication involves implementing the dot product on multiple occasions
    //for each row of the first matrix against each column of the second matrix, with both extracted as one-dimensional
    //vectors to allow for the procedure to occur correctly; the intersection of the respective row and column number
    //of the two original matrices are used to allocate a particular position to the output result
    double scalar_product = 0;
    for (int index = 0; index < first_vector.size(); index++){
        scalar_product = scalar_product + (first_vector[index] * second_vector[index]);
    }
    //The formula for the dot product is essentially expressed as the accumulated sum of the products of each
    //pair of elements in the two corresponding vectors at the same index position
    return scalar_product;
} 

std::vector<double> select_column(int column_number, const std::vector<std::vector<double>>& two_dimensional_matrix){
    //Function which extracts a particular column of an abstracted two-dimensional matrix (composed of two nested vectors)
    //by using two-dimensional indexing to specify the column required (which is submitted as an argument into a parameter)
    std::vector<double> required_column_as_vector;
    for (int row_number = 0; row_number < two_dimensional_matrix.size(); row_number++){
        //The outer vector which is represented with the identifier consists of individual rows and hence
        //the size would determine the number of rows and the respective row indices to be regarded
        required_column_as_vector.push_back(two_dimensional_matrix [row_number][column_number]);
    }
    return required_column_as_vector;
}

// sum of two matrices
std::vector<std::vector<double>> matrix_multiplication
(const std::vector<std::vector<double>>& m1, const std::vector<std::vector<double>>& m2
    //These define two vectors of vectors (essentially a two-dimensional matrix with the outer
    //vector representing each row, whilst the inner vector represents the individual columns
    //and the elements in each corresponding row from left to right)
)
{ 
    std::vector<std::vector<double>> out;
    std::vector<double> next_column_retrieved;
    double next_element;

    for(int i = 0; i < m1.size(); i++){
        std::vector<double> new_row;
        for(int j = 0; j < m1[0].size(); j++){
            next_column_retrieved = select_column(j, m2);
            next_element = dot_product(m1[i], next_column_retrieved);
            new_row.push_back(next_element);
        }
        out.push_back(new_row);

    }

    return out;

}

std::string matrix_to_string(std::vector<std::vector<double>> m){

    std::stringstream out;
    // to set precision when printing
    out << std::fixed << std::setprecision(2);

    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[0].size(); j++){
            out << (m[i][j]) << "\t";
        }
        out << "\n";
    }

    // getting the std::string representation 
    // of this std::stringstream object
    return out.str();
}

int main(int argc, char* argv[]){

    if(argc != 3){
        std::cout << "two arguments needed" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<std::vector<double>> m1 = read_matrix_from_file(argv[1]);
    std::vector<std::vector<double>> m2 = read_matrix_from_file(argv[2]);

    std::vector<std::vector<double>> m3 = matrix_multiplication(m1, m2);

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "*" << std::endl << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl << std::endl;
    std::cout << matrix_to_string(m3) << std::endl;

}