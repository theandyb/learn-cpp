#include <iostream>
#include <set>
#include <iterator>

int main(){
    std::set <int, std::greater <int> > gquiz1;
    
    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
    gquiz1.insert(50); // only one 50 will be added to the set
    gquiz1.insert(10);

    std::set <int, std::greater <int> > :: iterator itr;

    std::cout << "\nThe set gquiz1 is : ";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        std::cout << '\t' << *itr;
    }
    std::cout << std::endl;

    return 0;
}
