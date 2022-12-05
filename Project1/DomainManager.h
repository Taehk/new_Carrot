#pragma once
#include <string>
#include <istream>
#include <ostream>

#include "command.h"

namespace TP
{
	class DomainManager
	{
	private:
	public:
		DomainManager();
		~DomainManager();

		string [10][10] loadListData(string newData, ACTION_KEY actKey);
		string [10] loadArticleData(string newData, ACTION_KEY actKey);
	};
}


