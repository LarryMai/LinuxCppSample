#include "DataAccessor.hpp"

namespace  SampleProject
{
	bool  DataAccessor::Initialize( )
	{
		return true;
	}

	vector<UserInfo>  DataAccessor::GetUsers( )
	{
		std::vector<UserInfo>  data;
		UserInfo  user0 = { "Cage" };
		UserInfo  user1 = { "Page" };
		data.push_back( user0 );
		data.push_back( user1 );
		return  data;
	}
}
