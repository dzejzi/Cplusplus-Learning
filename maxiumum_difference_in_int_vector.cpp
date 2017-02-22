#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;

  	Difference( vector <int> b): elements (b) // coœ jak konstruktor kopiujacy
  	{
  	}

   void computeDifference()
  	{
  	     sort( elements.begin(), elements.end() ); //sortowanie tablicy
  	      maximumDifference = (*(elements.end()-1) - *elements.begin()); //


  	}

 }; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a); // odwolanie do jakiejs wartosci trzeba zrobic konstruktor kopiujacy czy cos

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}


