#include <iostream>

#include <cstring>
using namespace std;

int main(){
    char arr[10]={"aman"};
    char arr2[10]={"jha"};
    int size=strlen(arr);
    char catarr[20];
    for (int i=0;i<size;i++){
        catarr[i]=arr[i];
    }
    int size2=strlen(arr2);
     for (int i=0;i<size2;i++){
        catarr[size+i]=arr2[i];
    }
    size=strlen(catarr);
    cout<<endl;
        for (int i=0;i<=size;i++){
            cout<<catarr[i];
        }
    //reversal
    char arr5[20]={"amanjha"};
    size=strlen(arr5);
    char arr3[10];
    cout<<endl;
    for (int i=0;i<=size;i++){
        arr3[i]=arr5[size-i];
        cout<<arr3[i];
    }
    //deleting vowels
    char vowels[6]={"aeiou"};
    for (int i=0;i<=5;i++){
       for (int j=0;j<=size;j++){
            if (vowels[i]==arr5[j]){
                arr5[j]='\0';
            }
        
        } 
    }
    cout<<endl;
        for (int i=0;i<=size;i++){
            cout<<arr5[i];
        }
    char arr4[10]={"amanjha"};
    //lowercase and uppercase
        for (int i=0;i<size;i++){
            if ((int(arr4[i]))<97){
                (arr4[i])+=32;}
            else{
                (arr4[i])-=32;
            }


        }
        cout<<endl;
        for (int i=0;i<=size;i++){
            cout<<arr4[i];
        }
    // sorting
    
         for (int j=0;j<size;j++){
        for (int i=0;i<size-1;i++){
            if (arr4[i]>arr4[i+1]){
                swap(arr4[i],arr4[i+1]);
      


        }
    }

}
         cout<<endl;
        for (int i=0;i<=size;i++){
            cout<<arr4[i];
        }
    
    return 0;
}