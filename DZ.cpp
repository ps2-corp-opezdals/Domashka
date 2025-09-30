#include <iostream>
#include "Netzhelanya.h"
#include "Estzhelanya.h"

using namespace std;
 int main(){
    setlocale(LC_ALL, " ");
    cout << "Утренняя готовка" << endl;
    int x;
    cout << "Есть желание готовить? 1-да; 0-нет ";
    cin >> x ;
    if (x == 0){
        Varit ();
    }
    else {
        Zharit();
    }
    return 0;
    
 }