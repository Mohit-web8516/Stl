//Complete vector program to understand its basics operations 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     // 1. Empty Vector
//     vector<int> v;

//     cout << "Initially:" << endl;
//     cout << "Size = " << v.size() << endl;
//     cout << "Capacity = " << v.capacity() << endl;

//     // 2. push_back()
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);

//     cout << "\nAfter push_back:" << endl;

//     // 3. Traversal
//     for(auto x : v)
//     {
//         cout << x << " ";
//     }

//     cout << endl;

//     // 4. size() and capacity()
//     cout << "Size = " << v.size() << endl;
//     cout << "Capacity = " << v.capacity() << endl;

//     // 5. front() and back()
//     cout << "First Element = " << v.front() << endl;
//     cout << "Last Element = " << v.back() << endl;

//     // 6. Index Access
//     cout << "Element at index 2 = "
//          << v[2] << endl;

//     // 7. insert()
//     v.insert(v.begin()+2,25);

//     cout << "\nAfter insert:" << endl;

//     for(auto x:v)
//     {
//         cout << x << " ";
//     }

//     cout << endl;

//     // 8. erase()
//     v.erase(v.begin()+1);

//     cout << "\nAfter erase:" << endl;

//     for(auto x:v)
//     {
//         cout << x << " ";
//     }

//     cout << endl;

//     // 9. pop_back()
//     v.pop_back();

//     cout << "\nAfter pop_back:" << endl;

//     for(auto x:v)
//     {
//         cout << x << " ";
//     }

//     cout << endl;

//     // 10. resize()
//     v.resize(6,100);

//     cout << "\nAfter resize:" << endl;

//     for(auto x:v)
//     {
//         cout << x << " ";
//     }

//     cout << endl;

//     // 11. empty()
//     cout << "\nIs vector empty? "
//          << v.empty() << endl;

//     // 12. clear()
//     v.clear();

//     cout << "\nAfter clear:" << endl;
//     cout << "Size = " << v.size() << endl;
//     cout << "Empty = " << v.empty() << endl;

//     return 0;
// }

////////////////////////////////////////////
//iterator
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {10,20,30,40};

//     //iterator declaration
//     vector<int> :: iterator it;

//     //Point iterator to beginning 
//     it = v.begin();

//     cout << "First value : " << *it << endl;

//     //Move iterator
//     it++;

//     cout <<"Second value : " << *it << endl;
//     it++;

//     cout << "Third value : " << *it << endl;

//     cout << "\nTraversal using iterator : \n";

//     //Traversing using iterator 

//     for (it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " ";

//     }

//     cout << endl;
//     return 0;

// }

////////////////////////////////////
// iterator fucntions

//end()

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v={10,20,30,40};

//     cout<<*(v.end()-1);
// }

/////////////////////////////////////

//rbegin()

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v={10,20,30,40};

//     cout<<*v.rbegin();
// }


////////////////////////////////////


//rend()

// #include<iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {10,20,30,40};

//     for(auto it=v.rbegin();
//     it!=v.rend();
//     it++)
// {
//     cout<<*it<<" ";
// }

// }

///////////////////////////////////////

//at()


// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v={10,20,30,40,50,60};

//     cout<<v.at(5);
    
// }


/////////////////////////////////////////////
//Erase()

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v={10,20,30,40,50,60};

//     // v.erase(v.begin()+1,v.end());
//     v.erase(v.begin()+1,v.begin()+4); //Will remove middle range (20,30,40)

//     for(auto x:v)
//     {
//         cout<<x<<" ";
//     }
// }

//////////////////////////////////////////////
//Insert

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v={10,20,30,40,50,60};
   

//     // v.erase(v.begin()+1,v.end());
//     // v.insert(v.begin(),300); //insert value at beginning
//     // v.insert(v.begin()+2,25); //insert in middle
//     // v.insert(v.begin() + 1 ,5,500);  //insert mutliple
//     // v.insert(v.end(),40); //insert at end 
//     // vector<int> copy(2,80);
  
//     // v.insert(v.begin(), copy.begin(), copy.end());
 
//     cout<< v.size() << endl;
//     for(auto x:v)
//     {
//         cout<<x<<" " ;
       
//     }
// }


/////////////////////////////////////////////////
//Program to understand copy
//insert at beginning

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     // Original vector
//     vector<int> v = {10,20,30};

//     // Copy vector
//     vector<int> copy(2,80);

//     // Insert copy vector into v
//     v.insert(v.begin(), copy.begin(), copy.end());

//     // Print final vector
//     for(auto x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }



////////////////////////////////////
//insert at end
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v={10,20,30};
//     vector<int> copy(2,80);

//     v.insert(v.end(),
//              copy.begin(),
//              copy.end());

//     for(auto x:v)
//     {
//         cout<<x<<" ";
//     }
// }


//////////////////////////////////////////////


//Complete program to understand copy 

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v = {10,20,30};
//     vector<int> copy = {80,333};

//     // Insert at beginning
//     v.insert(v.begin(),
//              copy.begin(),
//              copy.end());

//     // Insert at end
//     v.insert(v.end(),
//              copy.begin(),
//              copy.end());

//     for(auto x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }
