#include <iostream>
#include <string>
using namespace std;


string firstSentence(string x) {
 
    return x.substr(0, x.find(".") + 1);
}

int main () {
    cout << firstSentence("This is the first sentence. This is the second sentence.") << endl;
    
    return 0;
}

