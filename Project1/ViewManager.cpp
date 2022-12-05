#include "ListView.h"
#include "ArticleView.h"
#include "ViewManager.h"

namespace TP
{
	ViewManager::ViewManager() {

	};

	void ViewManager::listView(string newData[][10], ACTION_KEY actKey) {
		switch (actKey) {
		case ACTION_KEY::SECONDHAND_LIST_VIEW:
			//중고품 리스트 출력 클래스 호출
			SecondHandListView.secondHandListView(newData);
			break;
		case ACTION_KEY::PARTTIME_LIST_VIEW:
			//알바 리스트 출력 클래스 호출
			PartTimeListView.partTimeListView(newData);
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//생활정보 리스트 출력 클래스 호출
			LifeQueListView.lifeQueListView(newData);
			break;
		case ACTION_KEY::HOBBY_LIST_VIEW:
			//취미 리스트 출력 클래스 호출
			HobbyListView.hobbyListView(newData);
			break;
		}
	};

	void ViewManager::articleView(string newData[], ACTION_KEY actKey) {
		switch (actKey) {
		case ACTION_KEY::SECONDHAND_ARTICLE_VIEW:
			//중고품 게시물 출력 클래스 호출
			SecondHandArticleView.secondHandArticleView(newData);
			break;

		case ACTION_KEY::PARTTIME_ARTICLE_VIEW:
			//알바 게시물 출력 클래스 호출
			PartTimeArticleView.partTimeArticleView(newData);
			break;

		case ACTION_KEY::LIFEQUE_ARTICLE_VIEW:
			//생활정보 게시물 출력 클래스 호출
			LifeQueArticleView.lifeQueArticleView(newData);
			break;

		case ACTION_KEY::HOBBY_ARTICLE_VIEW:
			//취미 게시물 출력 클래스 호출
			HobbyArticleView.hobbyArticleView(newData);
			break;
		}
	};

	// 명령어 및 값 입력 받기
	// ex. search 입력 -> apple 입력 = "apple"이 들어간 게시글 검색
	string ViewManager::userInputCommand(ACTION_KEY actKey) {
		//명령어 입력 받기
		switch (actKey) {
		case ACTION_KEY::SECONDHAND_LIST_VIEW:
			//중고품 목록 화면에서 명령어 호출
			return SecondHandListView.userInput();
			break;
		case ACTION_KEY::PARTTIME_LIST_VIEW:
			//알바 리스트 출력 클래스 호출
			return PartTimeListView.userInput();
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//생활정보 리스트 출력 클래스 호출
			return LifequeListView.userInput();
			break;
		case ACTION_KEY::HOBBY_LIST_VIEW:
			//취미 리스트 출력 클래스 호출
			return HobbyListView.userInput();
			break;
		}
	};

	string ViewManager::userInputValue() {
		//명령 값 입력 받기
	};
}