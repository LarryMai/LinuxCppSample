#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "DataAccessor.hpp"

using namespace std;
using namespace SampleProject;

int main( int argc, char const *argv[ ] )
{
    std::shared_ptr<DataAccessor>  dataHolder;
    dataHolder.reset( new DataAccessor );

    if( dataHolder->Initialize( ) )
    {
       auto users =  dataHolder->GetUsers( );
       for( int i=0; i < users.size( ); ++i )
       {
           const char*  tempStr = users[ i ].Name.c_str( );
           std::cout << tempStr << std::endl;
       }
    }
    return 0;
}
