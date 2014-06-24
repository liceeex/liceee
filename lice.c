#include<curses.h>

main(){

  WINDOW *p1,*p2,*p3;

  initscr();//开启 curses 模式

  refresh();//刷新屏幕

  int j,i,k;

  j=fork();

  if(j==0){

    p1=newwin(30,30,1,4);//建立一个指定大小的窗口，长，宽，起始位置

    box(p1,ACS_VLINE,ACS_HLINE);//画窗口                           

    mvwprintw(p1,1,1,"the process1");//在窗口中某一点显示字符串

    wrefresh(p1);      

    for(i=0;i<5;i++){

      sleep(1);

      mvwprintw(p1,3+i,1, "the first display %d",i+1);

      wrefresh(p1);           

    }              

    delwin(p1); 

  }

  if(j>0){

    k=fork();

    if(k==0){

      p2=newwin(30,30,1,35);//建立一个指定大小的窗口，长，宽，起始位置

      box(p2,ACS_VLINE,ACS_HLINE);//画窗口

      mvwprintw(p2,1,1,"the process2");//在窗口中某一点显示字符串

      wrefresh(p2);         

      for(i=0;i<5;i++){

	sleep(1);

	mvwprintw(p2,3+i,1, "the second display %d",i+24);

	wrefresh(p2);           

      }

      delwin(p2);

    }

    if(k>0){

      p3=newwin(30,30,1,66);//建立一个指定大小的窗口，长，宽，起始位置

      box(p3,ACS_VLINE,ACS_HLINE);//画窗口                            

      mvwprintw(p3,1,1,"the process3");//在窗口中某一点显示字符串

      wrefresh(p3);         

      for(i=0;i<5;i++){

	sleep(1);

	mvwprintw(p3,3+i,1, "the third display %d",i+49);

	wrefresh(p3 );          

      }

      delwin(p3); 

    }

  }

  getch();

  endwin();

  return 0;

}
