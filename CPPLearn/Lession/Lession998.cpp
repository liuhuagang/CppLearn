#include <iostream>

#include <thread>
#include "Lession998.h"
#include <vector>
#include <mutex>

using namespace std;
//����һ��ȫ�ֵ���
mutex mtx;

void WorkTest()
{
	std::cout << "���߳�ִ��" << std::endl;
}
void WorkTestMulti(int id)
{
	mtx.lock();
	std::cout << " ���߳����߳�ִ��" << std::endl;
	//��ӡ�̵߳�id ȷ��
	cout << "Ŀǰ�̵߳�id" << id << "�߳�����" << this_thread::get_id() << endl;
	mtx.unlock();

	//����ʹ��printf ������̰߳�ȫ��
	printf("this is form thread %d \n", id);

	//ע����������ԭ�ӵĲ���

}

void Worker(int i)
{
	std::cout << "�̲߳��Կ�ʼ" << std::endl;

	// ������ʱ���Զ�ִ���˿�
	std::thread ThreadTest(WorkTest);
	// ��������һ��ᱨ��
	ThreadTest.join();

	//���ǲ����̣߳���ȷ���Ⱥ�˳��

	//ע�����
	//ThreadTest.detach()

	//ֻ�ܸ�һ�� �������

	if (ThreadTest.joinable())
	{
		ThreadTest.join();
	}


	//���߳̽���֮ǰҪ���������߳�
	//����������


}

void WorkerMultiTest()
{
	std::cout << "���̲߳��Կ�ʼ" << std::endl;
	//���ȸ������������ʮ���߳̽�ȥ ���������ں�̨���ɽ���
	vector<thread> Threads;

	for (int i = 0;i<10;i++)
	{
		Threads.push_back(thread(WorkTestMulti, i));

	}
	//�����߳����εȴ����ǽ������
	for (int i = 0; i < 10; i++)
	{
		Threads[i].join();
	}
	

}

void HardWare_Get()
{
	int thread_num = thread::hardware_concurrency();
	cout << "threads:" << thread_num << endl;

}
