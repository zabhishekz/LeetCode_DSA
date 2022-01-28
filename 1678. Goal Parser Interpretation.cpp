class Solution {
public:
    string interpret(string command) {
        string res = "";
        for(int i = 0; i < command.length(); i++){
          if(command[i] == 'G'){
              res += "G";
          }  
          else if(command[i]=='(' and command[i+1]==')')  {
              res += 'o';
              i += 1;
          }
            else{
                i++;
                while(command[i] != ')'){
                    res += command[i];
                    i++;
                }
            }
        }
        return res;
    }
};