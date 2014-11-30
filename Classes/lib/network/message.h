//www.9miao.com

#ifndef MESSAGE_H
#define MESSAGE_H

#include "Util.h"
#include "cocos2d.h"

#if (CC_TARGET_PLATFORM != CC_PLATFORM_WIN32)
typedef signed char byte;
typedef bool boolean;
#endif
using namespace cocos2d;
//����ʧ��
static const unsigned int TYPE_SELF_DEINE_MESSAGE_CONNECT_FAIL = 0xfffffA01;
//�����쳣�ж�
static const unsigned int TYPE_SELF_DEINE_MESSAGE_CONNECT_TERMINATE = 0xfffffA02;
//�������ر�����
static const unsigned int TYPE_SELF_DEINE_MESSAGE_SERVER_CLOSE_CONNECTION = 0xfffffA03;
//��Ϣ������ȥ���źźܲ
static const unsigned int TYPE_SELF_DEINE_MESSAGE_CANNOT_SEND_MESSAGE = 0xfffffA04;
//��ʾ������ܳ�������
static const unsigned int TYPE_SELF_DEINE_MESSAGE_IDLE_TIMEOUT = 0xfffffA05;
//��ʾ������ܳ�������,�����˳�����¼
static const unsigned int TYPE_SELF_DEINE_MESSAGE_RECONNECT_HINT = 0xfffffA06;
//��ʾ������ܳ�������,�����˳�����¼
static const unsigned int TYPE_SELF_DEINE_MESSAGE_RECONNECT_FORCE = 0xfffffA07;
//������ʾ
static const unsigned int TYPE_SELF_DEINE_MESSAGE_ERROR_MESSAGE = 0xfffffA08;

//
static const unsigned int TYPE_SELF_DEINE_MESSAGE_CLIENT_KILL_MESSAGE = 0xfffffA09;

class Message:public CCObject
{
public:
	
    
    char HEAD0;
    char HEAD1;
    char HEAD2;
    char HEAD3;
    char ProtoVersion;
    
    byte serverVersion[4];
    byte length[4];
    byte commandId[4];
    /**
      * ��Ϣ������
      */
    //std::string data;
    char* data;

	Message();
    int datalength();
	~Message();
};

#endif
