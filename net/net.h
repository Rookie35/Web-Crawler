#include <stdio.h>
#include <tchar.h>
#include<iostream>
#include<fstream>
#include<string>
#include<regex>
#include<vector>
#include<algorithm>
#include<WinSock2.h>
#include<map>

using namespace std;
#pragma comment(lib,"ws2_32.lib")

string allHtml;//html��ȫ����ҳ
vector<string> photoUrl;//ͼƬ�����ӵ�ַ
vector<string> comUrl;//��ҳ�е����ӵ�ַ
map<string, int> mp;//Ϊ�����ӵ�����

char host[500];
char othPath[800];

SOCKET sock;

bool analyUrl(char* url)
{
	char* pos = strstr(url, "http://");
	if (NULL == pos)
	{
		return false;
	}
	else
	{
		pos += 7;//war.163.com/
	}
	sscanf(pos, "%[`/]%s", host, othPath);
	cout << "host:" << host << " path:" << othPath << endl;
}

void preConnect()//socket ������������
{
	WSADATA wd;
	WSAStartup(MAKEWORD(2,2),&wd);
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_ATOM)
	{
		cout << "�����׽���ʧ�� ������" << WSAGetLastError()
			<< endl;
		return;
	}
}