#ifndef __TEST_JTHREAD_H__
#define __TEST_JTHREAD_H__

/*
    �ҵı���������֧����ʵ������Ĺ���hhh���´���˵
*/

/*******************************************************************/

//�������̵߳�ֹͣ״̬������ stop_source ����
void test_jthread_get_stop_source();

/*******************************************************************/

//�������̵߳Ĺ���ֹͣ״̬������ stop_token
void test_jthread_get_stop_token();
/*******************************************************************/

//����ִ�о����̵߳Ĺ���ֹͣ״ֹ̬ͣ
void test_jthread_request_stop();
/*******************************************************************/

#define TEST_MAIN(f)\
int main(int argc,char** argv)\
{\
    f();\
    return 0;\
}\


#endif