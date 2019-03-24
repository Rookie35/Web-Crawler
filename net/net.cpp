// net.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "net.h"
#include<queue>
using namespace std;
//界面处理

//获取网页源代码

//解析图片的url

//根据url下载图片

//继续获取网页中的url

//继续获取图片

//结束

void bfs(string beginUrl)
{
	queue<string> q;
	q.push(beginUrl);

	while (!q.empty())
	{
		string cur = q.front();
		q.pop();
		char temp[800];
		strcpy(temp, cur.c_str());
		analyUrl(temp);//主机名+其他链接名

		preConnect();//连接到服务器 GET发送图片数据请求


	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 0;
	while ((i++) <= 30)
	{
		system("color B");
		cout << "*************************\n";
		cout << "*                       *\n";
		cout << "*  百度搜索引擎核心技术  *\n";
		cout << "*         DANNY         *\n";
		cout << "*       2016 08 13      *\n";
		cout << "*************************\n";
		system("CLS");
	}
	cout << "*************************\n";
	cout << "*                       *\n";
	cout << "*  百度搜索引擎核心技术  *\n";
	cout << "*         DANNY         *\n";
	cout << "*       2016 08 13      *\n";
	cout << "*************************\n";
	
	string srul;
	cout << "请输入url,注意http://开始，以/结束";
	cin >> srul;
	CreateDirectory("./img", 0);
	
	return 0;
}

