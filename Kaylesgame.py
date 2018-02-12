list=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
end_list=['_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_']
print(list)
Player_Number=0
while True:
    if Player_Number== 0 or Player_Number==1 or Player_Number==2:
        if Player_Number==0:
            Player_Number+=1
        elif Player_Number==1:
            Player_Number+=1
        elif Player_Number==2:
            Player_Number-=1
        while True:
            print('Player '+ str(Player_Number)+' turn')
            x=float(input('enter first number :' '\n'))
            if x not in list:
                print('This number is out of range' '\n')
                continue
            y=float(input('enter second number or enter 0 to end turn ' '\n'))
            if y ==0:
                list[list.index(x)]='_'
                break
            elif y < x-1 or y > x+1 or y==x:
                print('These numbers are not adjcent' '\n')
                continue
            elif y in list:
                list[list.index(x)]='_'
                list[list.index(y)]='_'
                break
            elif y not in list:
                print('This number is out of range' '\n')
                continue
        if list==end_list:
            print(list)
            print('Player '+str(Player_Number)+' won')
            input('Press enter to exit ' '\n')
            break
        else:
            print(list, '\n')
            continue


