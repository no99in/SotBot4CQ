#pragma once
#include "stdafx.h"

#include "string"

#include "cqp.h"

#include "Member.h"
#include "Group.h"
#include "GroupMsg.h"
#include "Log.h"

class Sot
{
public:

	// ��ȡӦ�ó��������·��
	static std::string getAppDirectory();

	// ��ȡ��ǰ�˺ŵ�TOKEN
	static int32_t getToken();

	// ��ȡ��ǰ�˺ŵ�Cookies
	static const char *getCookies();

	// ������Ϣ
	static int send(GroupMsg msg);

	static int log(Log log);

	// ȫԱ����
	static void ban(Group group);

	// Ⱥ��Ա����
	static void ban(Group group,Member member, int64_t duration);

	// ȫԱ���
	static void unban(Group group);

	// Ⱥ��Ա���
	static void unban(Group group, Member member);

};