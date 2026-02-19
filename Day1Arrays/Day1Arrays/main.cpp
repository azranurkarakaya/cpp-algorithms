//
//  main.cpp
//  Day1Arrays
//
//  Created by Azranur Karakaya on 19.02.2026.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "dizi boyutunu girin: ";
    cin >> n;
    int arr[100];
    cout<< "dizi elemanlarini girin: ";
    for (int i=0; i<n ; i++) {
        cin >> arr[i];
        
    }
    // en kucuk en buyuk elamanı buluyoruz
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i<n ; i++) {
        if (arr[i]< min ) {
            min= arr[i];
            
        }
        if (arr[i]>max) {
            
            max = arr[i];
        }
    }
    
    cout<<  "en kucuk eleman: " << min << endl;
    cout << "en buyuk eleman:" << max << endl;
    
    // diziyi ters ceviriyoruz
    cout<<"ters dizi: ";
    for (int i = n-1; i>=0 ; i--) {
        cout << arr[i]<< "  ";
    }
    cout<< endl;
    
    // sayi arama
    
    int search;
    cout<< "aranacak sayiyi girin: ";
    cin >> search;
    bool found = false ;
    for (int i=0 ; i<n ; i++) {
        if (arr[i]== search) {
            found= true ;
            break;
            
        }
    }
    if (found)
        cout<< "sayi bulundu! \n";
        else
            cout<< " sayi bulunamadi:( \n" ;
    //  bubble sort
    for (int i= 0; i<n-1 ; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j]>arr[j+1]) {
                int temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
                
            }
        }
    }
    cout<< "siralanmis dizi: ";
    for (int i = 0 ; i<n; i++) {
        cout<< arr[i]<<"  ";
    }
    
    
    
    return 0;
}
