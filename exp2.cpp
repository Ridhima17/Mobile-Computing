#include <iostream>
using namespace std;

int s1, s2, s3, s4;

// function to select stations according to the total time
void timeDivisionMultiplexing(int stations[4], int total_time){

    cout<<"The order for using the channel will be : "<<endl;
    bool delay = false;

     while(total_time != 0){
        if(delay == true){
            cout<<"No transmission happening"<<endl;
            total_time = total_time - 10;
            delay = false;
        }
        if(s1 > 0){
            cout<<"Station 1 is using the channel"<<endl;
            total_time = total_time - 10;
            s1 = s1 - 1;
        }
        if(s2 > 0){
            cout<<"Station 2 is using the channel"<<endl;
            total_time = total_time - 10;
            s2 = s2 - 1;
        }
        if(s3 > 0){
            cout<<"Station 3 is using the channel"<<endl;
            total_time = total_time - 10;
            s3 = s3 - 1;
        }
        if(s4 > 0){
            cout<<"Station 4 is using the channel"<<endl;
            total_time = total_time - 10;
            s4 = s4 - 1;
        }

        if(total_time == 30){
           delay = true;
        }
    }

}

int main() {
  
    int stations[4];
    int total_time = 120;

    cout<<"Enter time of each station: "<<endl;
    for(int i = 0; i < 4; i++){
        cout<<"Station "<<i + 1<<" "<<":"<<" ";
        cin>>stations[i];
    }

    //each slot is of 10 seconds - a station will send data for 10 seconds 
    s1 = stations[0]/10;
    s2 = stations[1]/10;
    s3 = stations[2]/10;
    s4 = stations[3]/10;
    
    timeDivisionMultiplexing(stations, total_time);

    return 0;
}