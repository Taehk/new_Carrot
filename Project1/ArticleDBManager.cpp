#include "ArticleDBManager.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace TP {

	/*���͸� class�� ����*/
	class articleClass {
	private:
		std::string articleUserID;
	public:
		std::string articleType;
		std::string articleUserName;
		std::string articleTitle;
		std::string articleWritingTime;
		std::string articleLocation;
		std::string articleInterestNum;
		std::string articleComment;
	};

	/*�ؽ�Ʈ ���� ���� article�� ���Ϳ� ����*/
	void ArticleDBManager::ArticleTextToClass() {
		articleClass article1;

		std::ifstream inputfile; //�б� ���� ����
		inputfile.open("00100.txt"); //���� ����

		std::string line;
		std::vector<std::string> articleVector; //���ڿ� vector

		if (!inputfile.is_open()) {
			std::cout << "������ ã�� �� �����ϴ�." << std::endl;
			return;
		}

		if (inputfile.is_open()) {
			for (int i = 0;getline(inputfile, line);i++) {
				std::cin >> articleVector[i]; //\n ���� ��ūȭ
			}
		}

		article1.articleType = articleVector[0];
		article1.articleUserName = articleVector[1];
		article1.articleTitle = articleVector[2];
		article1.articleWritingTime = articleVector[3];
		article1.articleLocation = articleVector[4];
		article1.articleInterestNum = articleVector[5];
		article1.articleComment = articleVector[6];


	}

}