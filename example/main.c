/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2022-06-18 16:34:14
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2022-06-19 09:19:30
 * @FilePath: \matrix\example\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */


#include <stdio.h>
#include "../include/matrix.h"

int main()
{
    printf("lll\n");
    DATA_TYPE data[4]={0,1,2,3};
    DATA_TYPE data2[9]={1,1,2,3,4,5,6,7,8};
    CREATE_NEW_MARTRIX(2,2,temp,data);
    MALLOC_NEW_MARTRIX(2,2,temp2,data);
    CREATE_NEW_MARTRIX(2,2,temp3,data);
    mtx_AddMatrix(0,&temp,temp2,&temp3);
    printf("temp:%f %f %f %f\n",temp.elements[0],temp.elements[1],temp.elements[2],temp.elements[3]);
    printf("temp2:%f %f %f %f\n",temp2->elements[0],temp2->elements[1],temp2->elements[2],temp2->elements[3]);
    printf("temp3:%f %f %f %f\n",temp3.elements[0],temp3.elements[1],temp3.elements[2],temp3.elements[3]);
    mtx_SubMatrix(0,&temp,temp2,&temp3);
    printf("temp3:%f %f %f %f\n",temp3.elements[0],temp3.elements[1],temp3.elements[2],temp3.elements[3]);
    mtx_MulMatrix(1,&temp,temp2,&temp3);
    printf("temp3:%f %f %f %f\n",temp3.elements[0],temp3.elements[1],temp3.elements[2],temp3.elements[3]);
    CREATE_NEW_MARTRIX(2,2,temp5,NULL);
    mtx_transMatrix(&temp3,&temp5);
    printf("temp3:%f %f %f %f\n",temp5.elements[0],temp5.elements[1],temp5.elements[2],temp5.elements[3]);
    DATA_TYPE det; 
    MALLOC_NEW_MARTRIX(3,3,temp4,data2);
    MALLOC_NEW_MARTRIX(3,3,temp6,data2);
    mtx_Determinant(temp4,&det);
    printf("det[temp2]:%f\n",det);
    mtx_invMatrix(temp4,temp6);
    printf("temp2:%f %f %f %f %f %f %f %f %f\n",temp6->elements[0],temp6->elements[1],temp6->elements[2],temp6->elements[3],
    temp6->elements[4],temp6->elements[5],temp6->elements[6],temp6->elements[7],temp6->elements[8]);
    DELETE_MARTRIX(temp2);
    DELETE_MARTRIX(temp4);
    DELETE_MARTRIX(temp6);
    return 0;
}