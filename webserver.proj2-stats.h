#include <iostream>
#include <math.h>
using namespace std;

float avg(float item[], int size) {
float sum=0;
	for(int i=0; i<size; i++) {
		sum+=item[i];
	}
float average=sum/(float)size;
	return average;
}

float median(float item[], int size) {
    if(size == 1) {
	return item[0];
    }
    for(int n = size-1; n >= 1; n--) {
		for(int i = 1; i < n; i++) {
			if(item[i-1] > item[i]) {
				int tmp = item[i-1];
				item[i-1] = item[i];
				item[i] = tmp;
			}	
		}
	}
	float median=0;
	if(size%2==1) {
		median=item[(size-1)/2];
	}
	if (size%2==0) {
		median=(item[((size-2)/2)]+item[(size/2)])/2;
	} 
	return median;
}	
	
float stdDev (float item[], float a, int size){
float sum=0;

	for(int i=0; i<size; i++) {
	sum+=pow((item[i]-a),2);	
	}
float sd=sqrt(sum/size);
	return sd;
}


float aad(float item[], float m, int size){
	float sum=0;
	for(int i=0; i<size; i++) {
		if(item[i]-m<0)
			sum+=(item[i]-m)*-1;
		else
		sum+=(item[i]-m);
	}	
	float aad=sum/size;
		return aad;
}
		
	
	


























