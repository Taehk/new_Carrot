#pragma once
#include <string>
#include <istream>
#include <ostream>
#include <vector>

#include "command.h"
#include "ViewManager.h"
#include "DomainManager.h"

namespace TP {
	class MainManager
	{
	private:

		string articleData[10];
		string listData[10][10];
		ACTION_KEY actionKey = SECOND_ARGUMENT_TYPE_NAME;
		string inputCommand;
		string inputData;

		ViewManager viewManager;
		DomainManager domainManager;
	public:
		MainManager();
		~MainManager();

		void triggerLoadListView();
		void triggerLoadArticleView();

		void triggerLoadListDomain();
		void triggerLoadArticleDomain();

		void analysisCommand();

	};
}

