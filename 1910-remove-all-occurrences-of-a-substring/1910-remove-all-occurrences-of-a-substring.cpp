// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         unordered_map<char,int> part_mp;
//         unordered_map<char,int> mp;

//         for(char x : part)
//         {
//             part_mp[x]++;
//         }
//         int frist = 0;

//         for(int sec = 0; sec < s.size(); sec++)
//         {   
//             mp[s[sec]]++;

//             if(sec - frist +1 == part.size())
//             {
//                 if(mp == part_mp && s.substr(frist,part.size()) == part)
//                 {
//                     s.erase(frist , part.size());
//                     mp.clear();

//                     frist = 0, sec = -1;
//                     continue;
//                 }

//                 mp[s[frist]]--;
//                 if(mp[s[frist]] == 0)
//                 {
//                     mp.erase(s[frist]);
//                 }

//                 frist++;
//             }

            
//         }
//         return s;
//     }
// };





// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
        
//         while(s.find(part) != string::npos)
//         {
//             s.erase(s.find(part),part.size());
//         }

//         return s;
//     }
// };


class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.size() > 0 && s.find(part) < s.size())
        {
            s.erase(s.find(part),part.size());
        }

        return s;
    }
};