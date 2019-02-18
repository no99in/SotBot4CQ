#pragma once
#include "stdafx.h"
#include "string"

#define LOG_DEBUG 0           //���� ��ɫ
#define LOG_INFO 10           //��Ϣ ��ɫ
#define LOG_INFOSUCCESS 11    //��Ϣ(�ɹ�) ��ɫ
#define LOG_INFORECV 12       //��Ϣ(����) ��ɫ
#define LOG_INFOSEND 13       //��Ϣ(����) ��ɫ
#define LOG_WARNING 20        //���� ��ɫ
#define LOG_ERROR 30          //���� ��ɫ


class Log
{
public:
	Log();
	Log::Log(int32_t priority,
		std::string category,
		std::string content);
	~Log();
	int32_t getPriority();
	std::string getCategory();
	std::string getContent();
private:
	int32_t priority;
	std::string category;
	std::string content;
};

