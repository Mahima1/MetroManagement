#include <iostream>
#include <cstdlib>
#include<bits/stdc++.h>
#include<windows.h> //sir's id - vimalkumar.k@gmail.com
using namespace std;
#define MAX 40

struct node {
string p;
};

class AdjacencyMatrix
{
    private:
        int n;
        int **adj;
        bool **visited;
        int dis;
    public:
        AdjacencyMatrix(int n)
        {
            dis=0;
            this->n = n;
            visited = new bool* [n];
            for(int i=0;i<n;i++)
                visited[i]= new bool[n];
            adj = new int* [n];
            for (int i = 0; i < n; i++)
            {
                adj[i] = new int [n];
                for(int j = 0; j < n; j++)
                {
                    adj[i][j] = 0;
                }
            }
        }

        void add_edge(int origin, int destin,int w)
        {
            if( origin > n || destin > n || origin < 0 || destin < 0)
            {
                cout<<"Invalid edge!\n";
            }
            else
            {
                adj[origin][destin]=w;
                adj[destin][origin]=w;
                 }
        }



        int isReachable(int s, int d, node sa[]);
        int price( );
        int print(int *,int s ,int d,node []);
        int d(){return dis;};
};

int AdjacencyMatrix::price(){
return dis*5;}

int  AdjacencyMatrix::isReachable(int s, int d, node sa[])
{
int *parent;
parent = new int [n];
            for (int i = 0; i < n; i++)
            {
                    parent[i] = -1;
            }


     for (int i = 0; i < n; i++){
        for(int j=0;j<n;j++){
          visited[i][j] = false;
          }}
queue<int> q;
visited[s][0]=true;
visited[0][s]=true;
q.push(s);
int i;
while(!q.empty())
{
    s=q.front();
    if(s==d){
         return print(parent,s,d,sa);

    }
    q.pop();
    for(i=0;i<n;++i)
{

if (!visited[s][i])
            {
                visited[s][i] = true;
                visited[i][s] = true;
                if(adj[s][i]!=0){
                    q.push(i);
                    parent[i]=s;
                }
            }}}
            return 0;
}

int AdjacencyMatrix::print(int* parent,int s,int d,node sa[]){

   static int level = 0;
    int i=0;

    if (parent[s] == -1)
    {
        cout << "\n\nShortest Path between " << sa[s].p << " and "
             << sa[d].p << " is "  << sa[s].p << " ";
        return level;
    }

    print(parent, parent[s], d,sa);
    level++;
    dis+=1;
    if (s < n)
    {
        cout << "-> " << sa[s].p ;
    }
    return level ;
}

void add(node s[],string place, int a)
{
    s[a].p=place;
}

int  search(node s[],string sa,int n){
for(int i=0;i<n;i++){
    if(s[i].p==sa)
        return i;
}

                    }


void dispsta(node s[],int a)
{
for(int i=0;i<a;i++)

{

    cout<<i+1<<"- "<<s[i].p<<"\n";
}
}

bool checks(string d,node s[]){
for(int i=0;i<37;i++){
    if(s[i].p==d)
        return true;
}
return false;
}

int main()
{
    int nodes, max_edges, origin, destin;
    string source,destination;
    nodes=37;
    AdjacencyMatrix am(nodes);
    max_edges = nodes * (nodes - 1);
    node s[nodes];

add(s,"Noida",0);
add(s,"Mayur_Vihar",1);
add(s,"Akshardham",2);
add(s,"Yamuna_Bank",3);
add(s,"Pragati_Maidan",4);
add(s,"Mandi_House",5);
add(s,"Barakhamba",6);
add(s,"Rajiv_Chowk",7);
add(s,"Karol_Bagh",8);
add(s,"Rajouri_Garden",9);
add(s,"Dwarka",10);
add(s,"Kashmere_Gate",11);
add(s,"Lal_Quila",12);
add(s,"Jama_Masjid",13);
add(s,"Delhi_Gate",14);
add(s,"Ito",15);
add(s,"Janpath",16);
add(s,"Jajpat",17);
add(s,"Moolchand",18);
add(s,"Kailash_Colony",19);
add(s,"Nehru_Place",20);
add(s,"Escorts_Mujesar",21);
add(s,"Inderlok",22);
add(s,"Punjabi_Bagh",23);
add(s,"Madipur",24);
add(s,"Udhyog_Nagar",25);
add(s,"Mundka",26);
add(s,"Samaypur_Badli",27);
add(s,"Rohini",28);
add(s,"Model_Town",29);
add(s,"New_Delhi",30);
add(s,"Civil_Lines",31);
add(s,"Chandni_Chowk",32);
add(s,"Ina",33);
add(s,"Aiims",34);
add(s,"Hauz_Khas",35);
add(s,"Huda_City_Center",36);

am.add_edge(0,1,23);
am.add_edge(1,2,23);
am.add_edge(2,3,23);
am.add_edge(3,4,23);
am.add_edge(4,5,23);
am.add_edge(5,6,23);
am.add_edge(6,7,23);
am.add_edge(7,8,23);
am.add_edge(8,9,23);
am.add_edge(9,10,23);
am.add_edge(11,12,23);
am.add_edge(12,13,23);
am.add_edge(13,14,23);
am.add_edge(14,15,23);
am.add_edge(15,5,23);
am.add_edge(5,16,23);
am.add_edge(16,17,23);
am.add_edge(17,18,23);
am.add_edge(18,19,23);
am.add_edge(19,20,23);
am.add_edge(20,21,23);
am.add_edge(22,23,23);
am.add_edge(23,24,23);
am.add_edge(24,25,23);
am.add_edge(25,26,23);
am.add_edge(27,28,23);
am.add_edge(28,29,23);
am.add_edge(29,9,23);
am.add_edge(9,30,23);
am.add_edge(30,31,23);
am.add_edge(31,32,23);
am.add_edge(32,33,23);
am.add_edge(33,34,23);
am.add_edge(34,35,23);
am.add_edge(35,36,23);

    char decision;
    cout<<"\n\nDo you want to know stations(y/n) :  ";
    cin>>decision;
    if(decision=='y'||decision=='Y')
        dispsta(s,nodes);
    start:
    cout<<"\n\nEnter source :  ";
    cin>>source;

    while(1)
    {
        bool b=checks(source,s);
        if(b)
            break;
        else{
            cout<<"\n\nERROR!!! No such station found ";
            cout<<"\nEnter new source :  ";
            cin>>source;
        }
    }
    cout<<"\n\nDestination :  ";
    cin>>destination;
    while(1)
    {
        bool b=checks(destination,s);
        if(b)
            break;
        else{
            cout<<"\n\nERROR!!! No such destination found";
            cout<<"\nEnter new destination :  ";
            cin>>destination;
        }
    }

    origin=search(s,source,nodes);
    destin=search(s,destination,nodes);
    int x=am.isReachable(origin,destin,s);

    cout << "\n\nShortest Distance between " << source
         << " and " << destination << " is " <<am.d();


cout<<"\n\n"<<"Price is :  Rs"<<am.price();
cout<<"\n\n\n\nWant to enter more? ";
cin>>decision;
if(decision=='y'||decision=='Y')
    goto start;

return 0;
}
