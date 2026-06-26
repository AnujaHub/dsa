#incldue<iostream.h>
// INCOMPLETE
int main(){
    

    arr[] ={10 , 20, -10};

    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0 ; int j=i+1;
    
    while(i || j < n){
        
        
        for(i=0;i<n;i++) {
            // case1 : same , no collision
        if(arr[i]>0 && arr[j>0] || arr[i]<0 && arr[j]<0){ 
            j++;
        }
            // case 02 : diff , smaller explodes
        else {
            if ( arr[i]<arr[j] ){
                // delete arr[i]
                i++;
            }
            else{
                // delete arr[j]
                j++;
            }
        }
        }
    }

       return arr;
}