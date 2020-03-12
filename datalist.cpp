#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "DataAccessor.hpp"

using namespace  std;
using namespace  SampleProject;

int  main( int  argc, char const  *argv[ ] )
{
	std::shared_ptr<DataAccessor>  dataHolder; //指向 DataAccessor 的特殊指標 <--看不出佈局意圖
	dataHolder.reset( new  DataAccessor );

	if( dataHolder->Initialize( ) ) //此 method 目前沒做事，固定傳回 TRUE
	{
		auto  users =  dataHolder->GetUsers( ); //取回內含兩筆用戶資料的 vector

		for( int i=0; i < users.size( ); i++ )
		{
			const char*  tempStr = users[ i ].Name.c_str( ); //將用戶資料裡的用戶名稱取出
			std::cout << tempStr << std::endl;
		}
	}
	return  0;
}

/*
$ g++ DataAccessor.cpp datalist.cpp -o datalist
$ ./datalist 
Mary
John
$
*/
