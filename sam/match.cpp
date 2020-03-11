#include <iostream>
#include <regex>

using namespace  std;

int  main( int  argc, char const  *argv[ ] )
{
	std::string  pattern = "([A-Za-z]+)([0-9]+)"; //準備轉換成正規式物件
	std::string  input   = "KKKtry23";
	regex  reg( pattern ); //前方為英文字母,後方為數字 <--用兩組小括號設定了分割點

	smatch  sm;
	if( regex_match( input, sm, reg ) )
	{
		for( int i=0; i < sm.size( ); i++ )
		{
			std::string  value = sm[ i ];
			std::cout << "sm[ " << i << " ] = " << value << "  <-- i = " << i <<  std::endl;
		}
	}
	return  0;
}

/*
$ g++ maatch.cpp -o match
$ ./match
sm[ 0 ] = test123  <-- i = 0
sm[ 1 ] = test  <-- i = 1
sm[ 2 ] = 123  <-- i = 2   由此得出 sm.size( ) = 3
$ g++ match.cpp -o match
$ ./match
sm[ 0 ] = KKKtry23  <-- i = 0 <--格式沒變
sm[ 1 ] = KKKtry  <-- i = 1
sm[ 2 ] = 23  <-- i = 2
$　若 input 字串的格式不符合,就篩不到 sm
*/