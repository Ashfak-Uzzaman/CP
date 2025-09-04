// // /*#include <iostream>
// // #include <string.h>

// // /* Sub_S = S.substr(a, b);  // a > = 0   must be!! otherwise runtime error!!!           */
// // /*
// // using namespace std;
// // int main() {
// //    string str1 = "Apples are red";
// //    string str2 = str1.substr(11, 2);
// //    string str3 = str1.substr(0, 6);

// //    cout << "Substring starting at position 11 and length 3 is: " << str2 <<endl;
// //    cout << "Substring starting at position 0 and length 6 is: " << str3;
// //    return 0;
// // }*/

#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    string s = "GoldaForIfYouAreGood";

    // string sub;
    // sub+="x";
    //  cout<<sub<<endl;
    // sub+=s.substr(5,1);
    // cout<<sub<<endl;
    // sub+="a";
    // cout<<sub<<endl;

    int i = 2;
    cout << s << endl;
    cout << s[i] << endl;
    s.erase(i, 1);
    cout << s << endl;
    cout << s[i] << endl;

    s.erase(i, 1);
    cout << s << endl;
    cout << s[i];

    // Take any string
    string s1 = "GoodForIfYouAreGood";

    cout << s1 << endl;

    // Copy two characters of s1 (starting
    // from position 3)
    string r = s1.substr(4, 3); // For

    // prints the result
    cout << "String is: " << r << endl; // For

    r = s1.substr(7, 5); // IfYou

    // prints the result
    cout << "String is: " << r; // IfYou

    return 0;
}

// // // #include <bits/stdc++.h>

// // // using namespace std;

// // // int main()
// // // {
// // //     string frase;
// // //     list<char> texto;
// // //     list<char>::iterator it;
// // //     while(getline(cin,frase))
// // //     {
// // //         texto.clear();
// // //         it = texto.begin();
// // //         for(int i=0;i<frase.size();++i)
// // //         {
// // //             if(frase[i]=='[')
// // //                 it = texto.begin();
// // //             if(frase[i]==']')
// // //                 it = texto.end();
// // //             if(frase[i]!='[' && frase[i]!=']')
// // //                 texto.insert(it,frase[i]);
// // //         }
// // //         for(it=texto.begin();it!=texto.end();it++)
// // //             printf("%c",*it);
// // //         printf("\n");
// // //     }
// // //     return 0;
// // // }

// #include <iostream>
// #include <list>
// using namespace std;
// int main()
// {
//     list<int> li = {1, 2, 3, 4};
//     list<int>::iterator itr = li.begin();
//     // for (itr = li.begin(); itr != li.end(); ++itr)
//     // {
//     //     cout << *itr << " ";
//     // }cout<<"\n";

//     li.insert(itr, 5);
//     for (itr = li.begin(); itr != li.end(); ++itr)
//     {
//         cout << *itr << " ";
//     }

//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string frase;
//     list<char> texto;
//     list<char>::iterator it;
//     while(getline(cin,frase))
//     {
//         texto.clear();
//         it = texto.begin();
//         for(int i=0;i<frase.size();++i)
//         {
//             if(frase[i]=='[')
//                 it = texto.begin();
//             if(frase[i]==']')
//                 it = texto.end();
//             if(frase[i]!='[' && frase[i]!=']')
//                 texto.insert(it,frase[i]);
//         }
//         for(it=texto.begin();it!=texto.end();it++)
//             printf("%c",*it);
//         printf("\n");
//     }
//     return 0;
// }
