// net.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "net.h"
#include<queue>
using namespace std;
//���洦��

//��ȡ��ҳԴ����

//����ͼƬ��url

//����url����ͼƬ

//������ȡ��ҳ�е�url

//������ȡͼƬ

//����

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
		analyUrl(temp);//������+����������

		preConnect();//���ӵ������� GET����ͼƬ��������


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
		cout << "*  �ٶ�����������ļ���  *\n";
		cout << "*         DANNY         *\n";
		cout << "*       2016 08 13      *\n";
		cout << "*************************\n";
		system("CLS");
	}
	cout << "*************************\n";
	cout << "*                       *\n";
	cout << "*  �ٶ�����������ļ���  *\n";
	cout << "*         DANNY         *\n";
	cout << "*       2016 08 13      *\n";
	cout << "*************************\n";
	
	string srul;
	cout << "������url,ע��http://��ʼ����/����";
	cin >> srul;
	CreateDirectory("./img", 0);
	
	return 0;
}

