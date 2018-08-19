#include<iostream>
#include <string>
#include <vector>
#include <regex>
#include <memory>
#include "DataAccessor.hpp"
using namespace std;
using namespace SampleProject;
int main(int argc, char const *argv[])
{
    /* code
     */

    int count = 10;

    for(int i=0;i< count ;++i)
    {
        printf("[%d] = %d\n", i , (i+1)*(i+1) );
    }

    std::string pattern = "([A-Za-z]+)([0-9]+)";
    std::string input = "test123";
    regex reg(pattern);

    smatch sm;
    if(regex_match(input,sm,reg))
    {
       for(int i=0; i< sm.size();++i)
       {
           std::string value = sm[i];
           std::cout << value << i <<  std::endl;
       }
    }
 
    std::shared_ptr<DataAccessor> dataHolder;
    dataHolder.reset(new DataAccessor);

    if(dataHolder->Initialize())
    {
       auto users =  dataHolder->GetUsers();
       for(int i =0; i< users.size();++i)
       {
           const char * tempStr = users[i].Name.c_str();
           std::cout << tempStr << std::endl;
       }
    }
    std::cout << "Hello World" << std::endl;
    return 0;
}
