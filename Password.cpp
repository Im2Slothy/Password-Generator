include <iostream>
include <time.h>

using namespace std;


// main //

int main()
{
     srand(time(0));
     string pass;
     
     
     // data //
     data = "abcdefghijklmnopqrstuvwxyz"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "0123456789"
            "!$%-+.?"
            
     for (int i = 1; i <= 12; i++)
     {
          pass = pass + data[rand() %93]; // genrate passworded char.
     }
     
     cout<<"Your new password is: "<<pass; // the display of password
     
     return 0;
     
}
