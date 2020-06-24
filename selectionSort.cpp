/*
 * @Author: your name
 * @Date: 2020-06-22 19:38:28
 * @LastEditTime: 2020-06-24 18:56:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \gitest\selectionSort.cpp
 */ 
#include<iostream>
template<typename T>
void selectionSort(T arr[],int n){
     for(int i=0;i<n;i++){
             int minIndex=i;
	     for(int j=i+1;j<n;j++){
                 if(arr[j]<arr[minIndex])
			 minIndex=j;
	     }
	     sawp(arr[minIndex],arr[i]);
     }
     return ;
}
//选择排序
