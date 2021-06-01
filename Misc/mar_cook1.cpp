#include <bits/stdc++.h> 
#include<string>
#include <sstream>
using namespace std;

struct team{
	string name;
	int s,r,p;
};
int main(){
	int te,f1,f2,k;
	int results[5];
	cin>>te;
	string s;
	string result[5]; 
	team t[4],temp;
	while(te--){
		for(int i=0;i<4;i++){
			t[i].name="NULL";
			t[i].s=t[i].p=t[i].r=0;
		}
		for(int i=0;i<12;i++){
			f1=f2=0;
			k=0;
			cin>>s;
			stringstream ssin(s);
			while (ssin.good() && k< 4){
        		ssin >> result[k];
       		 	++i;
	 		}
	 		cout<<result[1]<<result[3];
	 	}
	 }
}
//			results[1]=stoi(result[1]);
//			results[3]=stoi(result[3]);
//			for(int j=0;j<4;j++){
//				if(result[0]==t[j].name){
//					f1=1;
//					t[j].s+=results[1];
//					t[j].r+=results[3];
//					if(results[1]>results[3])
//						t[j].p+=3;
//					else if(results[1]==results[3])
//						t[j].p++;
//				}
//				else if(result[4]==t[j].name){
//					f2=1;
//					t[j].s+=results[3];
//					t[j].r+=results[1];
//					if(results[3]>results[1])
//						t[j].p+=3;
//					else if(results[1]==results[3])
//						t[j].p++;
//				}
//			}
//			if(f1==0){
//					for(int j=0;j<4;j++){
//						if(t[j].name=="NULL"){
//						t[j].name=result[0];
//						t[j].s+=results[1];
//						t[j].r+=results[3];
//						if(results[1]>results[3])
//							t[j].p+=3;
//						else if(results[1]==results[3])
//							t[j].p++;
//							
//						}
//					}
//				}
//			if(f2==0){
//				for(int j=0;j<4;j++){
//					if(t[j].name=="NULL"){
//					t[j].name=result[4];
//					t[j].s+=results[3];
//					t[j].r+=results[1];
//					if(results[3]>results[1])
//						t[j].p+=3;
//					else if(results[1]==results[3])
//						t[j].p++;
//						
//					}
//				}
//			}
//		}
//		for(int i=0;i<4-1;i++){
//			for(int j=0;j<4-i-1;j++){
//				if(t[j].p>t[j+1].p){
//					temp=t[j];
//					t[j]=t[j+1];
//					t[j+1]=temp;
//				}
//			}
//		}
//		for(int i=0;i<4;i++){
//			if(t[i].p==t[i+1].p){
//				if(t[i].s-t[i].r>t[i+1].s-t[i+1].r){
//					temp=t[i];
//					t[i]=t[i+1];
//					t[i+1]=temp;
//				}
//			}
//		}
//		for(int i=2;i<4;i++){
//			cout<<t[i].name<<" ";
//		}		
//		cout<<endl;
//	}
//}
