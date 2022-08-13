/* todo:
 * chord support, more than one note at a time support
*/
#include<bits/stdc++.h>

using namespace std;

void input(vector<int>& s, vector<int> &f);
void print(vector<int> s, vector<int> f);

int main(){
    char c;
    vector<int> s;
    vector<int> f;

    while (true){
        input(s, f); 
        print(s, f);
   }
}

void input(vector<int>& s, vector<int> &f){
    int tmp;
    int notes;
    cout << "Enter string:\n";
    cin >> tmp;
    for(int i = 1; i < 7; i++){
        if(tmp==i){
            s.push_back(tmp);
        }
    }
   cout << "Enter fret:\n";
    cin >> tmp;
    for(int i = 1; i < 25; i++){
        if(tmp==i){
            f.push_back(tmp);
        }
    }
}


void print(vector<int> s, vector<int> f){
    vector<char> notes = {'e', 'B', 'G', 'D', 'A', 'E'};
    for(int i = 0; i < 6; i++){
        cout << notes[i] << "|--";
        for (int j = 0; j < f.size(); j++){
            if(s[j]==i+1){
                cout << f[j];
                if(f[j] < 10){
                    cout << "--";
                }
                else{
                    cout << "-";
                }
            }
            else{
                cout << "---";
            }
        }
        cout << "|\n";
    }
}
