#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
    // zad 1,2,3
    /*vector< int > wek;
    cout << "rozmiar=" << wek.size() << " "
              << "pojemnosc=" << wek.capacity() << endl;
    int n = 100;
    for (int i = 0; i < n; i++) {
        wek.push_back(5);
        // cout << &wek[0] << endl;
    }
    cout << "rozmiar=" << wek.size() << " "
              << "pojemnosc=" << wek.capacity() << endl;
    wek.push_back(5);
    cout << "rozmiar=" << wek.size() << " "
              << "pojemnosc=" << wek.capacity() << endl;
    vector< int > wek1(100, 42);
    cout << "rozmiar=" << wek1.size() << " "
              << "pojemnosc=" << wek1.capacity() << endl;
    vector< int > wek2{100, 42}; // to jest lista inicjalizacyjna, wyjatek od reguly
    cout << "rozmiar=" << wek2.size() << " "
              << "pojemnosc=" << wek2.capacity() << endl;*/

    // zadanie 4,5,6
    /*vector< Human > wnazw;
    int             n; // liczba ludzi
    cout << "Podaj liczbe ludzi w wektorze: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string nazwa;
        cin >> nazwa;
        cout << &nazwa << endl;

        int  age = i + i + i * i + 2;
        bool likes_cats, likes_dogs;
        likes_cats = true;
        likes_dogs = false;

        // Human dH(std::move(nazwa), age, likes_cats, likes_dogs);
        Human dH(nazwa, age, likes_cats, likes_dogs);
        cout << "Jest " << dH.getName() << " wiek= " << dH.getAge()
             << " a monster: " << dH.isMonster() << endl;

        if (dH.getName() != "pop") {
            wnazw.push_back(dH);
            // wnazw.emplace_back(dH);
            cout << wnazw.size() << "  " << wnazw.capacity() << endl;
        }
        else {
            wnazw.pop_back();
            cout << wnazw.size() << "  " << wnazw.capacity() << endl;
        }
    }*/
    // zad7,8,9,10,11
    /*list< int > el;
    el.push_back(7);
    el.push_front(2);
    cout << "pierwszy:" << el.front() << " ostatni:" << el.back() << endl;
    cout << "adres pierwszego elementu:" << &el.front() << endl
         << "adres ostatniego elementu:" << &el.back() << endl;
    el.push_front(2);
    el.push_front(3);
    el.push_front(4);
    cout << "adres pierwszego elementu:" << &el.front() << endl
         << "adres ostatniego elementu:" << &el.back() << endl;
    //cout << el[0] << endl; // nie ma zdef. [] bo elelemty nie sa ciagle w pamieci*/

    // zad12

    /*vector< Human > wnazw;
    int             n; // liczba ludzi
    cout << "Podaj liczbe ludzi w wektorze: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string nazwa;
        cin >> nazwa;
        cout << &nazwa << endl;

        int  age = i + i + i * i + 2;
        bool likes_cats, likes_dogs;
        likes_cats = true;
        likes_dogs = false;

        // Human dH(std::move(nazwa), age, likes_cats, likes_dogs);
        Human dH(nazwa, age, likes_cats, likes_dogs);
        cout << "Jest " << dH.getName() << " wiek= " << dH.getAge()
             << " a monster: " << dH.isMonster() << endl;

        if (dH.getName() != "pop") {
            wnazw.push_back(dH);
            // wnazw.emplace_back(dH);
            cout << wnazw.size() << "  " << wnazw.capacity() << endl;
        }
        else {
            wnazw.pop_back();
            cout << wnazw.size() << "  " << wnazw.capacity() << endl;
        }
    }
    vector< Human >::iterator it = wnazw.begin();
    for (it = wnazw.begin(); it != wnazw.end(); ++it) {
        cout << it->getName() << endl;
    }*/

    // zad13,14
    /*list< int > el;
    el.push_back(7);
    el.push_front(2);
    cout << "pierwszy:" << el.front() << " ostatni:" << el.back() << endl;
    cout << "adres pierwszego elementu:" << &el.front() << endl
         << "adres ostatniego elementu:" << &el.back() << endl;
    el.push_front(2);
    el.push_front(3);
    el.push_front(4);
    cout << "adres pierwszego elementu:" << &el.front() << endl
         << "adres ostatniego elementu:" << &el.back() << endl;
    list< int >::iterator itp = el.begin();
    cout << "od poczatku" << endl;
    for (itp = el.begin(); itp != el.end(); ++itp) {
        cout << *itp << endl;
    }
    list< int >::iterator itk = el.end();
    cout << "od konca" << endl;
    for (itk = el.end(); itk != el.begin();) {
        --itk;
        cout << endl << *itk << endl;
    }*/
    // zad15
    /*
    list< int > el;
    el.push_back(7);
    el.push_front(2);
    cout << "pierwszy:" << el.front() << " ostatni:" << el.back() << endl;
    cout << "adres pierwszego elementu:" << &el.front() << endl
         << "adres ostatniego elementu:" << &el.back() << endl;
    el.push_front(2);
    el.push_front(3);
    el.push_front(4);
    cout << "adres pierwszego elementu:" << &el.front() << endl
         << "adres ostatniego elementu:" << &el.back() << endl;
    list< int >::iterator itp = el.begin();
    cout << "od poczatku" << endl;
    for (itp = el.begin(); itp != el.end(); ++itp) {
        cout << *itp << endl;
    }
    // lista w przod
    list< int >::const_reverse_iterator itk = el.crend();
    cout << "od poczatku" << endl;
    for (itk = el.crend(); itk != el.crbegin();) {
        --itk;
        cout << *itk << endl;
    }
    // liszta w tyl
    list< int >::const_reverse_iterator itt = el.crbegin();
    cout << "od konca" << endl;
    for (itt = el.crbegin(); itt != el.crend(); ++itt) {
        cout << *itt << endl;
    }
    */

    // zad16
    /*
    list< int >::const_reverse_iterator itt = el.crbegin();
    cout << "od konca" << endl;
    for (itt = el.crbegin(); itt != el.crend(); ++itt) {
        *itt = *itt + 1; tylko do oczytu
        cout << *itt << endl;
    }

    list< int > el;
    el.push_back(3);
    el.push_front(-1);
    el.push_front(-2);
    el.push_front(-3);

    // od konca
    list< int >::reverse_iterator itt = el.rbegin();
    cout << "od konca" << endl;
    for (itt = el.rbegin(); itt != el.rend(); ++itt) {
        *itt = *itt + 1;
        cout << *itt << endl;
    }
    */
    // zad17-12
    /*vector< Human > wnazw;
    int             n; // liczba ludzi
    cout << "Podaj liczbe ludzi w wektorze: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string nazwa;
        cin >> nazwa;
        cout << &nazwa << endl;

        int  age = i + i + i * i + 2;
        bool likes_cats, likes_dogs;
        likes_cats = true;
        likes_dogs = false;

        // Human dH(std::move(nazwa), age, likes_cats, likes_dogs);
        Human dH(nazwa, age, likes_cats, likes_dogs);
        cout << "Jest " << dH.getName() << " wiek= " << dH.getAge()
             << " a monster: " << dH.isMonster() << endl;

        if (dH.getName() != "pop") {
            wnazw.push_back(dH);
            // wnazw.emplace_back(dH);
            cout << wnazw.size() << "  " << wnazw.capacity() << endl;
        }
        else {
            wnazw.pop_back();
            cout << wnazw.size() << "  " << wnazw.capacity() << endl;
        }
    }

    for (auto it = wnazw.begin(); it != wnazw.end(); ++it) {
        cout << it->getName() << endl;
    }

    for (Human H : wnazw)
        std::cout << H.getName() << endl;

    for (const Human& H : wnazw)
        std::cout << H.getName() << endl;
    */

    // zad17-13
    list< int > el;
    el.push_back(7);
    el.push_front(2);
    cout << "pierwszy:" << el.front() << " ostatni:" << el.back() << endl;
    cout << "adres pierwszego elementu:" << &el.front() << endl
         << "adres ostatniego elementu:" << &el.back() << endl;
    el.push_front(2);
    el.push_front(3);
    el.push_front(4);
    cout << "adres pierwszego elementu:" << &el.front() << endl
         << "adres ostatniego elementu:" << &el.back() << endl;

    cout << "od poczatku" << endl;
    for (const int& e : el) {
        cout << e << endl;
    }

    cout << "od konca" << endl;
    for (auto it = el.end(); it != el.begin();) {
        --it;
        std::cout << *it << endl;
    }
}
