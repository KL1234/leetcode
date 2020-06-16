int maxArea(int* height, int heightSize){
    int i,j,max=0,min;
    for(i=0;i<heightSize;i++){
        for(j=heightSize-1;j>i;j--){
            if(height[j]<height[heightSize-1]) continue;
            
            if(height[i]>height[j]){
                min=height[j];
            }
            else min=height[i];
            if((j-i)*min>max){
                max=(j-i)*min;
            }
        }
    }
    return max;
}