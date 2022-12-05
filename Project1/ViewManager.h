#pragma once
#include <string>
#include <istream>
#include <ostream>

#include "command.h"

//일일이 다 포함하지 않고, 추상클래스 이용해도 괜찮을 듯
//#include "SecondHandListView.h"
//#include "PartTimeListView.h"
//#include "LifeQueListView.h"
//#include "HobbyListView.h"
//#include "SecondHandArticleView.h"
//#include "PartTimeArticleView.h"
//#include "LifeQueArticleView.h"
//#include "HobbyArticleView.h"

#include "ListView.h"
#include "ArticleView.h"

using namespace std;

namespace TP {
	class ViewManager
	{
	private:
		string userInputString;
		ACTION_KEY actionKey;

	public:
		ViewManager();
		~ViewManager();

		void listView(string newData[][10], ACTION_KEY actKey);
		void articleView(string newData[], ACTION_KEY actKey);
		string userInputCommand(ACTION_KEY actKey);
		string userInputValue();
	};
}

