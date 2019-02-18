#include "stdafx.h"
#include "Main.h"

class ComponentManage;

Main::Main()
{
	if (Main::init()) {
		Sot::log(Log(LOG_INFO, "Sot", "Sot ����������"));
	}
}


Main::~Main()
{
}

bool Main::init()
{

	ComponentManage::getInstance()->getGroupMsgThreadInstance()->start();
	Sot::log(Log(LOG_INFO, "Sot", "Ⱥ����Ϣ�߳�����"));


	Py_Initialize();
	PyEval_InitThreads();
	PyEval_ReleaseThread(PyThreadState_Get());
	Sot::log(Log(LOG_INFO, "Sot", "Python ��ʼ���ɹ�"));

	
	return true;

}

