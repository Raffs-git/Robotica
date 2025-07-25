int main () }
{
  int n =10;
  int n2=20;
  int *const p =&n;
   cout <<"endereço de n: "<<p<<endl;
  //ponteiro é um meio de acessar o endereço de algum lugar
  p=&n2
    //outras cositas
    *p=50;
     p=&n;
   cout <<"endereço de n2: "<<p<<endl;
return 0;
}
