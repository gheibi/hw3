#include <cmath>
#include <iostream>
#include <cstdlib>
//------------Begin the added part 1---------------------------
#include <ctime>
//---------------End 1------------------------
using namespace std;

//---------------Begin 2-----------------------------------------
void random_number(double*x,const int N){
      for (int i=0; i<N; i++)
         x[i]= double (rand())/RAND_MAX;    
  }
  
  void mean_variance (double * x,const int N, double & mean,double & var){

      for (int i=0; i<N; i++){
         mean+=x[i];
      }
      mean=mean/N;
    
      for (int i=0; i<N; i++){
	 var+=pow(x[i]-mean,2);
      } 
      var=var/N;
  }
//--------------End 2-----------------------------------------

int main(){
   const int N = 100;
   double p[N];
   double mean, var;

//--------------Begin 3-----------------------------------------
   srand (time(NULL));  
   random_number(p,N);
   mean_variance(p,N,mean,var);
   for(int i=0; i<N; i++) cout  <<"random_number["<<i<<"]"<<"\t"<< p[i] << endl;
//--------------Start 3-----------------------------------------
   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
