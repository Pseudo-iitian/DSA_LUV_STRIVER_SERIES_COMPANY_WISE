void merge(vector<int> &arr,int low, int mid ,int high){
    int left = low;
    int right = mid + 1;

    vector<int> temp;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.emplace_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.emplace_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;++i){
        arr[i] = temp[i-low];
    }

}

void merge_sort(vector<int> &arr,int low, int high){

    if(low>=high) return;

    int mid = low + (high - low)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid + 1,high);
    merge(arr,low,mid,high);

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // selection sort
    vector<int> arr = {4,1,2,3,5};
    int low = 0;
    int high = arr.size() - 1;
    merge_sort(arr,low,high);

    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<" ";
    }

}


