 #include<vector>
 #include<iostream>
 #include<algorithm>

 using namespace std;

 int main()
 {
 vector<int> v={25,15,1,88,3};
 vector<int>::iterator itr;
 itr=v.begin();
 auto x=5;
 auto y=3.14159265;
 auto z=x+y;
 cout<<z<<endl;

 //v.assign(10,0);

 for(int i=0;i<5;i++)
 	v[i]=10+i;

 sort(v.begin(),v.end());

 for(itr=v.begin();itr!=v.end();itr++)
 	cout<<*itr<<"\t";


 //for(int i=0;i<v.size();i++)
 	//cout<<v[i]<<"\t"<<endl;

 //cout<<"size="<<v.size()<<endl;
 //cout<<"capacity="<<v.capacity()<<endl;

 return 0;
 }