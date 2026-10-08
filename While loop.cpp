#include <iostream>
using namespace std;
int main() {
   int m,n=1,l;
   cin>>m>>l;
   while(n<=l){
       cout<< m << " "<< "*"<< " "<< n <<" "<< "="<<" "<< m*n<<endl;
       n++;
   }
    return 0;
}
