#include <windows.h>
#include <stdio.h>

int initIterator(void *pArray, 
				 size_t arrayLength, 
				 size_t byteLength);	//イテレータの初期化を行う
	
void* returnCurrentItem(void);			//現在の配列インデックスの値を返す

int nextIndex(void);					//管理配列のインデックスを加算する