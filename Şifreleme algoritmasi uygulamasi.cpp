#include<iostream>
#include<cstring>
#include<cstdlib>


using namespace std;


 class sezar
 {
    
    private:
    char metin[100];
    char sifreliMetin[100];
    char desifreliMetin[100];
    string alfabe = "abcdefghijklmnopqrstuvwxyz";


    public:
    void sifrele();
    void desifrele();
 

 };

  void sezar:: sifrele ()
  {
       
       cout<<"Metni giriniz: ";
       gets(metin);
 
       int n;
       n=strlen(metin);
       strlwr(metin);  // kucuk harfe cevirir
       metin[n]=' \0 ';

       int i;
       i=0;

       int j;

       while ( i<n )
       {

            int sonuc;
               sonuc=0;


              for ( j=0; j<26; j++ )
              {
               
               int indis;
               indis = j;
              
               if ( metin[i] == alfabe [j])
               {

                sonuc=1;
                indis = indis+3;

                if( indis >= 26 )

                    indis = indis %26;
            
                sifreliMetin[i] = alfabe[indis];

               }

               if( sonuc==0)

              sifreliMetin[i] = metin[i];

         }

      i++;
    
   }

   sifreliMetin[i] = '\0';
   cout<<"Sifreli metin: "<<sifreliMetin<<endl;


  }

   void sezar:: desifrele ()

   {

     int n;
     n=strlen(sifreliMetin);
     int i;
     i=0;
     int j;
     
     while( i < n )
     {

       int sonuc;
       sonuc=0;

       for ( i = 0; i < 26 ;i++)
       {

        int indis;
        indis=j;

        if ( sifreliMetin[i] == alfabe[j] )
        {

            sonuc=1;
            indis = indis-3;

            if( indis < 0 )

              indis = indis + 26;
              desifreliMetin[i] = alfabe[indis];

         }

        if ( sonuc==0 )
        desifreliMetin[i] = sifreliMetin[i];

        }

        i++;
     
    }

     desifreliMetin[i] = '\0';        
     cout<<"Desifreli metin: "<<desifreliMetin<<endl;

}



int main()

{

    system("color B");
    sezar s1;
    s1.sifrele();
    s1.desifrele();


    return 0;

}