#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "-------------------------------CDMA Implementation------------------------\n";

    int stations_size = 4;
    cout << "Number of stations (N) -> 4\n";

    cout << "\n==> Press 1 if station is sending bit 1\n";
	cout << "==> Press -1 if station is sending bit 0\n\n";

    vector<int> stations_data(stations_size);

    for(int i=0;i<stations_size;i++){
        cout << "Enter data sent by station " << i+1 << " (D" << i+1 << ")" << " ->";
        cin >> stations_data[i];
    }

    vector<int> station_1(4);
    vector<int> station_2(4);
    vector<int> station_3(4);
    vector<int> station_4(4);

    cout << "\nEnter the code for 1st station (C1) -> ";
    for(auto &i : station_1){
        cin >> i;
    }

    
    cout << "Enter the code for 2nd station (C2) -> ";
    for(auto &i : station_2){
        cin >> i;
    }

    
    cout << "Enter the code for 3rd station (C3) -> ";
    for(auto &i : station_3){
        cin >> i;
    }

    
    cout << "Enter the code for 4th station (C4) -> ";
    for(auto &i : station_4){
        cin >> i;
    }

    vector<int> r1;
    vector<int> r2;
    vector<int> r3;
    vector<int> r4;
    //Step 1
    cout <<"\n==> Step 1 : \n";
    //Station 1
    cout << "> C1 x D1 \n";
    cout << stations_data[0] << " x ";
    cout << "(";
    for(auto x : station_1){
        cout << " " << x;
    }
    cout << ") =";
    for(auto x : station_1){
        int m = stations_data[0] * x;
        r1.push_back(m);
        cout << " " << m;
    }
    cout << "\n";
    //Station 2
    cout << "> C2 x D2 \n";
    cout << stations_data[1] << " x ";
    cout << "(";
    for(auto x : station_2){
        cout << " " << x;
    }
    cout << ") =";
    for(auto x : station_2){
        int m = stations_data[1] * x;
        r2.push_back(m);
        cout << " " << m;
    }
    cout << "\n";
    //Station 3
    cout << "> C3 x D3 \n";
    cout << stations_data[2] << " x ";
    cout << "(";
    for(auto x : station_3){
        cout << " " << x;
    }
    cout << ") =";
    for(auto x : station_3){
        int m = stations_data[2] * x;
        r3.push_back(m);
        cout << " " << m;
    }
    cout << "\n";
    //Station 4
    cout << "> C4 x D4 \n";
    cout << stations_data[3] << " x ";
    cout << "(";
    for(auto x : station_4){
        cout << " " << x;
    }
    cout << ") =";
    for(auto x : station_4){
        int m = stations_data[3] * x;
        r4.push_back(m);
        cout << " " << m;
    }
    cout << "\n";
    //Step 2
    cout <<"\n==> Step 2 : \n";
    cout << "> (C1xD1)+(C2xD2)+(C3xD3)+(C4xD4)\n";
    vector<int> resultant;
    for(int i=0;i<4;i++){
        int sum = r1[i]+r2[i]+r3[i]+r4[i];
        resultant.push_back(sum);
        cout << sum << " ";
    }
    cout << "\n";
    //Step 3
    cout << "\n==> Step 3 : \n";
    int source_station;
    cout << "Enter station number you want to listen to -> ";
    cin >> source_station;

    if(source_station == 1){
        cout << "> C1 x R1\n";
        for(auto x : station_1){
            cout << " " << x;
        }
        cout << "  x ";
        for(auto x : resultant){
            cout << " " << x;
        }
        cout << "  =  ";
        int sum=0;
        for(int i=0;i<4;i++){
            sum += station_1[i] * resultant[i];
        }
        cout << sum << "\n";
        cout << "> R1/N\n";
        cout << sum << "/" << "4" << " = " << sum/4 << "\n";
        cout<<"The data received from station "<<source_station<<" is -> "<<sum/4<<endl;
    }
    else if(source_station == 2){
        cout << "> C2 x R2\n";
         for(auto x : station_2){
            cout << " " << x;
        }
        cout << "  x ";
        for(auto x : resultant){
            cout << " " << x;
        }
        cout << "  =  ";
        int sum=0;
        for(int i=0;i<4;i++){
            sum += station_2[i] * resultant[i];
        }
        cout << sum << "\n";
        cout << "> R2/N\n";
        cout << sum << "/" << "4" << " = " << sum/4 << "\n";
        cout<<"The data received from station "<<source_station<<" is -> "<<sum/4<<endl;
    }
    else if(source_station == 3){
        cout << "> C3 x R3\n";
         for(auto x : station_3){
            cout << " " << x;
        }
        cout << "  x ";
        for(auto x : resultant){
            cout << " " << x;
        }
        cout << "  =  ";
        int sum=0;
        for(int i=0;i<4;i++){
            sum += station_3[i] * resultant[i];
        }
        cout << sum << "\n";
        cout << "> R3/N\n";
        cout << sum << "/" << "4" << " = " << sum/4 << "\n";
        cout<<"The data received from station "<<source_station<<" is -> "<<sum/4<<endl;
    }
    else if(source_station == 4){
        cout << "> C4 x D4\n";
         for(auto x : station_4){
            cout << " " << x;
        }
        cout << "  x ";
        for(auto x : resultant){
            cout << " " << x;
        }
        cout << "  =  ";
        int sum=0;
        for(int i=0;i<4;i++){
            sum += station_4[i] * resultant[i];
        }
        cout << sum << "\n";
        cout << "> R4/N\n";
        cout << sum << "/" << "4" << " = " << sum/4 << "\n";
        cout<<"The data received from station "<<source_station<<" is -> "<<sum/4<<endl;
    }
    cout<<"----------------------------------------------------------\n";
    return 0;
}
