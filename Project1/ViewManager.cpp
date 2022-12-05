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
			//�߰�ǰ ����Ʈ ��� Ŭ���� ȣ��
			SecondHandListView.secondHandListView(newData);
			break;
		case ACTION_KEY::PARTTIME_LIST_VIEW:
			//�˹� ����Ʈ ��� Ŭ���� ȣ��
			PartTimeListView.partTimeListView(newData);
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//��Ȱ���� ����Ʈ ��� Ŭ���� ȣ��
			LifeQueListView.lifeQueListView(newData);
			break;
		case ACTION_KEY::HOBBY_LIST_VIEW:
			//��� ����Ʈ ��� Ŭ���� ȣ��
			HobbyListView.hobbyListView(newData);
			break;
		}
	};

	void ViewManager::articleView(string newData[], ACTION_KEY actKey) {
		switch (actKey) {
		case ACTION_KEY::SECONDHAND_ARTICLE_VIEW:
			//�߰�ǰ �Խù� ��� Ŭ���� ȣ��
			SecondHandArticleView.secondHandArticleView(newData);
			break;

		case ACTION_KEY::PARTTIME_ARTICLE_VIEW:
			//�˹� �Խù� ��� Ŭ���� ȣ��
			PartTimeArticleView.partTimeArticleView(newData);
			break;

		case ACTION_KEY::LIFEQUE_ARTICLE_VIEW:
			//��Ȱ���� �Խù� ��� Ŭ���� ȣ��
			LifeQueArticleView.lifeQueArticleView(newData);
			break;

		case ACTION_KEY::HOBBY_ARTICLE_VIEW:
			//��� �Խù� ��� Ŭ���� ȣ��
			HobbyArticleView.hobbyArticleView(newData);
			break;
		}
	};

	// ��ɾ� �� �� �Է� �ޱ�
	// ex. search �Է� -> apple �Է� = "apple"�� �� �Խñ� �˻�
	string ViewManager::userInputCommand(ACTION_KEY actKey) {
		//��ɾ� �Է� �ޱ�
		switch (actKey) {
		case ACTION_KEY::SECONDHAND_LIST_VIEW:
			//�߰�ǰ ��� ȭ�鿡�� ��ɾ� ȣ��
			return SecondHandListView.userInput();
			break;
		case ACTION_KEY::PARTTIME_LIST_VIEW:
			//�˹� ����Ʈ ��� Ŭ���� ȣ��
			return PartTimeListView.userInput();
			break;
		case ACTION_KEY::LIFEQUE_LIST_VIEW:
			//��Ȱ���� ����Ʈ ��� Ŭ���� ȣ��
			return LifequeListView.userInput();
			break;
		case ACTION_KEY::HOBBY_LIST_VIEW:
			//��� ����Ʈ ��� Ŭ���� ȣ��
			return HobbyListView.userInput();
			break;
		}
	};

	string ViewManager::userInputValue() {
		//��� �� �Է� �ޱ�
	};
}