// Virtual Function Example

#include <iostream>
#include <cstring>
using namespace std;

class CWA
{
protected:
    string title;
    float rating;

public:
    CWA(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};

class CWAVideo : public CWA
{
    float videolength;

public:
    CWAVideo(string s, float r, float vL) : CWA(s, r)
    {
        videolength = vL;
    }
    void display()
    {
        cout << " This is an educational video " << title << endl;
        cout << " Rating : " << rating << " out of five stars " << endl;
        cout << " Length of this video is : " << videolength << " minutes " << endl;
    }
};

class CWAText : public CWA
{
    int words;

public:
    CWAText(string s, float r, int wc) : CWA(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << " This is an educational website blog  " << title << endl;
        cout << " Rating : " << rating << " out of five stars " << endl;
        cout << " Numbers of words in this blog is : " << words << " words " << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // For code with Arsh video
    title = "C++ tutorial Videos";
    vlen = 4.56;
    rating = 4.55;
    CWAVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // For code with Arsh text
    title = "C++ tutorial Website";
    words = 433;
    rating = 4.21;
    CWAText djText(title, rating, words);
    djText.display();

    CWA *tuts[2];
    tuts[0] = &djVideo;
    tuts[0]->display();

    tuts[1] = &djText;
    tuts[1]->display();

    return 0;
}