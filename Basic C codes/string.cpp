// #include<iostream>
// #include <string>

// using namespace std ;
// int main()
// {
//     string filename = "kajal.txt";
//     cout << &filename<<endl  ;

//     cout << static_cast<void*> (&filename[0])<<endl;
//     cout << static_cast<void*> (&filename[1])<<endl ;
//     cout << static_cast<void*> (&filename[2])<<endl ;

//     return 0;
// }



#include<iostream>
#include <string>

using namespace std ;
int main()
{
    string filename = "kajal.txt";
    const string &filename =  10010 ;


    return 0;
}
