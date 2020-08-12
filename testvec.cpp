
 #include<vector>
 #include<iostream>
 #include<algorithm>
 #include<stack>

 using namespace std;

 int main()
 {
 int i=0,small;
 int min[10];
 vector<int> v={9,1,32,4,13};
 vector<int>::iterator itr;
 itr=v.begin();
 int min;
 itr=v.begin;


 //v.assign(10,0);

 sort(v.begin(),v.end());

 for(itr=v.begin();itr!=v.end();itr++)
 {
 	min[i]=itr-itr+1;
    if(min[i]<0)
 		min[i]=min[i]*-1;
 	i++
 }

 small=min[0];

 for(i=0;i<v.end();i++)
 {
 	if(min[i+1]<min[i])
 		small=min[i+1];
 }

cout<<small<<endl;

 //for(int i=0;i<v.size();i++)
 	//cout<<v[i]<<"\t"<<endl;

 //cout<<"size="<<v.size()<<endl;
 //cout<<"capacity="<<v.capacity()<<endl;

 return 0;
 }