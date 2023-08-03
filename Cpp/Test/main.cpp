#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
struct Workshop
{
    int startTime;
    int duration;
    int endTime;
};

struct Available_Workshops
{
    int n;  //number of signed workshop
    Workshop* aw = new Workshop[n];
};

//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops* initialize(int* pstart_time,int* pduration,int n)
{
    Available_Workshops* paW = new Available_Workshops;

    for(int i=0; i<n; i++)
    {
        Workshop ws;
        ws.startTime = *(pstart_time + i);
        ws.duration = *(pduration + i);
        ws.endTime = ws.startTime + ws.duration;
        paW->aw[i] = ws;
    }
    paW->n = n;
    return paW;
}

int CalculateMaxWorkshops(Available_Workshops* workshopsPtr)
{
    if (workshopsPtr->aw == nullptr) return 0;
    std::sort((workshopsPtr->aw).begin(), workshopsPtr->aw->end());

    Workshop* lastPtr = &workshopsPtr->aw[0];
    int res = 1;
    for (int i = 1; i < workshopsPtr->n; i++){
        if (lastPtr->endTime <= workshopsPtr->aw[i].startTime){
            res++;
            lastPtr = &workshopsPtr->aw[i];
        }
    }
    return res;
}


int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
