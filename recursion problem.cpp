

int minIndex(int arr[], int s, int e)
{
	int sml = INT32_MAX;
	int mindex;
	for (int i = s; i < e; i++) {
		if (sml > arr[i]) {
			sml = arr[i];
			mindex = i;
		}
	}
	return mindex;
}

void fun2(int arr[], int start_index, int end_index)
{
	if (start_index >= end_index)
		return;
	int min_index;
	int temp;
}
