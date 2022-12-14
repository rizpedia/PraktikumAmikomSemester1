#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 50; // ukuran max
    int count = 0;       // jumlah data tersimpan
    string phones[SIZE];
    string names[SIZE];
    string addresses[SIZE];

    // struktur menu:
    string menu;
    while (true)
    {
        system("cls");
        cout << "Phonebook\n";
        cout << "[1] Insert\n";
        cout << "[2] Show\n";
        cout << "[3] Exit\n";
        cout << "Select: ";
        getline(cin, menu);
        switch (menu[0])
        {
        case '1':
            // input:
            while (true)
            {
                string ip, in, ia;
                system("cls");

                cout << "Phone: ";
                getline(cin, ip);
                // jika nomor telp. kosong, input selesai
                if (ip == "")
                    break;

                cout << "Name : ";
                getline(cin, in);
                cout << "Addr.: ";
                getline(cin, ia);

                // simpan ke array:
                phones[count] = ip;
                names[count] = in;
                addresses[count] = ia;

                // update jumlah data / index:
                ++count;
            }
            break;
        case '2':
            // show:
            system("cls");
            cout << "----------------------------------------------------------------------\n";
            cout << setw(14) << "PHONE NUM" << setw(25) << "NAME" << setw(31) << "ADRRESS";
            cout << "\n----------------------------------------------------------------------\n";

            for (int i = 0; i < count; ++i)
            {
                cout << setw(14) << phones[i];
                cout << setw(25) << names[i];
                cout << setw(31) << addresses[i];
                cout << endl;
            }
            cout << "----------------------------------------------------------------------\n";
            system("pause");
            break;
        case '3':
            return 0;
        }
    }

    return 0;
}