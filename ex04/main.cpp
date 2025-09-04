#include <iostream>
#include <fstream>

std::string replace_line(const std::string& line, const std::string& s1, const std::string& s2)
{
      std::string result;
      size_t pos = 0, found;
      while ((found = line.find(s1, pos)) != std::string::npos)
      {
         result += line.substr(pos, found - pos);
         result += s2;
         pos = found + s1.length();
      }
      result += line.substr(pos);
      return result;
}


int main(int argc, char *argv[])
{
   if (argc != 4)
   {
      std::cerr << "Invalid number of arguments" << std::endl;
      return (1);
   }

   std::string s1 = argv[2];
   std::string s2 = argv[3];

   if (s1.empty())
   {
      std::cerr << "Error: string to replace (s1) is empty!" << std::endl;
      return (1);
   }

   std::ifstream file(argv[1]);
   if (!file)
   {
      std::cerr << "Error: cannot open input file!" << std::endl;
      return (1);
   }

   std::string file_name = argv[1];
   file_name.append(".replace");
   std::ofstream file_replace(file_name);
   if (!file_replace)
   {
      std::cerr << "Error: cannot create output file!"  << std::endl;
      return (1);
   }

   std::string line;
   bool is_empty = true;
   while (std::getline(file, line))
   {
      is_empty = false;
      file_replace << replace_line(line, s1, s2) << std::endl;
   }

   if (is_empty)
      std::cerr << "Warning: input file is empty!" << std::endl;
   return (0);
}
