
 void input()
{
cout << "masukkan jumlah data pada Array :";
cin >> n;

if (n <= 20)
{
break;
}
else
{
cout << "n\Array yang anda masukkan maksimal 20 elemen.\n";
}
}
cout << endl;
cout << "========================" << endl;
cout << "masukkan element Array" << endl;
cout << "========================" << endl;

for (int i = 0; i < n; i++)
{
cout << "data ke-" << (i=1) << ":";
cin >> arr[i];
}
}