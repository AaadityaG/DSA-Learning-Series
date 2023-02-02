// First and last occurance of element of array which is duplicate => 2 times.Else return -1.
// Not Correct...

#include <iostream>
#include <vector>
using namespace std;

int FirstOcc(vector<int> a){
    int s = 0;
    int e = a.size();
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(a[mid]==a[mid+1]){               
            ans = mid;                      
            e = mid;                    
        }
        else if(a[mid]<a[mid+1]){             
            s = mid + 1;                        
        }
        else if(a[mid]>a[mid+1]){             
            e = mid - 1;                       
        }
        mid = s + (e-s)/2;                    
    }
    return ans;
}

int LastOcc(vector<int> a){
    int s = 0;
    int e = a.size();
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(a[mid]==a[mid+1]){               
            ans = mid;                      
            s = mid + 1;                    
        }
        else if(a[mid]<a[mid+1]){             
            s = mid + 1;                        
        }
        else if(a[mid]>a[mid+1]){             
            e = mid - 1;                       
        }
        mid = s + (e-s)/2;                    
    }
    return ans;
}

int main()
{    
    vector<int> v1 = {1, 3, 3, 4, 5};
    cout<<"First occ : "<<FirstOcc(v1)<<endl;
    cout<<"Last occ : "<<LastOcc(v1);
    return 0;
}