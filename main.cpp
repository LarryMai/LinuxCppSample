#include <iostream>
//#include <string>
//#include <vector>
#include <regex>
//#include <memory>
//#include "DataAccessor.hpp"

using namespace std;
//using namespace SampleProject;

int main( int argc, char const *argv[ ] )
{
/*	int count = 10;
	for( int i=0; i < count; ++i )
	{
		printf( "[%d] = %d\n", i, (i+1)*(i+1) );
	} //依序印出 1 ~ 10 的平方
*/
    std::string  pattern = "([A-Za-z]+)([0-9]+)"; //準備轉換成正規式物件
    std::string  input   = "KKKtry23";
    regex  reg( pattern ); //前方為英文字母,後方為數字 <--用兩組小括號設定了分割點

    smatch  sm;
    if( regex_match( input, sm, reg ) )
    {
       for( int i=0; i < sm.size( ); ++i )
       {
           std::string  value = sm[ i ];
           std::cout << "sm[ " << i << " ] = " << value << "  <-- i = " << i <<  std::endl;
       }
    }
 
/*    std::shared_ptr<DataAccessor> dataHolder;
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
    std::cout << "Hello World" << std::endl;
*/    return 0;
}

/*
$ g++ main.cpp -o main
$ ./main
sm[ 0 ] = test123  <-- i = 0
sm[ 1 ] = test  <-- i = 1
sm[ 2 ] = 123  <-- i = 2   由此得出 sm.size( ) = 3
$ g++ main.cpp -o main
$ ./main
sm[ 0 ] = KKKtry23  <-- i = 0 <--格式沒變
sm[ 1 ] = KKKtry  <-- i = 1
sm[ 2 ] = 23  <-- i = 2
$　若 input 字串的格式不符合,就篩不到 sm
*/
