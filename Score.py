def printscore( ):
    print('Current Score')
    print(player1+": " + str(p1score))
    print(player2+": " + str(p2score))
    print(player3+": " + str(p3score))
    print(player4+": " + str(p4score))
    return
def pickgame(dum1,dum2,dum3,dum4,dum5):
    print('Which game is '+dum1+'?')
    gametype=input()
    while (gametype!='diamonds' and gametype!='tricks' and gametype!='queens' and gametype!='king of hearts' and gametype!='jacks') or (gametype==dum2 or gametype==dum3 or gametype==dum4 or gametype==dum5):
        print('Invalid Entry')
        print('Which game is '+dum1+'?')
        gametype=input()
    return gametype
def executegame(game):
    if ( game=='diamonds' ):
        global p1score
        global p2score
        global p3score
        global p4score
        print('How many diamonds did '+player1+' get?')
        p1diamonds=int(input())
        print('How many diamonds did '+player2+' get?')
        p2diamonds=int(input())
        print('How many diamonds did '+player3+' get?')
        p3diamonds=int(input())
        print('How many diamonds did '+player4+' get?')
        p4diamonds=int(input())
        while ( (p1diamonds+p2diamonds+p3diamonds+p4diamonds)!=13 ):
            print('Invalid Entry')
            print('How many diamonds did '+player1+' get?')
            p1diamonds=int(input())
            print('How many diamonds did '+player2+' get?')
            p2diamonds=int(input())
            print('How many diamonds did '+player3+' get?')
            p3diamonds=int(input())
            print('How many diamonds did '+player4+' get?')
            p4diamonds=int(input())
        p1score += ((-10)*(p1diamonds))
        p2score += ((-10)*(p2diamonds))
        p3score += ((-10)*(p3diamonds))
        p4score += ((-10)*(p4diamonds))
    if ( game=='king of hearts' ):
        print('Who got the king of hearts?')
        kingholder=input()
        while (kingholder!=player1 and kingholder!=player2 and kingholder!=player3 and kingholder!=player4):
            print('Invalid Entry')
            print('Who got the king of hearts?')
            kingholder=input()
        if kingholder==player1:
            p1score += (-75)
        elif kingholder==player2:
            p2score += (-75)
        elif kingholder==player3:
            p3score += (-75)
        elif kingholder==player4:
            p4score += (-75)
    if ( game=='jacks' ):
        print('Who finished first?')
        name1=input()
        while (name1!=player1 and name1!=player2 and name1!=player3 and name1!=player4):
            print('Invalid Entry')
            print('Who finished first?')
            name1=input()
        print('Who finished second?')
        name2=input()
        while (name2!=player1 and name2!=player2 and name2!=player3 and name2!=player4):
            print('Invalid Entry')
            print('Who finished second?')
            name2=input()
        print('Who finished third?')
        name3=input()
        while (name3!=player1 and name3!=player2 and name3!=player3 and name3!=player4):
            print('Invalid Entry')
            print('Who finished third?')
            name3=input()
        print('Who finished fourth?')
        name4=input()
        while (name4!=player1 and name4!=player2 and name4!=player3 and name4!=player4):
            print('Invalid Entry')
            print('Who finished fourth?')
            name4=input()
        while ((name1!=player1 and name2!=player1 and name3!=player1 and name4!=player1) or (name1!=player2 and name2!=player2 and name3!=player2 and name4!=player2) or (name1!=player3 and name2!=player3 and name3!=player3 and name4!=player3) or (name1!=player4 and name2!=player4 and name3!=player4 and name4!=player4)):
                print('Invalid Entry')
                print('Who finished first?')
                name1=input()
                while (name1!=player1 and name1!=player2 and name1!=player3 and name1!=player4):
                    print('Invalid Entry')
                    print('Who finished first?')
                    name1=input()
                print('Who finished second?')
                name2=input()
                while (name2!=player1 and name2!=player2 and name2!=player3 and name2!=player4):
                    print('Invalid Entry')
                    print('Who finished second?')
                    name2=input()
                print('Who finished third?')
                name3=input()
                while (name3!=player1 and name3!=player2 and name3!=player3 and name3!=player4):
                    print('Invalid Entry')
                    print('Who finished third?')
                    name3=input()
                print('Who finished fourth?')
                name4=input()
                while (name4!=player1 and name4!=player2 and name4!=player3 and name4!=player4):
                    print('Invalid Entry')
                    print('Who finished fourth?')
                    name4=input()
        if name1==player1:
            p1score += 200
        elif name1==player2:
            p2score += 200
        elif name1==player3:
            p3score += 200
        elif name1==player4:
            p4score += 200
        if name2==player1:
            p1score += 150
        elif name2==player2:
            p2score += 150
        elif name2==player3:
            p3score += 150
        elif name2==player4:
            p4score += 150
        if name3==player1:
            p1score += 100
        elif name3==player2:
            p2score += 100
        elif name3==player3:
            p3score += 100
        elif name3==player4:
            p4score += 100
        if name4==player1:
            p1score += 50
        elif name4==player2:
            p2score += 50
        elif name4==player3:
            p3score += 50
        elif name4==player4:
            p4score += 50
    if ( game=='tricks' ):
        print('How many tricks did '+player1+' get?')
        p1tricks=int(input())
        print('How many tricks did '+player2+' get?')
        p2tricks=int(input())
        print('How many tricks did '+player3+' get?')
        p3tricks=int(input())
        print('How many tricks did '+player4+' get?')
        p4tricks=int(input())
        while ( (p1tricks+p2tricks+p3tricks+p4tricks)!=13 ):
            print('Invalid Entry')
            print('How many tricks did '+player1+' get?')
            p1tricks=int(input())
            print('How many tricks did '+player2+' get?')
            p2tricks=int(input())
            print('How many tricks did '+player3+' get?')
            p3tricks=int(input())
            print('How many tricks did '+player4+' get?')
            p4tricks=int(input())
        p1score += ((-15)*(p1tricks))
        p2score += ((-15)*(p2tricks))
        p3score += ((-15)*(p3tricks))
        p4score += ((-15)*(p4tricks))
    if ( game=='queens' ):
        print('How many queens did '+player1+' get?')
        p1queens=int(input())
        print('How many queens did '+player2+' get?')
        p2queens=int(input())
        print('How many queens did '+player3+' get?')
        p3queens=int(input())
        print('How many queens did '+player4+' get?')
        p4queens=int(input())
        while ( (p1queens+p2queens+p3queens+p4queens)!=4 ):
            print('Invalid Entry')
            print('How many queens did '+player1+' get?')
            p1queens=int(input())
            print('How many queens did '+player2+' get?')
            p2queens=int(input())
            print('How many queens did '+player3+' get?')
            p3queens=int(input())
            print('How many queens did '+player4+' get?')
            p4queens=int(input())
        p1score += ((-25)*(p1queens))
        p2score += ((-25)*(p2queens))
        p3score += ((-25)*(p3queens))
        p4score += ((-25)*(p4queens))
    return

print('Who is Player 1?')
player1=input()
print('Who is Player 2?')
player2=input()
print('Who is Player 3?')
player3=input()
print('Who is Player 4?')
player4=input()
p1score=int(0)
p2score=int(0)
p3score=int(0)
p4score=int(0)
printscore()

print(player1+"'s Kingdom")
king1game1=pickgame('first','','','','')
executegame(king1game1)
printscore()
king1game2=pickgame('second',king1game1,'','','')
executegame(king1game2)
printscore()
king1game3=pickgame('third',king1game1,king1game2,'','')
executegame(king1game3)
printscore()
king1game4=pickgame('fourth',king1game1,king1game2,king1game3,'')
executegame(king1game4)
printscore()
king1game5=pickgame('fifth',king1game1,king1game2,king1game3,king1game4)
executegame(king1game5)
printscore()

print(player2+"'s Kingdom")
king2game1=pickgame('first','','','','')
executegame(king2game1)
printscore()
king2game2=pickgame('second',king2game1,'','','')
executegame(king2game2)
printscore()
king2game3=pickgame('third',king2game1,king2game2,'','')
executegame(king2game3)
printscore()
king2game4=pickgame('fourth',king2game1,king2game2,king2game3,'')
executegame(king2game4)
printscore()
king2game5=pickgame('fifth',king2game1,king2game2,king2game3,king2game4)
executegame(king2game5)
printscore()

print(player3+"'s Kingdom")
king3game1=pickgame('first','','','','')
executegame(king3game1)
printscore()
king3game2=pickgame('second',king3game1,'','','')
executegame(king3game2)
printscore()
king3game3=pickgame('third',king3game1,king3game2,'','')
executegame(king3game3)
printscore()
king3game4=pickgame('fourth',king3game1,king3game2,king3game3,'')
executegame(king3game4)
printscore()
king3game5=pickgame('fifth',king3game1,king3game2,king3game3,king3game4)
executegame(king3game5)
printscore()

print(player4+"'s Kingdom")
king4game1=pickgame('first','','','','')
executegame(king4game1)
printscore()
king4game2=pickgame('second',king4game1,'','','')
executegame(king4game2)
printscore()
king4game3=pickgame('third',king4game1,king4game2,'','')
executegame(king4game3)
printscore()
king4game4=pickgame('fourth',king4game1,king4game2,king4game3,'')
executegame(king4game4)
printscore()
king4game5=pickgame('fifth',king4game1,king4game2,king4game3,king4game4)
executegame(king4game5)
printscore()

winner=player1
winnerscore=p1score
if (p2score>winnerscore):
    winner=player2
    winnerscore=p2score
elif (p2score==winnerscore):
    winner=winner+' and '+player2
if (p3score>winnerscore):
    winner=player3
    winnerscore=p3score
elif (p3score==winnerscore):
    winner=winner+' and '+player3
if (p4score>winnerscore):
    winner=player4
    winnerscore=p4score
elif (p4score==winnerscore):
    winner=winner+' and '+player4
print(winner+' won')
