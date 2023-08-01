#include<iostream>
using namespace std;
int main()
{
	char hardness = '0', yesNo = '0';
	int chances = 9, win_count = 0, lose_count = 0;
	cout << "________________________HANGMAN________________________" << endl << endl;
	cout << "*******************************************************\n\t\t Welcome to the Game!!!" << endl;
	cout << "_______________________________________________________" << endl << endl;
	cout << "******************Lets Start the Game******************" << endl << endl;

	while (1)
	{
		while (true)
		{
			cout << "The Greater the number the Harder it will be to Guess!!!\nEnter number from 1 to 10: " << endl;
			cin >> hardness;
			if (hardness == '1' || hardness == '2' || hardness == '3' || hardness == '4' || hardness == '5' || hardness == '6' || hardness == '7' || hardness == '8' || hardness == '9' || hardness == '10')
			{
				break;
			}
			cout << "Invalid Input!!!\nEnter Again!!!\n";
		}

        cout << "****************Start Guessing the word****************" << endl;

        char arr[4] = { 'w', 'o', 'o', 'd' }, a[4] = { '0' };
        int a1 = 4;
        if (hardness == '1')
        {
            cout << "Write the complete word(The number of dashes represents the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < a1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> a;
            for (int i = 0; i < a1; i++)
            {
                if (a[i] == arr[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (a[i] != arr[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < a1; i++)
            {
                if (a[i] == arr[i])
                {
                    continue;
                }
                else  if (a[i] != arr[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (a[0] == arr[0] && a[1] == arr[1] && a[2] == arr[2] && a[3] == arr[3])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }

        char arr1[5] = { 'l','i','v','e','r' }, b[5] = { '0' };
        int b1 = 5;
        if (hardness == '2')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < b1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> b;
            for (int i = 0; i < b1; i++)
            {
                if (b[i] == arr1[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (b[i] != arr1[i])
                {
                    cout << "Character " << i + 1 << " is not gussed correct." << endl;
                }
            }
            for (int i = 0; i < b1; i++)
            {
                if (b[i] == arr1[i])
                {
                    continue;
                }
                else  if (b[i] != arr1[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (b[0] == arr1[0] && b[1] == arr1[1] && b[2] == arr1[2] && b[3] == arr1[3] && b[4] == arr1[4])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }

        char arr2[6] = { 'o','r','a','n','g','e' }, c[6] = { '0' };
        int c1 = 6;
        if (hardness == '3')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < c1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> c;
            for (int i = 0; i < c1; i++)
            {
                if (c[i] == arr2[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (c[i] != arr2[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < c1; i++)
            {
                if (c[i] == arr2[i])
                {
                    continue;
                }
                else  if (c[i] != arr2[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (c[0] == arr2[0] && c[1] == arr2[1] && c[2] == arr2[2] && c[3] == arr2[3] && c[4] == arr2[4] && c[5] == arr2[5])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }

        char arr3[7] = { 's','p','a','r','r','o','w' }, d[7] = { '0' };
        int d1 = 7;
        if (hardness == '4')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < d1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> d;
            for (int i = 0; i < d1; i++)
            {
                if (d[i] == arr3[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (d[i] != arr3[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < d1; i++)
            {
                if (d[i] == arr3[i])
                {
                    continue;
                }
                else  if (d[i] != arr3[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (d[0] == arr3[0] && d[1] == arr3[1] && d[2] == arr3[2] && d[3] == arr3[3] && d[4] == arr3[4] && d[5] == arr3[5] && d[6] == arr3[6])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }

        char arr4[8] = { 'a','b','s','t','r','a','c','t' }, e[8] = { '0' };
        int e1 = 8;
        if (hardness == '5')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < e1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> e;
            for (int i = 0; i < e1; i++)
            {
                if (e[i] == arr4[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (e[i] != arr4[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < e1; i++)
            {
                if (e[i] == arr4[i])
                {
                    continue;
                }
                else  if (e[i] != arr4[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (e[0] == arr4[0] && e[1] == arr4[1] && e[2] == arr4[2] && e[3] == arr4[3] && e[4] == arr4[4] && e[5] == arr4[5] && e[6] == arr4[6] && e[7] == arr4[7])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }

        char arr5[9] = { 'h','a','p','p','i','n','e','s','s' }, f[9] = { '0' };
        int f1 = 9;
        if (hardness == '6')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < f1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> f;
            for (int i = 0; i < f1; i++)
            {
                if (f[i] == arr5[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (f[i] != arr5[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < f1; i++)
            {
                if (f[i] == arr5[i])
                {
                    continue;
                }
                else  if (f[i] != arr5[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (f[0] == arr5[0] && f[1] == arr5[1] && f[2] == arr5[2] && f[3] == arr5[3] && f[4] == arr5[4] && f[5] == arr5[5] && f[6] == arr5[6] && f[7] == arr5[7] && f[8] == arr5[8])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }


        char arr6[10] = { 'f','r','i','e','n','d','s','h','i','p' }, g[10] = { '0' };
        int g1 = 10;
        if (hardness == '7')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < g1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> g;
            for (int i = 0; i < g1; i++)
            {
                if (g[i] == arr6[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (g[i] != arr6[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < g1; i++)
            {
                if (g[i] == arr6[i])
                {
                    continue;
                }
                else  if (g[i] != arr6[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (g[0] == arr6[0] && g[1] == arr6[1] && g[2] == arr6[2] && g[3] == arr6[3] && g[4] == arr6[4] && g[5] == arr6[5] && g[6] == arr6[6] && g[7] == arr6[7] && g[8] == arr6[8] && g[9] == arr6[9])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }

        char arr7[11] = { 'f','o','r','g','i','v','e','n','e','s','s' }, h[11] = { '0' };
        int h1 = 11;
        if (hardness == '7')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < h1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> h;
            for (int i = 0; i < h1; i++)
            {
                if (h[i] == arr7[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (h[i] != arr7[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < h1; i++)
            {
                if (h[i] == arr7[i])
                {
                    continue;
                }
                else  if (h[i] != arr7[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (h[0] == arr7[0] && h[1] == arr7[1] && h[2] == arr7[2] && h[3] == arr7[3] && h[4] == arr7[4] && h[5] == arr7[5] && h[6] == arr7[6] && h[7] == arr7[7] && h[8] == arr7[8] && h[9] == arr7[9] && h[10] == arr7[10])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }

        char arr8[12] = { 'a','p','p','r','e','c','i','a','t','i','o','n' }, j[12] = { '0' };
        int j1 = 12;
        if (hardness == '8')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < j1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> j;
            for (int i = 0; i < j1; i++)
            {
                if (j[i] == arr8[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (j[i] != arr8[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < j1; i++)
            {
                if (j[i] == arr8[i])
                {
                    continue;
                }
                else  if (j[i] != arr8[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (j[0] == arr8[0] && j[1] == arr8[1] && j[2] == arr8[2] && j[3] == arr8[3] && j[4] == arr8[4] && j[5] == arr8[5] && j[6] == arr8[6] && j[7] == arr8[7] && j[8] == arr8[8] && j[9] == arr8[9] && j[10] == arr8[10] && j[11] == arr8[11])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }

        char arr9[13] = { 'e','n','c','o','u','r','a','g','e','m','e','n','t' }, k[13] = { '0' };
        int k1 = 13;
        if (hardness == '9')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < k1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> k;
            for (int i = 0; i < k1; i++)
            {
                if (k[i] == arr9[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (k[i] != arr9[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < k1; i++)
            {
                if (k[i] == arr9[i])
                {
                    continue;
                }
                else  if (k[i] != arr9[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (k[0] == arr9[0] && k[1] == arr9[1] && k[2] == arr9[2] && k[3] == arr9[3] && k[4] == arr9[4] && k[5] == arr9[5] && k[6] == arr9[6] && k[7] == arr9[7] && k[8] == arr9[8] && k[9] == arr9[9] && k[10] == arr9[10] && k[11] == arr9[11] && k[12] == arr9[12])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }

        char arr10[14] = { 'h','a','b','i','t','u','a','l','n','e','s','s','e','s' }, l[14] = { '0' };
        int l1 = 14;
        if (hardness == '10')
        {
            cout << "Write the complete word(the number of dashes shows the number of letters in the word you have to guess): " << endl;
            for (int i = 0; i < l1; i++)
            {
                cout << "-";
            }
            cout << endl;
            cin >> l;
            for (int i = 0; i < l1; i++)
            {
                if (l[i] == arr10[i])
                {
                    cout << "Character " << i + 1 << " is guessed correct." << endl;
                }
                else if (l[i] != arr10[i])
                {
                    cout << "Character " << i + 1 << " is not guessed correct." << endl;
                }
            }
            for (int i = 0; i < l1; i++)
            {
                if (l[i] == arr10[i])
                {
                    continue;
                }
                else  if (l[i] != arr10[i])
                {
                    if (chances == 0)
                    {
                        cout << "Unfortunately!! You lost the game." << endl << "The man is hanged!!!";
                        break;
                    }
                    chances--;
                    cout << "Wrong word!!! Try Again." << endl;
                    cout << chances << " chances left." << endl;
                }
            }
            if (l[0] == arr10[0] && l[1] == arr10[1] && l[2] == arr10[2] && l[3] == arr10[3] && l[4] == arr10[4] && l[5] == arr10[5] && l[6] == arr10[6] && l[7] == arr10[7] && l[8] == arr10[8] && l[9] == arr10[9] && l[10] == arr10[10] && l[11] == arr10[11] && l[12] == arr10[12] && l[13] == arr10[13])
            {
                cout << "Congratulations! You have successfully Guessed the word." << endl;
                win_count++;
            }
            else
            {
                lose_count++;
            }
        }


        cout << "Do you want to play again? (yes / no)\nEnter 'y or Y' for yes and press 'any key' for no." << endl;
        cin >> yesNo;
        if (yesNo == 'y' || yesNo == 'Y')
        {
            cout << "********************Lets play again********************\n";
            continue;
        }
        else
        {
            cout << "Your Win count is " << win_count << endl;
            cout << "Your Lose count is " << lose_count << endl;
            break;
        }
	}

    cout << "*******************************************************\n\t\t Thanks for Playing!" << endl;
    system("pause");
	return 0;
}