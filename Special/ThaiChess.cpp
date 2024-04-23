#include<iostream>
#include <cmath>

using namespace std ;

bool medCheck(char board[8][8] , pair<int, int> med)
{
    int med_Colunm = med.first ;
    int med_Rows = med.second ;

    if(med_Colunm - 1 >= 0 && med_Rows  -  1 >= 0 && board[med_Colunm - 1][med_Rows - 1] == 'K')
    {
        return true ;
    }
    else if(med_Colunm + 1 < 8 && med_Rows  -  1 >= 0 && board[med_Colunm + 1][med_Rows - 1] == 'K')
    {
        return true ;
    }
    else if(med_Colunm - 1 >= 0 && med_Rows  +  1 < 8 && board[med_Colunm - 1][med_Rows + 1] == 'K')
    {
        return true ;
    }
    else if(med_Colunm + 1 < 8 && med_Rows  +  1 < 8 && board[med_Colunm + 1][med_Rows + 1] == 'K')
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

bool coneCheck(char board[8][8] , pair<int, int> cone)
{
    int cone_Colunm = cone.first ;
    int cone_Rows = cone.second ;

     if (cone_Colunm - 1 >= 0 && cone_Rows - 1 >= 0 && board[cone_Colunm - 1][cone_Rows - 1] == 'K')
    {
        return true ;
    }
    else if (cone_Colunm - 1 >= 0 && board[cone_Colunm - 1][cone_Rows] == 'K')
    {
        return true ;
    }
    else if (cone_Colunm - 1 >= 0 && cone_Rows + 1 < 8 && board[cone_Colunm - 1][cone_Rows + 1] == 'K')
    {
        return true ;
    }
    else if (cone_Colunm + 1 < 8 && cone_Rows - 1  >= 0 && board[cone_Colunm + 1][cone_Rows - 1] == 'K')
    {
        return true ;
    }
    else if (cone_Colunm + 1 < 8 && cone_Rows + 1 < 8 && board[cone_Colunm + 1][cone_Rows + 1] == 'K')
    {
        return true ;
    }
    else
    {
        return false ;
    }
}

bool horseCheck(char board[8][8] , pair<int, int> horse)
{
    int horse_Colunm = horse.first ;
    int horse_Rows = horse.second ;

    if(horse_Colunm - 2 >= 0 && horse_Rows - 1 >= 0 && board[horse_Colunm - 2][horse_Rows - 1] == 'K')
    {
         return true ;

    }else if(horse_Colunm - 2 >= 0 && horse_Rows + 1 < 8 && board[horse_Colunm - 2][horse_Rows + 1] == 'K')
    {
         return true ;

    }else if(horse_Colunm - 1 >= 0 && horse_Rows - 2 >= 0 && board[horse_Colunm - 1][horse_Rows - 2] == 'K')
    {
         return true ;

    }else if(horse_Colunm - 1 >= 0 && horse_Rows + 2 < 8 && board[horse_Colunm - 1][horse_Rows + 2] == 'K')
    {
         return true ;

    }else if(horse_Colunm + 2 < 8 && horse_Rows + 1 < 8 && board[horse_Colunm + 2 ][horse_Rows + 1] == 'K')
    {
         return true ;

    }else if(horse_Colunm + 2 < 8 && horse_Rows - 1 >= 0 && board[horse_Colunm + 2][horse_Rows - 1] == 'K')
    {
         return true ;

    }else if(horse_Colunm + 1 < 8 && horse_Rows + 2 < 8 && board[horse_Colunm + 1][horse_Rows + 2] == 'K')
    {
         return true ;

    }else if(horse_Colunm + 1 < 8 && horse_Rows - 2 >= 0 && board[horse_Colunm + 1][horse_Rows - 2] == 'K')
    {
         return true ;

    }else
        {
            return false ;
        }
}

bool BoatCheck(char board[8][8] , pair<int, int> boat )
{
    int boat_Colunm = boat.first ;
    int boat_Rows = boat.second ;

    //check right
    for(int x = boat_Rows + 1 ; x < 8 ; x++)
    {
        if(board[boat_Colunm][x] == 'K')
        {
            return true ;

        }else if(board[boat_Colunm][x] != '.')
            {
                break ;
            }
    }


    //check left
    for(int x = boat_Rows - 1  ; x >= 0 ; x--)
    {
        if(board[boat_Colunm][x] == 'K')
        {
            return true ;

        }else if(board[boat_Colunm][x] != '.')
            {
                break ;
            }
    }


    //check top
    for(int y = boat_Colunm - 1 ; y >= 0 ; y--)
    {
        if(board[y][boat_Rows] == 'K')
        {
            return true ;

        }else if(board[y][boat_Rows] != '.')
            {
                break ;
            }
    }



    for(int y = boat_Colunm  + 1 ; y < 8 ; y++)
    {
        if(board[y][boat_Rows] == 'K')
        {
            return true ;

        }else if(board[y][boat_Rows] != '.')
            {
                break ;
            }
    }
    return false ;
}

bool SoldierCheck(char board[8][8] , pair<int, int> soldier)
{
    int soldier_Colunm = soldier.first ;
    int soldier_Rows = soldier.second ;

     if (soldier_Colunm - 1 >= 0 && soldier_Rows  -  1 >= 0 && board[soldier_Colunm - 1][soldier_Rows - 1] == 'K')
    {
        return true ;
    }
    else if (soldier_Colunm - 1 >= 0 && soldier_Rows  + 1 < 8 && board[soldier_Colunm - 1][soldier_Rows + 1] == 'K')
    {
        return true ;
    }else
    {
        return false ;
    }
}

bool Check_king(char board[8][8])
{
    pair<int, int> kingBlack , kingWhite ;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i][j] == 'k')
            {
                kingBlack = make_pair(i, j); ;
            } else if (board[i][j] == 'K')
                {
                    kingWhite = make_pair(i, j); ;
                }
        }
    }

    int rowKing = abs(kingBlack.first - kingWhite.first) ;
    int colKing = abs(kingBlack.second - kingWhite.second) ;

    return (rowKing <= 1 && colKing <= 1) ;
}

int table[] = {'a','b','c','d','e','f','g','h'};

bool Check_allChess(char board[8][8])
{
    pair<int, int> med , cone , soldier , horse , boat ;
    for(int i = 7 ; i >= 0 ; i--)
    {
        for(int j = 0 ; j < 8 ; j++)
        {
            if (board[i][j] == 'm')
            {
               med = make_pair(i, j);
                if(medCheck(board , med))
                {
                    return true ;
                }
            }else if (board[i][j] == 'c')
                {
                    cone = make_pair(i, j);
                    if(coneCheck(board , cone))
                    {
                        return true ;
                    }
                }else if (board[i][j] == 's')
                    {
                        soldier = make_pair(i, j);
                        if(SoldierCheck(board , soldier))
                        {
                            return true ;
                        }
                    }else if (board[i][j] == 'h')
                        {
                            horse = make_pair(i, j);
                            if(horseCheck(board , horse))
                            {
                                return true ;
                            }
                        }else if (board[i][j] == 'b')
                            {
                                boat = make_pair(i, j);
                                if(BoatCheck(board , boat))
                                {
                                    return true ;
                                }
                            }else if(board[i][j] == 'k')
                                {
                                    if(Check_king(board))
                                    {
                                        return true ;
                                    }
                                }
            }
        }
     return false ;
}



int count_All_attackKing(char board[8][8])
{
    pair<int, int> med , cone , soldier , horse , boat  , kingBlack ;
    int count = 0 ;
    for(int i = 7 ; i >= 0 ; i--)
    {
        for (int j = 0; j < 8; j++)
        {
            switch (board[i][j])
            {
                case 'm':
                    med = make_pair(i, j);
                    if (medCheck(board , med))
                    {
                        cout << "Med(" << (char)table[j] << 8- i << ") Check" << endl ;
                        count++ ;
                    }
                    break ;

                case 'c':
                    cone = make_pair(i, j);
                    if (coneCheck(board , cone))
                    {
                        cout << "Cone(" << (char)table[j] << 8- i << ") Check" << endl ;
                        count++ ;
                    }
                    break ;

                case 's':
                    soldier = make_pair(i, j);
                    if (SoldierCheck(board , soldier))
                    {
                        cout << "Soldier(" << (char)table[j] << 8- i << ") Check" << endl ;
                        count++ ;
                    }
                    break ;

                case 'h':
                    horse = make_pair(i, j);
                    if (horseCheck(board , horse))
                    {
                        cout << "Horse(" << (char)table[j] << 8- i << ") Check" << endl ;
                        count++ ;
                    }
                    break ;

                case 'b':
                    boat = make_pair(i, j);
                    if (BoatCheck(board , boat))
                    {
                        cout << "Boat(" << (char)table[j] << 8- i << ") Check" << endl ;
                        count++ ;
                    }

                default:

                    break ;
            }

        }
    }
    return count ;
}


int Count_kingMove(char board[8][8])
{
    char tmpKingWhite ;
    int Count = 0 ;

    for(int i = 0 ; i < 8 ; i++)
    {
        for(int j = 0 ; j < 8 ; j++)
        {
            if(board[i][j] == 'K')
            {

                for(int m = i - 1 ; m <= i + 1 ; m++)
                {
                    for(int n = j - 1 ; n <= j +1 ; n++)
                    {

                            if (m < 0 || n < 0 || m >= 8 || n >= 8 || board[m][n] == 'K' || isupper(board[m][n]))
                            {
                                continue ;
                            }
                            tmpKingWhite = board[m][n] ;
                            board[m][n] = 'K' ;
                            board[i][j] = '.' ;

                            if(!Check_allChess(board))
                            {
                                Count++ ;
                            }

                            board[m][n] = tmpKingWhite ;
                            board[i][j] = 'K' ;

                    }
                }
            }
        }
    }
    return Count ;
}

int main()
{
    int round ;
    char board [8][8] ;

    cin >> round ;

    while(round--)
    {
        for(int i = 0 ; i < 8; i++)
        {
            for(int j = 0 ; j < 8 ; j++)
            {
                cin >> board[i][j] ;
            }
        }
        if (!Check_king(board))
        {
            cout << "Check By King = False, It's OK." << endl ;
            int count = count_All_attackKing(board) ;
            cout << "Sum of check by attack team = " << count << endl ;

            int count_Move = Count_kingMove(board) ;

            if(count_Move == 0)
            {
                if(count == 0)
                {
                    cout << "Draw." << endl ;
                }else
                    {
                        cout << "Attack Team Win." << endl ;
                    }
            }else
                {
                    cout << "Keep Playing (King Can Move = " << count_Move << ")" << endl ;
                }

        }else
            {
                cout << "Check By King = True, End Game." << endl ;
            }
    }

    return 0;
}
