#include <iostream>
#include "parser.h"
#include "dfa.h"
int main(int argc, char* argv[]){
    if(argc<2){
        std::cerr << "No DFA model given!\n";
        return 1;
    }else if(argc <3){
        std::cout << "You need to give some input!\n";
    }else{
        Parser parser(argv[1]);
        DFA dfa(parser.getSections());
        for(size_t i = 2;i<argc;++i){
            std::cout << std::boolalpha;
            std::cout << dfa.accepts(argv[i])<< '\n';
        }
    }
    return 0;
}
