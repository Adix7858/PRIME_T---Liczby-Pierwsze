
 #include <iostream>

    using namespace std;

    int liczba,dziel;

    int main()
    {
        for (int i=1; i<=100000; i++)
        {   cout<<"Podaj liczbe do sprawdzenia:";
            cin>>liczba;
            if   (liczba<=2) cout<<"NIE"<<endl;
            else if (liczba==2) cout<<"NIE";
            else
            {
            for (int i=2; i<liczba; i++)
            {
                dziel=liczba%i;

                if(dziel==0)  {cout<<"NIE"<<endl; break;}
            }
                if(dziel!=0)   cout<<"TAK"<<endl;
            }
        }

        return 0;
    }
