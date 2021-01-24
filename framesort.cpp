#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void display(vector<pair<int,string>> frames)
{
  for(int i=0;i<frames.size();i++)
    {
      cout<<frames[i].first<<" "<<frames[i].second;
      cout<<endl;
      }
      }

int main(int argc, char *argv[])
{
  int fsize;
  string msg;
  cout<<"Enter MTU:";
  cin>>fsize;
  cout<<"Enter message:";
  getline(cin,msg);
  getline(cin,msg);
  vector<pair<int,string>> frames;
  cout<<"\nAfter Fragmentation:\n";
  int f=1;
  for(int i=0;i<msg.size();i+=fsize)
  {
    frames.push_back(make_pair(f++,msg.substr(i,fsize)));
    }
  display(frames);
  cout<<"\nAfter shufflling:\n";
  random_shuffle(frames.begin(),frames.end());
  display(frames);
  cout<<"\nAfter sorting:\n";
  sort(frames.begin(),frames.end());
  display(frames);
  return 0;
  }
