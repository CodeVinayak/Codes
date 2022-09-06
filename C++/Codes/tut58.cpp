#include<iostream>
#include<cstring>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string s,float r){
            title = s;
            rating = r;
        }
        virtual void display()=0; // Do - Nothing function --> Pure virtual function
};
class cwhvideo: public cwh
{
    float videolength;
    public:
        cwhvideo(string s,float r,float vl):cwh(s,r){
        videolength=vl;
        }
        void display(){
            cout<<"This  is an amazing video with title "<<title<<endl;
            cout<<"Rating: "<< rating<<"out of 5 stars"<<endl;
            cout<<"Lengths of this video is: "<<videolength<<endl;
        }
};
class cwhtext: public cwh
{
    int words;
    public:
        cwhtext(string s,float r,int wc):cwh(s,r){
        words=wc;
        }
        void display(){
        cout<<"This  is an amazing text turorial with title"<<title<<endl;
        cout<<"Rating of text: "<<rating<<"out of 5 stars"<<endl;
        cout<<"Number of text in turorial is: "<<words<<endl;
        }
};

int main(){
    string title;
    float rating,vlen;
    int words;

    //for codewitharry video
    title = "Coding tutorial";
    vlen=4.5;
    rating =4.2;
    cwhvideo vksvideo(title,rating,vlen);
    // vksvideo.display();

    //for codewitharry text
    title = "Coding text";
    words=450;
    rating =4.0;
    cwhtext vkstext(title,rating,words);
    // vkstext.display();

    //doing it with pointes
    cwh*tuts[2];
    tuts[0]=&vksvideo;
    tuts[1]=&vkstext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

// Rules for virtual function
/* 1.  They cannot be static
2. They are accedssed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used.
5. If A virtual function is defined in  a base class ,there is no necessity of redifining it in the derived class */