#include "DataAccessor.hpp"

namespace  SampleProject
{
	bool  DataAccessor::Initialize( )
	{
		return  true;
	}

	vector<UserInfo>  DataAccessor::GetUsers( )
	{
		std::vector<UserInfo>  data;
		UserInfo  user0 = { "Mary" };
		UserInfo  user1 = { "John" };
		data.push_back( user0 );
		data.push_back( user1 );
		return  data;
	}
}
