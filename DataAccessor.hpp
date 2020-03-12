#pragma once

#include <string>
#include <vector>
#include <map>

using namespace  std;

namespace  SampleProject
{
	class UserInfo
	{
		public:
			std::string                           Name;
			std::map< std::string, std::string >  Properties;
	}; //可否改成 struct <--比較簡潔

	class DataAccessor
	{
		public:
			bool              Initialize( );
			vector<UserInfo>  GetUsers( );
		private:
			vector<UserInfo>  _cacheUser;
	};
};
