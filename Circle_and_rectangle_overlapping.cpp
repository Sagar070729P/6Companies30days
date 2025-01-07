class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int w = x2-x1, h = y2-y1;
        int temp1 = ((x1+w)<xCenter?x1+w:xCenter), temp2 = ((y1+h)<yCenter?y1+h:yCenter);
        int x = x1>temp1?x1:temp1;
        int y = y1>temp2?y1:temp2;
        int dist = (x-xCenter)*(x-xCenter)+(y-yCenter)*(y-yCenter);
        if (dist>radius*radius) return false;
        return true;
    }
};