using namespace std; 

int count_sheep(vector<bool> arr) 
{
int present = 0;

for(int i=0; i < arr.size(); i++){
  if (arr[i] == true)
    present++;
  }

return present;
}
