#include <iostream>
#include <iterator>
#include <vector>
using namespace std;


int main() {
    std::istream_iterator<int> inIt(std::cin);        // begin of input stream
    std::istream_iterator<int> endIt;                 // end-of-stream iterator

    std::vector<int> numbers(inIt, endIt);            // reads until EOF (Ctrl+Z in Windows or Ctrl+D in Linux)


    vector<int> num = { 1,2,3 };
    
   //for (int n : numbers) {
     //   std::cout << n << " ";
    //}


    std::ostream_iterator<int> outIt(std::cout, "|");   // output with a space
    std::copy(numbers.begin(), numbers.end(), outIt);               // write to output stream

  
    return 0;
}

/*
#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = { 10, 20, 30, 40 };

    std::ostream_iterator<int> outIt(std::cout, " ");   // output with a space
    std::copy(v.begin(), v.end(), outIt);               // write to output stream

    return 0;
}
*/