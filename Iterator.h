#include <windows.h>
#include <stdio.h>

int initIterator(void *pArray, 
				 size_t arrayLength, 
				 size_t byteLength);	//�C�e���[�^�̏��������s��
	
void* returnCurrentItem(void);			//���݂̔z��C���f�b�N�X�̒l��Ԃ�

int nextIndex(void);					//�Ǘ��z��̃C���f�b�N�X�����Z����