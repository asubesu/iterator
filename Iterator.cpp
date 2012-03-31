#include "Iterator.h"

//グローバル変数宣言
static void* gpArray;		//イテレータ管理する配列のポインタ
static int gnIndex;			//現在の配列インデックスを格納する
static int gnArrayLength;//配列長を格納する
static int gnByteLength;	//配列要素のバイト長を格納する

//
//イテレータの初期化を行う
//
int initIterator(void *pArray, size_t arrayLength, size_t byteLength)
{
	gpArray = pArray;				//イテレータ管理配列の初期化
	gnIndex = 0;					//参照しているインデックスの初期化
	gnArrayLength = arrayLength;	//配列長を初期化
	gnByteLength = byteLength;		//配列要素のバイト長を初期化

	return(0);
}

//
//イテレータ管理配列のアドレスを返す
//
void* returnCurrentItem(void)
{
	void * pCurrentItem;

	pCurrentItem = ((char*)gpArray + (gnIndex *gnByteLength));

	return(pCurrentItem);
} 


//
//配列のインデックスを加算
//
int nextIndex(void){

	//インデックスが配列終端の場合
	if(gnIndex >= gnArrayLength)
	{
		return(FALSE);				
	}

	//インデックスが終端でなければ加算して終了
	gnIndex++;

	return(TRUE);
}

