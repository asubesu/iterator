#include "Iterator.h"

//�O���[�o���ϐ��錾
static void* gpArray;		//�C�e���[�^�Ǘ�����z��̃|�C���^
static int gnIndex;			//���݂̔z��C���f�b�N�X���i�[����
static int gnArrayLength;//�z�񒷂��i�[����
static int gnByteLength;	//�z��v�f�̃o�C�g�����i�[����

//
//�C�e���[�^�̏��������s��
//
int initIterator(void *pArray, size_t arrayLength, size_t byteLength)
{
	gpArray = pArray;				//�C�e���[�^�Ǘ��z��̏�����
	gnIndex = 0;					//�Q�Ƃ��Ă���C���f�b�N�X�̏�����
	gnArrayLength = arrayLength;	//�z�񒷂�������
	gnByteLength = byteLength;		//�z��v�f�̃o�C�g����������

	return(0);
}

//
//�C�e���[�^�Ǘ��z��̃A�h���X��Ԃ�
//
void* returnCurrentItem(void)
{
	void * pCurrentItem;

	pCurrentItem = ((char*)gpArray + (gnIndex *gnByteLength));

	return(pCurrentItem);
} 


//
//�z��̃C���f�b�N�X�����Z
//
int nextIndex(void){

	//�C���f�b�N�X���z��I�[�̏ꍇ
	if(gnIndex >= gnArrayLength)
	{
		return(FALSE);				
	}

	//�C���f�b�N�X���I�[�łȂ���Ή��Z���ďI��
	gnIndex++;

	return(TRUE);
}

