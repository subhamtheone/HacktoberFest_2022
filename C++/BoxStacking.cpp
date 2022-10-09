//BoxStacking with C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 
struct Box
{
    
    int length, width, height;
};
 

vector<Box> createAllRotations(vector<Box> const &boxes)
{
    
    vector<Box> rotations;
 
    
    for (const Box &box: boxes)
    {
       
        rotations.push_back(box);
 
        
        rotations.push_back({ max(box.length, box.height),
                        min(box.length, box.height),
                        box.width });
 
     
        rotations.push_back({ max(box.width, box.height),
                        min(box.width, box.height),
                        box.length });
    }
 
    return rotations;
}
 

int findMaxHeight(vector<Box> const &boxes)
{
    
    if (boxes.size() == 0) {
        return 0;
    }
 
  
    vector<Box> rotations = createAllRotations(boxes);
 
   
    sort(rotations.begin(),
        rotations.end(),
        [](const Box &x, const Box &y) {
            return x.length * x.width > y.length * y.width;
        });
 
 
    vector<int> max_height(rotations.size());
 
    
    for (int i = 0; i < rotations.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
           
            if (rotations[i].length < rotations[j].length &&
                    rotations[i].width < rotations[j].width) {
                max_height[i] = max(max_height[i], max_height[j]);
            }
        }
 
        max_height[i] += rotations[i].height;
    }
 
    
    return *max_element(max_height.begin(), max_height.end());
}
 
int main()
{
    
    vector<Box> boxes {
        { 4, 2, 5 },
        { 3, 1, 6 },
        { 3, 2, 1 },
        { 6, 3, 8 }
    };
 
    cout << "The maximum height is " << findMaxHeight(boxes) << endl;
 
    return 0;
}