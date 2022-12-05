#include "ArticleDBManager.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace TP {

	/*벡터를 class에 저장*/
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

	/*텍스트 파일 형식 article을 벡터에 저장*/
	void ArticleDBManager::ArticleTextToClass() {
		articleClass article1;

		std::ifstream inputfile; //읽기 변수 선언
		inputfile.open("00100.txt"); //파일 오픈

		std::string line;
		std::vector<std::string> articleVector; //문자열 vector

		if (!inputfile.is_open()) {
			std::cout << "파일을 찾을 수 없습니다." << std::endl;
			return;
		}

		if (inputfile.is_open()) {
			for (int i = 0;getline(inputfile, line);i++) {
				std::cin >> articleVector[i]; //\n 기준 토큰화
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