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

string allHtml;//html的全部网页
vector<string> photoUrl;//图片的链接地址
vector<string> comUrl;//网页中的链接地址
map<string, int> mp;//为了链接的排重

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

void preConnect()//socket 进行网络连接
{
	WSADATA wd;
	WSAStartup(MAKEWORD(2,2),&wd);
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_ATOM)
	{
		cout << "创建套接字失败 错误码" << WSAGetLastError()
			<< endl;
		return;
	}
}